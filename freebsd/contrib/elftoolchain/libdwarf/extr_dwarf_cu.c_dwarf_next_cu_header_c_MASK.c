
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int cu_version; int cu_pointer_size; int cu_length_size; int cu_type_offset; int cu_type_sig; int cu_next_offset; scalar_t__ cu_abbrev_offset; int cu_length; } ;
struct TYPE_9__ {TYPE_2__* dbg_tu_current; TYPE_2__* dbg_cu_current; } ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Sig8 ;
typedef scalar_t__ Dwarf_Off ;
typedef int Dwarf_Half ;
typedef int Dwarf_Error ;
typedef TYPE_1__* Dwarf_Debug ;
typedef TYPE_2__* Dwarf_CU ;
typedef scalar_t__ Dwarf_Bool ;


 int FUNC_0 (TYPE_1__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;

int
FUNC_5(Dwarf_Debug VAR_6, Dwarf_Bool VAR_7,
    Dwarf_Unsigned *VAR_8, Dwarf_Half *VAR_9,
    Dwarf_Off *VAR_10, Dwarf_Half *VAR_11,
    Dwarf_Half *VAR_12, Dwarf_Half *VAR_13,
    Dwarf_Sig8 *VAR_14, Dwarf_Unsigned *VAR_15,
    Dwarf_Unsigned *VAR_16, Dwarf_Error *VAR_17)
{
 Dwarf_CU VAR_18;
 int VAR_19;

 if (VAR_6 == ((void*)0)) {
  FUNC_0(VAR_6, VAR_17, VAR_0);
  return (VAR_3);
 }

 if (VAR_7) {
  if (VAR_6->dbg_cu_current == ((void*)0))
   VAR_19 = FUNC_1(VAR_6, VAR_17);
  else
   VAR_19 = FUNC_3(VAR_6, VAR_17);
 } else {
  if (VAR_6->dbg_tu_current == ((void*)0))
   VAR_19 = FUNC_2(VAR_6, VAR_17);
  else
   VAR_19 = FUNC_4(VAR_6, VAR_17);
 }

 if (VAR_19 == VAR_2) {
  FUNC_0(VAR_6, VAR_17, VAR_2);
  return (VAR_4);
 } else if (VAR_19 != VAR_1)
  return (VAR_3);

 if (VAR_7) {
  if (VAR_6->dbg_cu_current == ((void*)0)) {
   FUNC_0(VAR_6, VAR_17, VAR_2);
   return (VAR_4);
  }
  VAR_18 = VAR_6->dbg_cu_current;
 } else {
  if (VAR_6->dbg_tu_current == ((void*)0)) {
   FUNC_0(VAR_6, VAR_17, VAR_2);
   return (VAR_4);
  }
  VAR_18 = VAR_6->dbg_tu_current;
 }

 if (VAR_8)
  *VAR_8 = VAR_18->cu_length;
 if (VAR_9)
  *VAR_9 = VAR_18->cu_version;
 if (VAR_10)
  *VAR_10 = (Dwarf_Off) VAR_18->cu_abbrev_offset;
 if (VAR_11)
  *VAR_11 = VAR_18->cu_pointer_size;
 if (VAR_12) {
  if (VAR_18->cu_length_size == 4)
   *VAR_12 = 4;
  else
   *VAR_12 = 8;
 }
 if (VAR_13) {
  if (VAR_18->cu_length_size == 4)
   *VAR_13 = 0;
  else
   *VAR_13 = 4;
 }
 if (VAR_16)
  *VAR_16 = VAR_18->cu_next_offset;

 if (!VAR_7) {
  if (VAR_14)
   *VAR_14 = VAR_18->cu_type_sig;
  if (VAR_15)
   *VAR_15 = VAR_18->cu_type_offset;
 }

 return (VAR_5);
}
