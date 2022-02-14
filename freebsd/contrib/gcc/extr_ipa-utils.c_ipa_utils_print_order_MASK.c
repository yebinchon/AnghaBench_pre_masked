
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_node {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (int ,struct cgraph_node*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;

void
FUNC_3 (FILE* VAR_1,
         const char * VAR_2,
         struct cgraph_node** VAR_3,
         int VAR_4)
{
  int VAR_5;
  FUNC_2 (VAR_1, "\n\n ordered call graph: %s\n", VAR_2);

  for (VAR_5 = VAR_4 - 1; VAR_5 >= 0; VAR_5--)
    FUNC_0(VAR_0, VAR_3[VAR_5]);
  FUNC_2 (VAR_1, "\n");
  FUNC_1(VAR_1);
}
