
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
typedef int LONGEST ;


 int VAR_0 ;
 int VAR_1 ;
 struct value* FUNC_0 (struct value*,int,struct value**) ;
 int FUNC_1 (char*) ;
 struct value* FUNC_2 (int ) ;
 int VAR_2 ;
 struct value* FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct value*) ;

struct value *
FUNC_5 (int VAR_3)
{
  struct value *VAR_4;
  struct value *VAR_5 = FUNC_2 (VAR_0);

  VAR_4 = FUNC_3 (VAR_1, (LONGEST) VAR_3);
  VAR_5 = FUNC_0 (VAR_5, 1, &VAR_4);
  if (FUNC_4 (VAR_5))
    {
      if (!VAR_2)
 FUNC_1 ("No memory available to program now: you need to start the target first");
      else
 FUNC_1 ("No memory available to program: call to malloc failed");
    }
  return VAR_5;
}
