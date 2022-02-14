
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int FUNC_0 (struct type const*) ;

 int FUNC_1 (struct type const*) ;

__attribute__((used)) static int
FUNC_2 (const struct type *VAR_0)
{
  switch (FUNC_0 (VAR_0))
    {
    case 128:
      {
 int VAR_1 = FUNC_1 (VAR_0);
 return (VAR_1 == 4 || VAR_1 == 8 || VAR_1 == 16);
      }
    default:
      break;
    }

  return 0;
}
