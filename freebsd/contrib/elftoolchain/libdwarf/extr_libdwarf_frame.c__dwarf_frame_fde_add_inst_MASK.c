
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int dbg_pointer_size; } ;
struct TYPE_5__ {scalar_t__ fde_instcap; int * fde_inst; scalar_t__ fde_instlen; TYPE_2__* fde_dbg; } ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Small ;
typedef TYPE_1__* Dwarf_P_Fde ;
typedef TYPE_2__* Dwarf_P_Debug ;
typedef int Dwarf_Error ;


 int FUNC_0 (TYPE_2__*,int *,int) ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int) ;
 int * FUNC_5 (size_t) ;

int
FUNC_6(Dwarf_P_Fde VAR_5, Dwarf_Small VAR_6, Dwarf_Unsigned VAR_7,
    Dwarf_Unsigned VAR_8, Dwarf_Error *VAR_9)
{
 Dwarf_P_Debug VAR_10;
 uint8_t VAR_11, VAR_12;
 int VAR_13;






 FUNC_4(VAR_5 != ((void*)0) && VAR_5->fde_dbg != ((void*)0));
 VAR_10 = VAR_5->fde_dbg;

 if (VAR_5->fde_inst == ((void*)0)) {
  VAR_5->fde_instcap = VAR_4;
  VAR_5->fde_instlen = 0;
  if ((VAR_5->fde_inst = FUNC_5((size_t) VAR_5->fde_instcap)) ==
      ((void*)0)) {
   FUNC_0(VAR_10, VAR_9, VAR_2);
   return (VAR_2);
  }
 }
 FUNC_4(VAR_5->fde_instcap != 0);

 FUNC_1(FUNC_3(VAR_6, 1));
 if (VAR_6 == VAR_0)
  return (VAR_3);

 VAR_11 = VAR_6 & 0xc0;
 VAR_12 = VAR_6 & 0x3f;

 if (VAR_11 > 0) {
  switch (VAR_11) {
  case 144:
  case 133:
   break;
  case 137:
   FUNC_1(FUNC_2(VAR_7));
   break;
  default:
   FUNC_0(VAR_10, VAR_9,
       VAR_1);
   return (VAR_1);
  }
  return (VAR_3);
 }

 switch (VAR_12) {
 case 129:
  FUNC_1(FUNC_3(VAR_7, VAR_10->dbg_pointer_size));
  break;
 case 143:
  FUNC_1(FUNC_3(VAR_7, 1));
  break;
 case 142:
  FUNC_1(FUNC_3(VAR_7, 2));
  break;
 case 141:
  FUNC_1(FUNC_3(VAR_7, 4));
  break;
 case 136:
 case 140:
 case 135:
  FUNC_1(FUNC_2(VAR_7));
  FUNC_1(FUNC_2(VAR_8));
  break;
 case 132:
 case 128:
 case 130:
 case 138:
 case 139:
  FUNC_1(FUNC_2(VAR_7));
  break;
 case 134:
 case 131:
  break;
 default:
  FUNC_0(VAR_10, VAR_9, VAR_1);
  return (VAR_1);
 }

 return (VAR_3);

gen_fail:
 return (VAR_13);





}
