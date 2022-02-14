
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct cgraph_node {int decl; struct cgraph_node* next_nested; struct cgraph_node* nested; } ;
struct TYPE_2__ {char* (* decl_printable_name ) (int ,int) ;} ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cgraph_node* FUNC_3 (int ) ;
 int * FUNC_4 (int ,int*) ;
 int FUNC_5 (int ,int *) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int,int *) ;
 int FUNC_9 (int *,char*,...) ;
 int FUNC_10 (int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_11 (int *,int ) ;
 char* FUNC_12 (int ,int) ;
 char* FUNC_13 (int ,int) ;

void
FUNC_14 (tree VAR_5)
{
  FILE *VAR_6;
  int VAR_7;
  struct cgraph_node *VAR_8;


  VAR_6 = FUNC_4 (VAR_3, &VAR_7);
  if (VAR_6)
    {
      FUNC_9 (VAR_6, "\n;; Function %s",
        VAR_4.decl_printable_name (VAR_5, 2));
      FUNC_9 (VAR_6, " (%s)\n",
        FUNC_2 (FUNC_0 (VAR_5)));
      FUNC_9 (VAR_6, ";; enabled by -%s\n", FUNC_6 (VAR_3));
      FUNC_9 (VAR_6, "\n");

      if (VAR_7 & VAR_0)
 FUNC_8 (FUNC_1 (VAR_5),
     VAR_1 | VAR_7, VAR_6);
      else
 FUNC_11 (VAR_6, FUNC_1 (VAR_5));
      FUNC_9 (VAR_6, "\n");

      FUNC_5 (VAR_3, VAR_6);
    }


  FUNC_10 (VAR_5);


  FUNC_7 (VAR_2, VAR_5);




  VAR_8 = FUNC_3 (VAR_5);
  for (VAR_8 = VAR_8->nested; VAR_8 ; VAR_8 = VAR_8->next_nested)
    FUNC_14 (VAR_8->decl);
}
