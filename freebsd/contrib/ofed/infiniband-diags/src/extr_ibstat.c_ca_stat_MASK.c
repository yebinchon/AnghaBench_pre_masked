
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t node_type; int numports; char* ca_name; int * ports; } ;
typedef TYPE_1__ umad_ca_t ;


 int FUNC_0 (char*,char*,char*,int,int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 char** VAR_1 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (char*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(char *VAR_2, int VAR_3, int VAR_4)
{
 umad_ca_t VAR_5;
 int VAR_6;

 if ((VAR_6 = FUNC_4(VAR_2, &VAR_5)) < 0)
  return VAR_6;

 if (!VAR_5.node_type)
  return 0;

 if (!VAR_4 && VAR_3 >= 0) {
  if (VAR_3 > VAR_5.numports || !VAR_5.ports[VAR_3]) {
   FUNC_0("%s: '%s' has no port number %d - max (%d)",
          ((unsigned)VAR_5.node_type <=
    VAR_0 ? VAR_1[VAR_5.node_type] :
    "???"), VAR_2, VAR_3, VAR_5.numports);
   return -1;
  }
  FUNC_3("%s: '%s'\n",
         ((unsigned)VAR_5.node_type <=
   VAR_0 ? VAR_1[VAR_5.node_type] : "???"),
         VAR_5.ca_name);
  FUNC_2(VAR_5.ports[VAR_3], 1);
  return 0;
 }


 FUNC_1(&VAR_5);

 if (VAR_4)
  return 0;

 for (VAR_3 = 0; VAR_3 <= VAR_5.numports; VAR_3++)
  FUNC_2(VAR_5.ports[VAR_3], 0);

 return 0;
}
