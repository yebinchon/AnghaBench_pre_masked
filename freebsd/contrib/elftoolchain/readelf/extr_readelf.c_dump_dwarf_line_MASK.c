
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef char* uintmax_t ;
typedef char uint8_t ;
typedef int uint64_t ;
struct section {int scn; int * name; } ;
struct readelf {size_t shnum; int (* dw_read ) (TYPE_1__*,int*,int) ;int (* dw_decode ) (char**,scalar_t__) ;int dbg; struct section* sl; } ;
typedef char* intmax_t ;
typedef int int8_t ;
typedef scalar_t__ int64_t ;
struct TYPE_13__ {scalar_t__ d_size; scalar_t__ d_buf; } ;
typedef TYPE_1__ Elf_Data ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Small ;
typedef scalar_t__ Dwarf_Half ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Die ;


 int FUNC_0 (char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (char**,char*) ;
 int FUNC_3 (char**,char*) ;
 int FUNC_4 (int *,int ,int*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__*,int *) ;
 int FUNC_7 (int ,int *,int *,int *,int *,int *,int *) ;
 int FUNC_8 (int ,int *,int **,int *) ;
 int FUNC_9 (int *,scalar_t__*,int *) ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;
 TYPE_1__* FUNC_12 (int ,int *) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (int *,char*) ;
 scalar_t__ FUNC_15 (char*) ;
 int FUNC_16 (TYPE_1__*,int*,int) ;
 int FUNC_17 (TYPE_1__*,int*,int) ;
 int FUNC_18 (char**,scalar_t__) ;
 int FUNC_19 (char**,int) ;
 int FUNC_20 (TYPE_1__*,int*,int) ;
 scalar_t__ FUNC_21 (TYPE_1__*,int*,int) ;
 int FUNC_22 (TYPE_1__*,int*,int) ;
 int FUNC_23 (TYPE_1__*,int*,int) ;
 int FUNC_24 (TYPE_1__*,int*,int) ;
 int FUNC_25 (TYPE_1__*,int*,int) ;
 int FUNC_26 (TYPE_1__*,int*,int) ;
 int FUNC_27 (TYPE_1__*,int*,int) ;
 int FUNC_28 (char*,...) ;

__attribute__((used)) static void
FUNC_29(struct readelf *VAR_5)
{
 struct section *VAR_6;
 Dwarf_Die VAR_7;
 Dwarf_Error VAR_8;
 Dwarf_Half VAR_9, VAR_10, VAR_11;
 Dwarf_Unsigned VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 Dwarf_Small VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 Elf_Data *VAR_24;
 char *VAR_25;
 uint64_t VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;
 int64_t VAR_33;
 uint8_t *VAR_34, *VAR_35;
 int8_t VAR_36;
 int VAR_37, VAR_38, VAR_39, VAR_40, VAR_41;

 FUNC_13("\nDump of debug contents of section .debug_line:\n");

 VAR_6 = ((void*)0);
 for (VAR_37 = 0; (size_t) VAR_37 < VAR_5->shnum; VAR_37++) {
  VAR_6 = &VAR_5->sl[VAR_37];
  if (VAR_6->name != ((void*)0) && !FUNC_14(VAR_6->name, ".debug_line"))
   break;
 }
 if ((size_t) VAR_37 >= VAR_5->shnum)
  return;

 (void) FUNC_11();
 if ((VAR_24 = FUNC_12(VAR_6->scn, ((void*)0))) == ((void*)0)) {
  VAR_40 = FUNC_11();
  if (VAR_40 != 0)
   FUNC_28("elf_getdata failed: %s", FUNC_10(-1));
  return;
 }
 if (VAR_24->d_size <= 0)
  return;

 while ((VAR_41 = FUNC_7(VAR_5->dbg, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     ((void*)0), &VAR_8)) == VAR_2) {
  VAR_7 = ((void*)0);
  while (FUNC_8(VAR_5->dbg, VAR_7, &VAR_7, &VAR_8) == VAR_2) {
   if (FUNC_9(VAR_7, &VAR_9, &VAR_8) != VAR_2) {
    FUNC_28("dwarf_tag failed: %s",
        FUNC_5(VAR_8));
    return;
   }

   if (VAR_9 == VAR_3)
    break;
  }
  if (VAR_7 == ((void*)0)) {
   FUNC_28("could not find DW_TAG_compile_unit die");
   return;
  }
  if (FUNC_4(VAR_7, VAR_0, &VAR_12,
      &VAR_8) != VAR_2)
   continue;

  VAR_14 = VAR_5->dw_read(VAR_24, &VAR_12, 4);
  if (VAR_14 == 0xffffffff) {
   VAR_39 = 8;
   VAR_14 = VAR_5->dw_read(VAR_24, &VAR_12, 8);
  } else
   VAR_39 = 4;

  if (VAR_14 > VAR_24->d_size - VAR_12) {
   FUNC_28("invalid .dwarf_line section");
   continue;
  }

  VAR_13 = VAR_12 + VAR_14;
  VAR_35 = (uint8_t *) VAR_24->d_buf + VAR_13;
  VAR_10 = VAR_5->dw_read(VAR_24, &VAR_12, 2);
  VAR_15 = VAR_5->dw_read(VAR_24, &VAR_12, VAR_39);
  VAR_19 = VAR_5->dw_read(VAR_24, &VAR_12, 1);
  VAR_20 = VAR_5->dw_read(VAR_24, &VAR_12, 1);
  VAR_36 = VAR_5->dw_read(VAR_24, &VAR_12, 1);
  VAR_21 = VAR_5->dw_read(VAR_24, &VAR_12, 1);
  VAR_22 = VAR_5->dw_read(VAR_24, &VAR_12, 1);

  FUNC_13("\n");
  FUNC_13("  Length:\t\t\t%ju\n", (uintmax_t) VAR_14);
  FUNC_13("  DWARF version:\t\t%u\n", VAR_10);
  FUNC_13("  Prologue Length:\t\t%ju\n", (uintmax_t) VAR_15);
  FUNC_13("  Minimum Instruction Length:\t%u\n", VAR_19);
  FUNC_13("  Initial value of 'is_stmt':\t%u\n", VAR_20);
  FUNC_13("  Line Base:\t\t\t%d\n", VAR_36);
  FUNC_13("  Line Range:\t\t\t%u\n", VAR_21);
  FUNC_13("  Opcode Base:\t\t\t%u\n", VAR_22);
  (void) FUNC_6(VAR_5->dbg, &VAR_11, &VAR_8);
  FUNC_13("  (Pointer size:\t\t%u)\n", VAR_11);

  FUNC_13("\n");
  FUNC_13(" Opcodes:\n");
  for (VAR_37 = 1; VAR_37 < VAR_22; VAR_37++) {
   VAR_23 = VAR_5->dw_read(VAR_24, &VAR_12, 1);
   FUNC_13("  Opcode %d has %u args\n", VAR_37, VAR_23);
  }

  FUNC_13("\n");
  FUNC_13(" The Directory Table:\n");
  VAR_34 = (uint8_t *) VAR_24->d_buf + VAR_12;
  while (*VAR_34 != '\0') {
   FUNC_13("  %s\n", (char *) VAR_34);
   VAR_34 += FUNC_15((char *) VAR_34) + 1;
  }

  VAR_34++;
  FUNC_13("\n");
  FUNC_13(" The File Name Table:\n");
  FUNC_13("  Entry\tDir\tTime\tSize\tName\n");
  VAR_37 = 0;
  while (*VAR_34 != '\0') {
   VAR_37++;
   VAR_25 = (char *) VAR_34;
   VAR_34 += FUNC_15(VAR_25) + 1;
   VAR_16 = FUNC_3(&VAR_34, VAR_35);
   VAR_17 = FUNC_3(&VAR_34, VAR_35);
   VAR_18 = FUNC_3(&VAR_34, VAR_35);
   FUNC_13("  %d\t%ju\t%ju\t%ju\t%s\n", VAR_37,
       (uintmax_t) VAR_16, (uintmax_t) VAR_17,
       (uintmax_t) VAR_18, VAR_25);
  }
  VAR_34++;
  FUNC_13("\n");
  FUNC_13(" Line Number Statements:\n");

  do { VAR_26 = 0; VAR_27 = 1; VAR_28 = 1; VAR_29 = 0; VAR_38 = VAR_20; } while(0);

  while (VAR_34 < VAR_35) {

   if (*VAR_34 == 0) {



    VAR_34++;
    VAR_31 = FUNC_3(&VAR_34, VAR_35);
    FUNC_13("  Extended opcode %u: ", *VAR_34);
    switch (*VAR_34) {
    case 141:
     VAR_34++;
     do { VAR_26 = 0; VAR_27 = 1; VAR_28 = 1; VAR_29 = 0; VAR_38 = VAR_20; } while(0);
     FUNC_13("End of Sequence\n");
     break;
    case 140:
     VAR_34++;
     VAR_26 = VAR_5->dw_decode(&VAR_34,
         VAR_11);
     FUNC_13("set Address to %#jx\n",
         (uintmax_t) VAR_26);
     break;
    case 142:
     VAR_34++;
     VAR_25 = (char *) VAR_34;
     VAR_34 += FUNC_15(VAR_25) + 1;
     VAR_16 = FUNC_3(&VAR_34, VAR_35);
     VAR_17 = FUNC_3(&VAR_34, VAR_35);
     VAR_18 = FUNC_3(&VAR_34, VAR_35);
     FUNC_13("define new file: %s\n", VAR_25);
     break;
    default:

     VAR_34 += VAR_31;
     FUNC_13("unknown opcode\n");
    }
   } else if (*VAR_34 > 0 && *VAR_34 < VAR_22) {



    switch(*VAR_34++) {
    case 136:
     FUNC_13("  Copy\n");
     break;
    case 138:
     VAR_32 = FUNC_3(&VAR_34, VAR_35) *
         VAR_19;
     VAR_26 += VAR_32;
     FUNC_13("  Advance PC by %ju to %#jx\n",
         (uintmax_t) VAR_32,
         (uintmax_t) VAR_26);
     break;
    case 139:
     VAR_33 = FUNC_2(&VAR_34, VAR_35);
     VAR_28 += VAR_33;
     FUNC_13("  Advance Line by %jd to %ju\n",
         (intmax_t) VAR_33,
         (uintmax_t) VAR_28);
     break;
    case 130:
     VAR_27 = FUNC_3(&VAR_34, VAR_35);
     FUNC_13("  Set File to %ju\n",
         (uintmax_t) VAR_27);
     break;
    case 132:
     VAR_29 = FUNC_3(&VAR_34, VAR_35);
     FUNC_13("  Set Column to %ju\n",
         (uintmax_t) VAR_29);
     break;
    case 134:
     VAR_38 = !VAR_38;
     FUNC_13("  Set is_stmt to %d\n", VAR_38);
     break;
    case 133:
     FUNC_13("  Set basic block flag\n");
     break;
    case 137:
     VAR_26 += ((((255) - VAR_22) / VAR_21) * VAR_19);
     FUNC_13("  Advance PC by constant %ju"
         " to %#jx\n",
         (uintmax_t) ((((255) - VAR_22) / VAR_21) * VAR_19),
         (uintmax_t) VAR_26);
     break;
    case 135:
     VAR_32 = VAR_5->dw_decode(&VAR_34, 2);
     VAR_26 += VAR_32;
     FUNC_13("  Advance PC by fixed value "
         "%ju to %#jx\n",
         (uintmax_t) VAR_32,
         (uintmax_t) VAR_26);
     break;
    case 128:
     FUNC_13("  Set prologue end flag\n");
     break;
    case 131:
     FUNC_13("  Set epilogue begin flag\n");
     break;
    case 129:
     VAR_30 = FUNC_3(&VAR_34, VAR_35);
     FUNC_13("  Set isa to %ju\n",
         (uintmax_t) VAR_30);
     break;
    default:

     FUNC_13("  Unknown extended opcode %u\n",
         *(VAR_34 - 1));
     break;
    }

   } else {



    VAR_28 += (VAR_36 + (((*VAR_34) - VAR_22) % VAR_21));
    VAR_26 += ((((*VAR_34) - VAR_22) / VAR_21) * VAR_19);
    FUNC_13("  Special opcode %u: advance Address "
        "by %ju to %#jx and Line by %jd to %ju\n",
        *VAR_34 - VAR_22, (uintmax_t) ((((*VAR_34) - VAR_22) / VAR_21) * VAR_19),
        (uintmax_t) VAR_26, (intmax_t) (VAR_36 + (((*VAR_34) - VAR_22) % VAR_21)),
        (uintmax_t) VAR_28);
    VAR_34++;
   }


  }
 }
 if (VAR_41 == VAR_1)
  FUNC_28("dwarf_next_cu_header: %s", FUNC_5(VAR_8));




}
