
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unk_tag ;
typedef int unk_form ;
typedef int unk_attr ;
struct readelf {int dbg; } ;
typedef int Dwarf_Unsigned ;
typedef scalar_t__ Dwarf_Signed ;
typedef int Dwarf_Off ;
typedef int Dwarf_Half ;
typedef int Dwarf_Error ;
typedef int Dwarf_Abbrev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char const**) ;
 int FUNC_3 (scalar_t__,char const**) ;
 int FUNC_4 (int,char const**) ;
 int FUNC_5 (int ,int,int *,int*,int*,int *) ;
 int FUNC_6 (int ,scalar_t__*,int *) ;
 int FUNC_7 (int ,scalar_t__,int*,scalar_t__*,int*,int *) ;
 int FUNC_8 (int ,int*,int *) ;
 int FUNC_9 (int ,int *,int *,int*,int *,int *,int *) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,int,char*,int) ;
 int FUNC_12 (char*,int ) ;

__attribute__((used)) static void
FUNC_13(struct readelf *VAR_3)
{
 Dwarf_Abbrev VAR_4;
 Dwarf_Off VAR_5, VAR_6;
 Dwarf_Unsigned VAR_7, VAR_8;
 Dwarf_Signed VAR_9, VAR_10;
 Dwarf_Half VAR_11, VAR_12;
 Dwarf_Error VAR_13;
 const char *VAR_14, *VAR_15, *VAR_16;
 char VAR_17[32], VAR_18[32], VAR_19[32];
 int VAR_20, VAR_21, VAR_22;

 FUNC_10("\nContents of section .debug_abbrev:\n\n");

 while ((VAR_22 = FUNC_9(VAR_3->dbg, ((void*)0), ((void*)0), &VAR_5,
     ((void*)0), ((void*)0), &VAR_13)) == VAR_2) {
  FUNC_10("  Number TAG\n");
  VAR_20 = 0;
  while ((VAR_22 = FUNC_5(VAR_3->dbg, VAR_5, &VAR_4, &VAR_7,
      &VAR_8, &VAR_13)) == VAR_2) {
   if (VAR_7 == 1) {
    FUNC_0(VAR_3->dbg, VAR_4, VAR_0);
    break;
   }
   VAR_5 += VAR_7;
   FUNC_10("%4d", ++VAR_20);
   if (FUNC_8(VAR_4, &VAR_11, &VAR_13) != VAR_2) {
    FUNC_12("dwarf_get_abbrev_tag failed: %s",
        FUNC_1(VAR_13));
    goto next_abbrev;
   }
   if (FUNC_4(VAR_11, &VAR_14) != VAR_2) {
    FUNC_11(VAR_17, sizeof(VAR_17),
        "[Unknown Tag: %#x]", VAR_11);
    VAR_14 = VAR_17;
   }
   if (FUNC_6(VAR_4, &VAR_9, &VAR_13) !=
       VAR_2) {
    FUNC_12("dwarf_get_abbrev_children_flag failed:"
        " %s", FUNC_1(VAR_13));
    goto next_abbrev;
   }
   FUNC_10("      %s    %s\n", VAR_14,
       VAR_9 ? "[has children]" : "[no children]");
   for (VAR_21 = 0; (Dwarf_Unsigned) VAR_21 < VAR_8; VAR_21++) {
    if (FUNC_7(VAR_4, (Dwarf_Signed) VAR_21,
        &VAR_12, &VAR_10, &VAR_6, &VAR_13) != VAR_2) {
     FUNC_12("dwarf_get_abbrev_entry failed:"
         " %s", FUNC_1(VAR_13));
     continue;
    }
    if (FUNC_2(VAR_12, &VAR_15) !=
        VAR_2) {
     FUNC_11(VAR_18, sizeof(VAR_18),
         "[Unknown AT: %#x]", VAR_12);
     VAR_15 = VAR_18;
    }
    if (FUNC_3(VAR_10, &VAR_16) !=
        VAR_2) {
     FUNC_11(VAR_19, sizeof(VAR_19),
         "[Unknown Form: %#x]",
         (Dwarf_Half) VAR_10);
     VAR_16 = VAR_19;
    }
    FUNC_10("    %-18s %s\n", VAR_15, VAR_16);
   }
  next_abbrev:
   FUNC_0(VAR_3->dbg, VAR_4, VAR_0);
  }
  if (VAR_22 != VAR_2)
   FUNC_12("dwarf_get_abbrev: %s", FUNC_1(VAR_13));
 }
 if (VAR_22 == VAR_1)
  FUNC_12("dwarf_next_cu_header: %s", FUNC_1(VAR_13));
}
