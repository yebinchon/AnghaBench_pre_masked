
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct alpha_macro {int* argsets; int name; } ;
struct TYPE_3__ {int X_op; int X_add_number; } ;
typedef TYPE_1__ expressionS ;
typedef enum alpha_macro_arg { ____Placeholder_alpha_macro_arg } alpha_macro_arg ;
 struct alpha_macro const* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static const struct alpha_macro *
FUNC_3 (const struct alpha_macro *VAR_2,
    const expressionS *VAR_3,
    int *VAR_4)

{
  const struct alpha_macro *VAR_5 = VAR_2;
  int VAR_6 = *VAR_4;

  do
    {
      const enum alpha_macro_arg *VAR_7 = VAR_5->argsets;
      int VAR_8 = 0;

      while (*VAR_7)
 {
   switch (*VAR_7)
     {
     case 147:
       if (VAR_8 == VAR_6)
  return VAR_5;
       else
  VAR_8 = 0;
       break;


     case 144:
       if (VAR_8 >= VAR_6 || VAR_3[VAR_8].X_op != 129
    || !FUNC_1 (VAR_3[VAR_8].X_add_number))
  goto match_failed;
       ++VAR_8;
       break;


     case 142:
       if (VAR_8 >= VAR_6 || VAR_3[VAR_8].X_op != 130
    || !FUNC_1 (VAR_3[VAR_8].X_add_number))
  goto match_failed;
       ++VAR_8;
       break;


     case 143:
       if (VAR_8 < VAR_6 && VAR_3[VAR_8].X_op == 130
    && FUNC_1 (VAR_3[VAR_8].X_add_number))
  ++VAR_8;
       break;


     case 148:
       if (VAR_8 >= VAR_6 || VAR_3[VAR_8].X_op != 140
    || !FUNC_1 (VAR_3[VAR_8].X_add_number))
  goto match_failed;
       ++VAR_8;
       break;


     case 145:
       if (VAR_8 >= VAR_6 || VAR_3[VAR_8].X_op != 129
    || !FUNC_0 (VAR_3[VAR_8].X_add_number))
  goto match_failed;
       ++VAR_8;
       break;


     case 146:
       if (VAR_8 >= VAR_6)
  goto match_failed;
       switch (VAR_3[VAR_8].X_op)
  {
  case 135:
  case 141:
  case 129:
  case 130:
  case 140:
  case 134:
  case 133:
  case 132:
  case 131:
  case 139:
  case 137:
  case 136:
  case 138:
  case 128:
    goto match_failed;

  default:
    break;
  }
       ++VAR_8;
       break;

     match_failed:
       while (*VAR_7 != 147)
  ++VAR_7;
       VAR_8 = 0;
       break;
     }
   ++VAR_7;
 }
    }
  while (++VAR_5 - VAR_0 < (int) VAR_1
  && !FUNC_2 (VAR_5->name, VAR_2->name));

  return ((void*)0);
}
