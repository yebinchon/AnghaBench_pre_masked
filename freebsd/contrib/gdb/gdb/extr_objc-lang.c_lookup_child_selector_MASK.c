
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (struct value*,int,struct value**) ;
 int FUNC_1 (int *,char*) ;
 struct value* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,int ,int ) ;
 scalar_t__ FUNC_4 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 struct value* FUNC_6 (int ) ;
 int FUNC_7 (char*,scalar_t__) ;

CORE_ADDR
FUNC_8 (char *VAR_2)
{
  struct value * VAR_3, *VAR_4;

  if (! VAR_1)
    {

      return 0;
    }

  if (FUNC_3("sel_getUid", 0, 0))
    VAR_3 = FUNC_2("sel_getUid");
  else if (FUNC_3 ("sel_get_any_uid", 0, 0))
    VAR_3 = FUNC_2("sel_get_any_uid");
  else
    {
      FUNC_1 (&VAR_0, "no way to lookup Objective-C selectors");
      return 0;
    }

  VAR_4 = FUNC_6 (FUNC_7 (VAR_2,
      FUNC_4 (VAR_2) + 1));
  return FUNC_5 (FUNC_0 (VAR_3, 1, &VAR_4));
}
