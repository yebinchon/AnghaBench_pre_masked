
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
typedef enum type_code { ____Placeholder_type_code } type_code ;
typedef int DOUBLEST ;


 int FUNC_0 (struct type*) ;
 int VAR_0 ;
 int FUNC_1 (struct type*) ;
 int FUNC_2 (struct value*) ;
 struct value* FUNC_3 (struct type*) ;
 struct type* FUNC_4 (struct type*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,struct type*,int ) ;

struct value *
FUNC_7 (struct type *VAR_1, DOUBLEST VAR_2)
{
  struct value *VAR_3 = FUNC_3 (VAR_1);
  struct type *VAR_4 = FUNC_4 (VAR_1);
  enum type_code VAR_5 = FUNC_0 (VAR_4);
  int VAR_6 = FUNC_1 (VAR_4);

  if (VAR_5 == VAR_0)
    {
      FUNC_6 (FUNC_2 (VAR_3), VAR_4, VAR_2);
    }
  else
    FUNC_5 ("Unexpected type encountered for floating constant.");

  return VAR_3;
}
