
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int modifiable; } ;
struct internalvar {struct value* value; } ;


 scalar_t__ FUNC_0 (struct value*) ;
 int FUNC_1 (struct value*) ;
 struct value* FUNC_2 (struct value*) ;
 int FUNC_3 (struct value*) ;
 int FUNC_4 (struct value*) ;

void
FUNC_5 (struct internalvar *VAR_0, struct value *VAR_1)
{
  struct value *VAR_2;

  VAR_2 = FUNC_2 (VAR_1);
  VAR_2->modifiable = 1;




  if (FUNC_0 (VAR_2))
    FUNC_3 (VAR_2);







  FUNC_4 (VAR_0->value);
  VAR_0->value = VAR_2;
  FUNC_1 (VAR_2);

}
