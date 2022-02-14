
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mips_symbol_type { ____Placeholder_mips_symbol_type } mips_symbol_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int * VAR_2 ;

__attribute__((used)) static int
FUNC_1 (enum mips_symbol_type VAR_3)
{
  switch (VAR_3)
    {
    case 140:


      if (VAR_1)
 return 0;
      return (VAR_0 ? 6 : 2);

    case 132:
      return 1;

    case 142:


      return 2;

    case 133:
    case 134:
      return 3;

    case 136:
    case 138:
    case 139:
    case 137:
    case 145:
    case 143:
    case 144:
    case 130:
    case 129:
    case 141:
    case 135:
    case 128:

      return VAR_2[VAR_3] ? 2 : 1;

    case 131:

      return 0;
    }
  FUNC_0 ();
}
