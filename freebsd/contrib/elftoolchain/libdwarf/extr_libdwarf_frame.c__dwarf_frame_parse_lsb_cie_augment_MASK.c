
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint64_t ;
struct TYPE_4__ {char* cie_augment; char* cie_augdata; int cie_fde_encode; } ;
typedef int Dwarf_Error ;
typedef int Dwarf_Debug ;
typedef TYPE_1__* Dwarf_Cie ;


 int FUNC_0 (int ,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_1__*,int *,char*,int *,char,int ,int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(Dwarf_Debug VAR_2, Dwarf_Cie VAR_3,
    Dwarf_Error *VAR_4)
{
 uint8_t *VAR_5, *VAR_6;
 uint64_t VAR_7, VAR_8;
 uint8_t VAR_9;
 int VAR_10;

 FUNC_2(VAR_3->cie_augment != ((void*)0) && *VAR_3->cie_augment == 'z');






 VAR_5 = &VAR_3->cie_augment[1];
 VAR_6 = VAR_3->cie_augdata;
 while (*VAR_5 != '\0') {
  switch (*VAR_5) {
  case 'S':
   break;
  case 'L':

   VAR_6++;
   break;
  case 'P':

   VAR_9 = *VAR_6++;
   VAR_8 = 0;
   VAR_10 = FUNC_1(VAR_2, VAR_3, &VAR_7,
       VAR_6, &VAR_8, VAR_9, 0, VAR_4);
   if (VAR_10 != VAR_1)
    return (VAR_10);
   VAR_6 += VAR_8;
   break;
  case 'R':
   VAR_3->cie_fde_encode = *VAR_6++;
   break;
  default:
   FUNC_0(VAR_2, VAR_4,
       VAR_0);
   return (VAR_0);
  }
  VAR_5++;
 }

 return (VAR_1);
}
