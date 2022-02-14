
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct axs_value {struct type* type; void* kind; } ;
struct agent_expr {int dummy; } ;


 int FUNC_0 (struct type*) ;





 struct type* FUNC_1 (struct type*) ;
 void* VAR_0 ;
 struct type* VAR_1 ;
 void* FUNC_2 (struct type*) ;
 int FUNC_3 (struct agent_expr*,struct axs_value*) ;

__attribute__((used)) static void
FUNC_4 (struct agent_expr *VAR_2, struct axs_value *VAR_3)
{





  switch (FUNC_0 (VAR_3->type))
    {

    case 130:
      VAR_3->type = FUNC_2 (VAR_3->type);
      VAR_3->kind = VAR_0;
      break;



    case 132:
      {
 struct type *VAR_4 = FUNC_1 (VAR_3->type);
 VAR_3->type = FUNC_2 (VAR_4);
 VAR_3->kind = VAR_0;


      }
      break;



    case 129:
    case 128:
      return;


    case 131:
      VAR_3->type = VAR_1;
      break;
    }


  FUNC_3 (VAR_2, VAR_3);
}
