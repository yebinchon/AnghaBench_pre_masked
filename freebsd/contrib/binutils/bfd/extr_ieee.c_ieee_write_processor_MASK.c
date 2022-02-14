
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_3__ {int arch; int mach; } ;
typedef TYPE_1__ bfd_arch_info_type ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;




 TYPE_1__* FUNC_0 (int *) ;
 char const* FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (bfd *VAR_2)
{
  const bfd_arch_info_type *VAR_3;

  VAR_3 = FUNC_0 (VAR_2);
  switch (VAR_3->arch)
    {
    default:
      if (! FUNC_2 (VAR_2, FUNC_1 (VAR_2)))
 return VAR_0;
      break;

    case 161:
      if (! FUNC_2 (VAR_2, "H8/300"))
 return VAR_0;
      break;

    case 160:
      if (! FUNC_2 (VAR_2, "H8/500"))
 return VAR_0;
      break;

    case 159:
      switch (VAR_3->mach)
 {
 default:
 case 155:
 case 154:
   if (! FUNC_2 (VAR_2, "80960KA"))
     return VAR_0;
   break;

 case 153:
   if (! FUNC_2 (VAR_2, "80960KB"))
     return VAR_0;
   break;

 case 156:
   if (! FUNC_2 (VAR_2, "80960CA"))
     return VAR_0;
   break;

 case 152:
 case 151:
   if (! FUNC_2 (VAR_2, "80960MC"))
     return VAR_0;
   break;
 }
      break;

    case 158:
      {
 const char *VAR_4;

 switch (VAR_3->mach)
   {
   default: VAR_4 = "68020"; break;
   case 150: VAR_4 = "68000"; break;
   case 149: VAR_4 = "68008"; break;
   case 148: VAR_4 = "68010"; break;
   case 147: VAR_4 = "68020"; break;
   case 146: VAR_4 = "68030"; break;
   case 145: VAR_4 = "68040"; break;
   case 144: VAR_4 = "68060"; break;
   case 157: VAR_4 = "cpu32"; break;
   case 140: VAR_4 = "isa-a:nodiv"; break;
   case 143: VAR_4 = "isa-a"; break;
   case 141: VAR_4 = "isa-a:mac"; break;
   case 142: VAR_4 = "isa-a:emac"; break;
   case 139: VAR_4 = "isa-aplus"; break;
   case 137: VAR_4 = "isa-aplus:mac"; break;
   case 138: VAR_4 = "isa-aplus:mac"; break;
   case 130: VAR_4 = "isa-b:nousp"; break;
   case 128: VAR_4 = "isa-b:nousp:mac"; break;
   case 129: VAR_4 = "isa-b:nousp:emac"; break;
   case 136: VAR_4 = "isa-b"; break;
   case 131: VAR_4 = "isa-b:mac"; break;
   case 135: VAR_4 = "isa-b:emac"; break;
   case 134: VAR_4 = "isa-b:float"; break;
   case 132: VAR_4 = "isa-b:float:mac"; break;
   case 133: VAR_4 = "isa-b:float:emac"; break;
   }

 if (! FUNC_2 (VAR_2, VAR_4))
   return VAR_0;
      }
      break;
    }

  return VAR_1;
}
