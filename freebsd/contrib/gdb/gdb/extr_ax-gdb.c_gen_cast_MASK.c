
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct axs_value {struct type* type; } ;
struct agent_expr {int dummy; } ;


 int FUNC_0 (struct type*) ;
 struct type* FUNC_1 (struct type*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct agent_expr*,struct type*,struct type*) ;
 int FUNC_4 (struct agent_expr*,struct axs_value*) ;

__attribute__((used)) static void
FUNC_5 (struct agent_expr *VAR_0, struct axs_value *VAR_1, struct type *VAR_2)
{


  FUNC_4 (VAR_0, VAR_1);

  VAR_2 = FUNC_1 (VAR_2);

  switch (FUNC_0 (VAR_2))
    {
    case 131:


      break;

    case 135:
    case 130:
    case 129:
    case 133:
      FUNC_2 ("Illegal type cast: intended type must be scalar.");

    case 134:





      VAR_1->type = VAR_2;
      break;

    case 132:
      FUNC_3 (VAR_0, VAR_1->type, VAR_2);
      break;

    case 128:




      break;

    default:
      FUNC_2 ("Casts to requested type are not yet implemented.");
    }

  VAR_1->type = VAR_2;
}
