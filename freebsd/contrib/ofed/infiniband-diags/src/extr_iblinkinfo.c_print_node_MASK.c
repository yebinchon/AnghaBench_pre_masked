
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int info; } ;
typedef TYPE_1__ ibnd_port_t ;
struct TYPE_8__ {int numports; TYPE_1__** ports; } ;
typedef TYPE_2__ ibnd_node_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int*,char*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,char*) ;

void FUNC_3(ibnd_node_t * VAR_3, void *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = 0;
 char *VAR_7 = (char *)VAR_4;

 for (VAR_5 = 1; VAR_5 <= VAR_3->numports; VAR_5++) {
  ibnd_port_t *VAR_8 = VAR_3->ports[VAR_5];
  if (!VAR_8)
   continue;
  if (!VAR_2 ||
      FUNC_0(VAR_8->info, 0,
      VAR_1) == VAR_0) {
   FUNC_1(VAR_3, &VAR_6, VAR_7);
   FUNC_2(VAR_3, VAR_8, VAR_7);
  }
 }
}
