
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int unk_tag ;
typedef int unk_attr ;
typedef int uintmax_t ;
typedef int uint8_t ;
struct readelf {int dbg; scalar_t__ (* dw_decode ) (int**,int) ;} ;
typedef int intmax_t ;
struct TYPE_6__ {int* bl_data; scalar_t__ bl_len; } ;
struct TYPE_5__ {int * signature; } ;
typedef scalar_t__ Dwarf_Unsigned ;
typedef int Dwarf_Signed ;
typedef TYPE_1__ Dwarf_Sig8 ;
typedef int* Dwarf_Ptr ;
typedef scalar_t__ Dwarf_Off ;
typedef int Dwarf_Half ;
typedef int Dwarf_Error ;
typedef int Dwarf_Die ;
typedef int Dwarf_Bool ;
typedef TYPE_2__ Dwarf_Block ;
typedef int Dwarf_Attribute ;
typedef scalar_t__ Dwarf_Addr ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct readelf*,int*,scalar_t__) ;
 int FUNC_1 (int ,int **,int*,int *) ;
 int FUNC_2 (int ,scalar_t__*,int *) ;
 int FUNC_3 (int ,int,scalar_t__*,int *) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,scalar_t__*,scalar_t__*,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,scalar_t__*,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__*,int *) ;
 int FUNC_11 (int ,TYPE_2__**,int *) ;
 int FUNC_12 (int ,scalar_t__*,int**,int *) ;
 int FUNC_13 (int ,int *,int *) ;
 int FUNC_14 (int ,scalar_t__*,int *) ;
 int FUNC_15 (int ,int*,int *) ;
 int FUNC_16 (int ,TYPE_1__*,int *) ;
 int FUNC_17 (int ,char**,int *) ;
 int FUNC_18 (int ,scalar_t__*,int *) ;
 int FUNC_19 (scalar_t__,char const**) ;
 int FUNC_20 (int,char const**) ;
 int FUNC_21 (scalar_t__,char const**) ;
 int FUNC_22 (int,char const**) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,scalar_t__*,int *) ;
 int FUNC_25 (int ,int ,int *,int ,int *) ;
 int FUNC_26 (int ,int*,int *) ;
 int FUNC_27 (int ,int*,int *) ;
 int FUNC_28 (int ,int*,int *) ;
 int FUNC_29 (char*,...) ;
 int FUNC_30 (char) ;
 int FUNC_31 (char*,int,char*,int) ;
 size_t FUNC_32 (char*) ;
 scalar_t__ FUNC_33 (int**,int) ;
 int FUNC_34 (char*,int ) ;

