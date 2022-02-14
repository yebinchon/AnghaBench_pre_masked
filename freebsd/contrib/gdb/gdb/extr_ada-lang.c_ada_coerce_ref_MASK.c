
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;


 int FUNC_0 (struct value*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (struct value*) ;
 scalar_t__ FUNC_3 (struct value*) ;
 int FUNC_4 (struct value*) ;
 struct value* FUNC_5 (int ,int ,scalar_t__,struct value*) ;
 struct value* FUNC_6 (struct value*) ;

__attribute__((used)) static struct value *
FUNC_7 (struct value *VAR_1)
{
  if (FUNC_1 (FUNC_4 (VAR_1)) == VAR_0)
    {
      struct value *VAR_2 = VAR_1;
      FUNC_0 (VAR_2);
      VAR_2 = FUNC_6 (VAR_2);
      return FUNC_5 (FUNC_4 (VAR_2), 0,
     FUNC_2 (VAR_2) + FUNC_3 (VAR_2),
     VAR_2);
    }
  else
    return VAR_1;
}
