
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
typedef int LONGEST ;
typedef int DOUBLEST ;


 struct type* FUNC_0 (struct value*) ;
 int FUNC_1 (struct type*,int ) ;
 int FUNC_2 (struct type*,int ) ;
 scalar_t__ FUNC_3 (struct type*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct value*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct value*) ;
 struct value* FUNC_8 (struct type*,int ) ;

__attribute__((used)) static struct value *
FUNC_9 (struct type *VAR_1, struct value *VAR_2)
{
  LONGEST VAR_3;

  if (VAR_1 == FUNC_0 (VAR_2))
    return VAR_2;
  else if (FUNC_3 (FUNC_0 (VAR_2)))
    VAR_3 = FUNC_2 (VAR_1,
         FUNC_1 (FUNC_0 (VAR_2),
        FUNC_5 (VAR_2)));
  else
    {
      DOUBLEST VAR_4 =
 FUNC_4 (FUNC_6 (VAR_0, FUNC_7 (VAR_2)));
      VAR_3 = FUNC_2 (VAR_1, VAR_4);
    }

  return FUNC_8 (VAR_1, VAR_3);
}
