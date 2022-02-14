
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct cgraph_node {struct cgraph_node* next; } ;
struct TYPE_2__ {char* (* decl_printable_name ) (int ,int) ;} ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (struct cgraph_node*) ;
 struct cgraph_node* VAR_1 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (struct cgraph_node*) ;
 int FUNC_4 (struct cgraph_node*,int) ;
 TYPE_1__ VAR_2 ;
 char* FUNC_5 (int ,int) ;
 char* FUNC_6 (int ,int) ;

void
FUNC_7 (FILE * VAR_3)
{
  int VAR_4, VAR_5;
  tree VAR_6;
  struct cgraph_node *VAR_7;

  FUNC_2 (VAR_3, "\nPARAM TREE MAP PRINT\n");
  for (VAR_7 = VAR_1; VAR_7; VAR_7 = VAR_7->next)
    {
      FUNC_2 (VAR_3, "method  %s Trees :: \n", FUNC_1 (VAR_7));
      VAR_5 = FUNC_3 (VAR_7);
      for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
 {
   VAR_6 = FUNC_4 (VAR_7, VAR_4);
   if (FUNC_0 (VAR_6) == VAR_0)
     FUNC_2 (VAR_3, "  param [%d] : %s\n", VAR_4,
       (*VAR_2.decl_printable_name) (VAR_6, 2));
 }

    }
}
