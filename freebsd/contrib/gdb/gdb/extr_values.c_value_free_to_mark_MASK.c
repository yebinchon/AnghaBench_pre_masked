
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;


 struct value* FUNC_0 (struct value*) ;
 struct value* VAR_0 ;
 int FUNC_1 (struct value*) ;

void
FUNC_2 (struct value *VAR_1)
{
  struct value *VAR_2;
  struct value *VAR_3;

  for (VAR_2 = VAR_0; VAR_2 && VAR_2 != VAR_1; VAR_2 = VAR_3)
    {
      VAR_3 = FUNC_0 (VAR_2);
      FUNC_1 (VAR_2);
    }
  VAR_0 = VAR_2;
}
