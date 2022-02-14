
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mips_opcode {char* name; int pinfo; } ;
struct TYPE_2__ {int isa; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__ VAR_5 ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static int
FUNC_2 (const struct mips_opcode *VAR_6, int VAR_7)
{
  const char *VAR_8 = VAR_6->name;

  if (VAR_6->pinfo == VAR_3)

    return 1;

  if (FUNC_0 (VAR_5.isa))
    {

      switch (VAR_6->pinfo & (128 | 129))
 {
 case 128:
 case 0:
   return 1;
 case 129:
   return 0;
 default:
   break;
 }


      VAR_8 = FUNC_1 (VAR_6->name, '.');
      if (VAR_7 == 2)
 VAR_8 = VAR_8 != ((void*)0) ? FUNC_1 (VAR_8 + 1, '.') : ((void*)0);
      return (VAR_8 != ((void*)0) && (VAR_8[1] == 'w' || VAR_8[1] == 's'));
    }


  if ((VAR_6->pinfo & 128)
      && (VAR_6->pinfo & (VAR_0 | VAR_4
    | VAR_2 | VAR_1)))
    return 1;

  return 0;
}
