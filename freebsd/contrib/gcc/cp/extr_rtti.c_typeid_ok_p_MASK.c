
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_2 (void)
{
  if (! VAR_1)
    {
      FUNC_1 ("cannot use typeid with -fno-rtti");
      return 0;
    }

  if (!FUNC_0 (VAR_0))
    {
      FUNC_1 ("must #include <typeinfo> before using typeid");
      return 0;
    }

  return 1;
}
