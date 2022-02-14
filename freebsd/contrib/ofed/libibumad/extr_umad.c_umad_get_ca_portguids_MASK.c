
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int numports; TYPE_1__** ports; } ;
typedef TYPE_2__ umad_ca_t ;
typedef int __be64 ;
struct TYPE_5__ {int port_guid; } ;


 int FUNC_0 (char*,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 char* FUNC_4 (char const*,int *) ;
 scalar_t__ FUNC_5 (char const*,TYPE_2__*) ;

int FUNC_6(const char *VAR_2, __be64 *VAR_3, int VAR_4)
{
 umad_ca_t VAR_5;
 int VAR_6 = 0, VAR_7;

 FUNC_1("ca name %s max port guids %d", VAR_2, VAR_4);
 if (!(VAR_2 = FUNC_4(VAR_2, ((void*)0))))
  return -VAR_0;

 if (FUNC_5(VAR_2, &VAR_5) < 0)
  return -1;

 if (VAR_3) {
  if (VAR_5.numports + 1 > VAR_4) {
   FUNC_3(&VAR_5);
   return -VAR_1;
  }

  for (VAR_7 = 0; VAR_7 <= VAR_5.numports; VAR_7++)
   VAR_3[VAR_6++] = VAR_5.ports[VAR_7] ?
    VAR_5.ports[VAR_7]->port_guid : FUNC_2(0);
 }

 FUNC_3(&VAR_5);
 FUNC_0("%s: %d ports", VAR_2, VAR_6);

 return VAR_6;
}
