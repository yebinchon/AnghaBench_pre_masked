
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
 struct value* FUNC_6 (struct value*) ;
 struct value* FUNC_7 (char*,scalar_t__) ;

CORE_ADDR
FUNC_8 (char *VAR_2)
{
  struct value * VAR_3, *VAR_4;

  if (! VAR_1)
    {

      return 0;
    }

  if (FUNC_3("objc_lookUpClass", 0, 0))
    VAR_3 = FUNC_2("objc_lookUpClass");
  else if (FUNC_3 ("objc_lookup_class", 0, 0))
    VAR_3 = FUNC_2("objc_lookup_class");
  else
    {
      FUNC_1 (&VAR_0, "no way to lookup Objective-C classes");
      return 0;
    }

  VAR_4 = FUNC_7 (VAR_2, FUNC_4 (VAR_2) + 1);
  VAR_4 = FUNC_6 (VAR_4);
  return (CORE_ADDR) FUNC_5 (FUNC_0 (VAR_3,
          1, &VAR_4));
}
