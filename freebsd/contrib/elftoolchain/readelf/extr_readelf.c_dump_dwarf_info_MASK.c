
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uintmax_t ;
typedef int uint8_t ;
struct section {int * name; } ;
struct readelf {size_t shnum; scalar_t__ (* dw_decode ) (int **,int) ;int dbg; struct section* sl; } ;
struct TYPE_3__ {int * signature; } ;
typedef scalar_t__ Dwarf_Unsigned ;
typedef TYPE_1__ Dwarf_Sig8 ;
typedef scalar_t__ Dwarf_Off ;
typedef scalar_t__ Dwarf_Half ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Die ;
typedef scalar_t__ Dwarf_Bool ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct readelf*,int *,int ) ;
 int FUNC_1 (int *,scalar_t__*,scalar_t__*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int *,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,int *,TYPE_1__*,scalar_t__*,int *,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *,int **,scalar_t__,int *) ;
 int FUNC_6 (int *,scalar_t__*,int *) ;
 int FUNC_7 (char*,scalar_t__,...) ;
 int FUNC_8 (struct readelf*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (int *,char const*) ;
 scalar_t__ FUNC_10 (int **,int) ;
 int FUNC_11 (char*,...) ;

__attribute__((used)) static void
FUNC_12(struct readelf *VAR_4, Dwarf_Bool VAR_5)
{
 struct section *VAR_6;
 Dwarf_Die VAR_7;
 Dwarf_Error VAR_8;
 Dwarf_Half VAR_9, VAR_10, VAR_11, VAR_12;
 Dwarf_Off VAR_13, VAR_14;
 Dwarf_Off VAR_15;
 Dwarf_Unsigned VAR_16;
 Dwarf_Sig8 VAR_17;
 Dwarf_Unsigned VAR_18;
 uint8_t *VAR_19;
 const char *VAR_20;
 int VAR_21, VAR_22;

 VAR_20 = VAR_5 ? ".debug_info" : ".debug_types";

 VAR_6 = ((void*)0);
 for (VAR_21 = 0; (size_t) VAR_21 < VAR_4->shnum; VAR_21++) {
  VAR_6 = &VAR_4->sl[VAR_21];
  if (VAR_6->name != ((void*)0) && !FUNC_9(VAR_6->name, VAR_20))
   break;
 }
 if ((size_t) VAR_21 >= VAR_4->shnum)
  return;

 do {
  FUNC_7("\nDump of debug contents of section %s:\n", VAR_20);

  while ((VAR_22 = FUNC_3(VAR_4->dbg, VAR_5, ((void*)0),
      &VAR_10, &VAR_15, &VAR_11, &VAR_12, ((void*)0), &VAR_17,
      &VAR_16, ((void*)0), &VAR_8)) == VAR_1) {
   FUNC_8(VAR_4, VAR_11, VAR_12, VAR_10);
   VAR_7 = ((void*)0);
   while (FUNC_5(VAR_4->dbg, VAR_7, &VAR_7, VAR_5,
       &VAR_8) == VAR_1) {
    if (FUNC_6(VAR_7, &VAR_9, &VAR_8) != VAR_1) {
     FUNC_11("dwarf_tag failed: %s",
         FUNC_2(VAR_8));
     continue;
    }

    if ((VAR_5 && VAR_9 == VAR_2) ||
        (!VAR_5 && VAR_9 == VAR_3))
     break;
   }
   if (VAR_7 == ((void*)0) && VAR_5) {
    FUNC_11("could not find DW_TAG_compile_unit "
        "die");
    continue;
   } else if (VAR_7 == ((void*)0) && !VAR_5) {
    FUNC_11("could not find DW_TAG_type_unit die");
    continue;
   }

   if (FUNC_1(VAR_7, &VAR_13,
       &VAR_14, &VAR_8) != VAR_1) {
    FUNC_11("dwarf_die_CU_offset failed: %s",
        FUNC_2(VAR_8));
    continue;
   }

   VAR_14 -= VAR_12 == 4 ? 4 : 12;

   VAR_18 = 0;
   if (!VAR_5) {
    VAR_19 = (uint8_t *)(uintptr_t) &VAR_17[0];
    VAR_18 = VAR_4->dw_decode(&VAR_19, 8);
   }

   FUNC_7("\n  Type Unit @ offset 0x%jx:\n",
       (uintmax_t) VAR_13);
   FUNC_7("    Length:\t\t%#jx (%d-bit)\n",
       (uintmax_t) VAR_14, VAR_12 == 4 ? 32 : 64);
   FUNC_7("    Version:\t\t%u\n", VAR_10);
   FUNC_7("    Abbrev Offset:\t0x%jx\n",
       (uintmax_t) VAR_15);
   FUNC_7("    Pointer Size:\t%u\n", VAR_11);
   if (!VAR_5) {
    FUNC_7("    Signature:\t\t0x%016jx\n",
        (uintmax_t) VAR_18);
    FUNC_7("    Type Offset:\t0x%jx\n",
        (uintmax_t) VAR_16);
   }

   FUNC_0(VAR_4, VAR_7, 0);
  }
  if (VAR_22 == VAR_0)
   FUNC_11("dwarf_next_cu_header: %s", FUNC_2(VAR_8));
  if (VAR_5)
   break;
 } while (FUNC_4(VAR_4->dbg, &VAR_8) == VAR_1);
}