__attribute__((used)) static void
FUNC_35(struct readelf *VAR_4, Dwarf_Die VAR_5, int VAR_6)
{
 Dwarf_Attribute *VAR_7;
 Dwarf_Die VAR_8;
 Dwarf_Off VAR_9, VAR_10, VAR_11, VAR_12;
 Dwarf_Unsigned VAR_13, VAR_14, VAR_15, VAR_16;
 Dwarf_Signed VAR_17, VAR_18;
 Dwarf_Off VAR_19;
 Dwarf_Addr VAR_20;
 Dwarf_Half VAR_21, VAR_22, VAR_23;
 Dwarf_Block *VAR_24;
 Dwarf_Bool VAR_25, VAR_26;
 Dwarf_Sig8 VAR_27;
 Dwarf_Error VAR_28;
 Dwarf_Ptr VAR_29;
 const char *VAR_30, *VAR_31, *VAR_32, *VAR_33;
 char VAR_34[32], VAR_35[32];
 char *VAR_36;
 uint8_t *VAR_37, *VAR_38;
 int VAR_39, VAR_40, VAR_41, VAR_42;

 if (FUNC_8(VAR_5, &VAR_9, &VAR_28) != VAR_3) {
  FUNC_34("dwarf_dieoffset failed: %s", FUNC_9(VAR_28));
  goto cont_search;
 }

 FUNC_29(" <%d><%jx>: ", VAR_6, (uintmax_t) VAR_9);

 if (FUNC_6(VAR_5, &VAR_10, &VAR_11, &VAR_28) != VAR_3) {
  FUNC_34("dwarf_die_CU_offset_range failed: %s",
        FUNC_9(VAR_28));
  VAR_10 = 0;
 }

 VAR_41 = FUNC_7(VAR_5);
 if (FUNC_26(VAR_5, &VAR_21, &VAR_28) != VAR_3) {
  FUNC_34("dwarf_tag failed: %s", FUNC_9(VAR_28));
  goto cont_search;
 }
 if (FUNC_22(VAR_21, &VAR_30) != VAR_3) {
  FUNC_31(VAR_34, sizeof(VAR_34), "[Unknown Tag: %#x]", VAR_21);
  VAR_30 = VAR_34;
 }

 FUNC_29("Abbrev Number: %d (%s)\n", VAR_41, VAR_30);

 if ((VAR_42 = FUNC_1(VAR_5, &VAR_7, &VAR_17, &VAR_28)) !=
     VAR_3) {
  if (VAR_42 == VAR_2)
   FUNC_34("dwarf_attrlist failed: %s", FUNC_9(VAR_28));
  goto cont_search;
 }

 for (VAR_39 = 0; VAR_39 < VAR_17; VAR_39++) {
  if (FUNC_28(VAR_7[VAR_39], &VAR_23, &VAR_28) != VAR_3) {
   FUNC_34("dwarf_whatform failed: %s", FUNC_9(VAR_28));
   continue;
  }
  if (FUNC_27(VAR_7[VAR_39], &VAR_22, &VAR_28) != VAR_3) {
   FUNC_34("dwarf_whatattr failed: %s", FUNC_9(VAR_28));
   continue;
  }
  if (FUNC_20(VAR_22, &VAR_31) != VAR_3) {
   FUNC_31(VAR_35, sizeof(VAR_35),
       "[Unknown AT: %#x]", VAR_22);
   VAR_31 = VAR_35;
  }
  if (FUNC_2(VAR_7[VAR_39], &VAR_12, &VAR_28) !=
      VAR_3) {
   FUNC_34("dwarf_attroffset failed: %s", FUNC_9(VAR_28));
   VAR_12 = 0;
  }
  FUNC_29("    <%jx>   %-18s: ", (uintmax_t) VAR_12, VAR_31);
  switch (VAR_23) {
  case 135:
  case 131:
   if (FUNC_24(VAR_7[VAR_39], &VAR_19, &VAR_28) !=
       VAR_3) {
    FUNC_34("dwarf_global_formref failed: %s",
        FUNC_9(VAR_28));
    continue;
   }
   if (VAR_23 == 135)
    FUNC_29("<0x%jx>", (uintmax_t) VAR_19);
   else
    FUNC_29("0x%jx", (uintmax_t) VAR_19);
   break;

  case 139:
  case 138:
  case 137:
  case 136:
  case 133:
   if (FUNC_14(VAR_7[VAR_39], &VAR_19, &VAR_28) !=
       VAR_3) {
    FUNC_34("dwarf_formref failed: %s",
        FUNC_9(VAR_28));
    continue;
   }
   VAR_19 += VAR_10;
   FUNC_29("<0x%jx>", (uintmax_t) VAR_19);
   break;

  case 151:
   if (FUNC_10(VAR_7[VAR_39], &VAR_20, &VAR_28) !=
       VAR_3) {
    FUNC_34("dwarf_formaddr failed: %s",
        FUNC_9(VAR_28));
    continue;
   }
   FUNC_29("%#jx", (uintmax_t) VAR_20);
   break;

  case 146:
  case 145:
  case 144:
  case 143:
  case 128:
   if (FUNC_18(VAR_7[VAR_39], &VAR_15, &VAR_28) !=
       VAR_3) {
    FUNC_34("dwarf_formudata failed: %s",
        FUNC_9(VAR_28));
    continue;
   }
   if (VAR_22 == VAR_0)
    FUNC_29("0x%jx", (uintmax_t) VAR_15);
   else
    FUNC_29("%ju", (uintmax_t) VAR_15);
   break;

  case 132:
   if (FUNC_15(VAR_7[VAR_39], &VAR_18, &VAR_28) !=
       VAR_3) {
    FUNC_34("dwarf_formudata failed: %s",
        FUNC_9(VAR_28));
    continue;
   }
   FUNC_29("%jd", (intmax_t) VAR_18);
   break;

  case 141:
   if (FUNC_13(VAR_7[VAR_39], &VAR_25, &VAR_28) !=
       VAR_3) {
    FUNC_34("dwarf_formflag failed: %s",
        FUNC_9(VAR_28));
    continue;
   }
   FUNC_29("%jd", (intmax_t) VAR_25);
   break;

  case 140:
   FUNC_30('1');
   break;

  case 130:
  case 129:
   if (FUNC_17(VAR_7[VAR_39], &VAR_36, &VAR_28) !=
       VAR_3) {
    FUNC_34("dwarf_formstring failed: %s",
        FUNC_9(VAR_28));
    continue;
   }
   if (VAR_23 == 130)
    FUNC_29("%s", VAR_36);
   else
    FUNC_29("(indirect string) %s", VAR_36);
   break;

  case 150:
  case 149:
  case 148:
  case 147:
   if (FUNC_11(VAR_7[VAR_39], &VAR_24, &VAR_28) !=
       VAR_3) {
    FUNC_34("dwarf_formblock failed: %s",
        FUNC_9(VAR_28));
    continue;
   }
   FUNC_29("%ju byte block:", (uintmax_t) VAR_24->bl_len);
   VAR_37 = VAR_24->bl_data;
   for (VAR_40 = 0; (Dwarf_Unsigned) VAR_40 < VAR_24->bl_len; VAR_40++)
    FUNC_29(" %x", VAR_37[VAR_40]);
   FUNC_29("\t(");
   FUNC_0(VAR_4, VAR_24->bl_data, VAR_24->bl_len);
   FUNC_30(')');
   break;

  case 142:
   if (FUNC_12(VAR_7[VAR_39], &VAR_15, &VAR_29,
       &VAR_28) != VAR_3) {
    FUNC_34("dwarf_formexprloc failed: %s",
        FUNC_9(VAR_28));
    continue;
   }
   FUNC_29("%ju byte block:", (uintmax_t) VAR_15);
   VAR_37 = VAR_29;
   for (VAR_40 = 0; (Dwarf_Unsigned) VAR_40 < VAR_15; VAR_40++)
    FUNC_29(" %x", VAR_37[VAR_40]);
   FUNC_29("\t(");
   FUNC_0(VAR_4, VAR_29, VAR_15);
   FUNC_30(')');
   break;

  case 134:
   if (FUNC_16(VAR_7[VAR_39], &VAR_27, &VAR_28) !=
       VAR_3) {
    FUNC_34("dwarf_formsig8 failed: %s",
        FUNC_9(VAR_28));
    continue;
   }
   VAR_38 = (uint8_t *)(uintptr_t) &VAR_27[0];
   VAR_16 = VAR_4->dw_decode(&VAR_38, 8);
   FUNC_29("signature: 0x%jx", (uintmax_t) VAR_16);
  }
  switch (VAR_22) {
  case 161:
   if (FUNC_3(VAR_5, VAR_22, &VAR_13, &VAR_28) !=
       VAR_3)
    break;
   if (FUNC_19(VAR_13, &VAR_32) != VAR_3)
    VAR_32 = "DW_ATE_UNKNOWN";
   FUNC_29("\t(%s)", &VAR_32[FUNC_32("DW_ATE_")]);
   break;

  case 159:
   if (FUNC_3(VAR_5, VAR_22, &VAR_14, &VAR_28) !=
       VAR_3)
    break;
   if (FUNC_21(VAR_14, &VAR_33) != VAR_3)
    break;
   FUNC_29("\t(%s)", &VAR_33[FUNC_32("DW_LANG_")]);
   break;

  case 158:
  case 154:
  case 157:
  case 162:
  case 160:
  case 156:
  case 155:
  case 153:
  case 152:
   switch (VAR_23) {
   case 144:
   case 143:
   case 131:
    FUNC_29("\t(location list)");
    break;
   default:
    break;
   }

  default:
   break;
  }
  FUNC_30('\n');
 }


cont_search:

 VAR_42 = FUNC_4(VAR_5, &VAR_8, &VAR_28);
 if (VAR_42 == VAR_2)
  FUNC_34("dwarf_child: %s", FUNC_9(VAR_28));
 else if (VAR_42 == VAR_3)
  FUNC_35(VAR_4, VAR_8, VAR_6 + 1);


 VAR_26 = FUNC_23(VAR_5);
 VAR_42 = FUNC_25(VAR_4->dbg, VAR_5, &VAR_8, VAR_26, &VAR_28);
 if (VAR_42 == VAR_2)
  FUNC_34("dwarf_siblingof: %s", FUNC_9(VAR_28));
 else if (VAR_42 == VAR_3)
  FUNC_35(VAR_4, VAR_8, VAR_6);

 FUNC_5(VAR_4->dbg, VAR_5, VAR_1);
}
