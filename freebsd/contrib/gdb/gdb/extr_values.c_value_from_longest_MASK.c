
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
typedef enum type_code { ____Placeholder_type_code } type_code ;
typedef int LONGEST ;
typedef int CORE_ADDR ;


 int FUNC_0 (struct type*) ;
 int FUNC_1 (struct type*) ;
 int FUNC_2 (struct value*) ;
 struct value* FUNC_3 (struct type*) ;
 struct type* FUNC_4 (struct type*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int ,struct type*,int ) ;

struct value *
FUNC_8 (struct type *VAR_0, LONGEST VAR_1)
{
  struct value *VAR_2 = FUNC_3 (VAR_0);
  enum type_code VAR_3;
  int VAR_4;
retry:
  VAR_3 = FUNC_0 (VAR_0);
  VAR_4 = FUNC_1 (VAR_0);

  switch (VAR_3)
    {
    case 128:
      VAR_0 = FUNC_4 (VAR_0);
      goto retry;
    case 132:
    case 134:
    case 133:
    case 135:
    case 130:
      FUNC_6 (FUNC_2 (VAR_2), VAR_4, VAR_1);
      break;

    case 129:
    case 131:
      FUNC_7 (FUNC_2 (VAR_2), VAR_0, (CORE_ADDR) VAR_1);
      break;

    default:
      FUNC_5 ("Unexpected type (%d) encountered for integer constant.", VAR_3);
    }
  return VAR_2;
}
