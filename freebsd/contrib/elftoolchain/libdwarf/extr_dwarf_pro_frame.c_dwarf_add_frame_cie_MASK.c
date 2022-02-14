
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct _Dwarf_Cie {int dummy; } ;
typedef scalar_t__ int8_t ;
struct TYPE_8__ {scalar_t__ cie_index; scalar_t__ cie_instlen; int * cie_initinst; void* cie_ra; scalar_t__ cie_daf; void* cie_caf; int * cie_augment; } ;
struct TYPE_7__ {int dbgp_cielen; int dbgp_cielist; } ;
typedef scalar_t__ Dwarf_Unsigned ;
typedef void* Dwarf_Small ;
typedef int * Dwarf_Ptr ;
typedef TYPE_1__* Dwarf_P_Debug ;
typedef TYPE_2__* Dwarf_P_Cie ;
typedef int Dwarf_Error ;


 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_2 (int,int) ;
 int VAR_3 ;
 int * FUNC_3 (size_t) ;
 int FUNC_4 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_5 (char*) ;

Dwarf_Unsigned
FUNC_6(Dwarf_P_Debug VAR_4, char *VAR_5, Dwarf_Small VAR_6,
    Dwarf_Small VAR_7, Dwarf_Small VAR_8, Dwarf_Ptr VAR_9,
    Dwarf_Unsigned VAR_10, Dwarf_Error *VAR_11)
{
 Dwarf_P_Cie VAR_12;

 if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_4, VAR_11, VAR_0);
  return (VAR_2);
 }

 if ((VAR_12 = FUNC_2(1, sizeof(struct _Dwarf_Cie))) == ((void*)0)) {
  FUNC_0(VAR_4, VAR_11,VAR_1);
  return (VAR_2);
 }
 FUNC_1(&VAR_4->dbgp_cielist, VAR_12, VAR_3);

 VAR_12->cie_index = VAR_4->dbgp_cielen++;

 if (VAR_5 != ((void*)0)) {
  VAR_12->cie_augment = (uint8_t *) FUNC_5(VAR_5);
  if (VAR_12->cie_augment == ((void*)0)) {
   FUNC_0(VAR_4, VAR_11, VAR_1);
   return (VAR_2);
  }
 }

 VAR_12->cie_caf = VAR_6;
 VAR_12->cie_daf = (int8_t) VAR_7;
 VAR_12->cie_ra = VAR_8;
 if (VAR_9 != ((void*)0) && VAR_10 > 0) {
  VAR_12->cie_initinst = FUNC_3((size_t) VAR_10);
  if (VAR_12->cie_initinst == ((void*)0)) {
   FUNC_0(VAR_4, VAR_11, VAR_1);
   return (VAR_2);
  }
  FUNC_4(VAR_12->cie_initinst, VAR_9, VAR_10);
  VAR_12->cie_instlen = VAR_10;
 }

 return (VAR_12->cie_index);
}
