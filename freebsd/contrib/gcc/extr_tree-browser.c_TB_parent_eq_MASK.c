
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4 (const void *VAR_0, const void *VAR_1)
{
  tree VAR_2, VAR_3;
  VAR_2 = (tree) VAR_1;
  VAR_3 = (tree) VAR_0;

  if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
    return 0;

  if (FUNC_0 (VAR_3))
    {






    switch (FUNC_3 (FUNC_2 (VAR_3)))
      {
      case 4:
 do { if (VAR_2 == FUNC_0 (VAR_3, 0)) return 1; } while (0);
 do { if (VAR_2 == FUNC_0 (VAR_3, 1)) return 1; } while (0);
 do { if (VAR_2 == FUNC_0 (VAR_3, 2)) return 1; } while (0);
 do { if (VAR_2 == FUNC_0 (VAR_3, 3)) return 1; } while (0);
 break;

      case 3:
 do { if (VAR_2 == FUNC_0 (VAR_3, 0)) return 1; } while (0);
 do { if (VAR_2 == FUNC_0 (VAR_3, 1)) return 1; } while (0);
 do { if (VAR_2 == FUNC_0 (VAR_3, 2)) return 1; } while (0);
 break;

      case 2:
 do { if (VAR_2 == FUNC_0 (VAR_3, 0)) return 1; } while (0);
 do { if (VAR_2 == FUNC_0 (VAR_3, 1)) return 1; } while (0);
 break;

      case 1:
 do { if (VAR_2 == FUNC_0 (VAR_3, 0)) return 1; } while (0);
 break;

      case 0:
      default:

 break;
      }

    }

  return 0;
}
