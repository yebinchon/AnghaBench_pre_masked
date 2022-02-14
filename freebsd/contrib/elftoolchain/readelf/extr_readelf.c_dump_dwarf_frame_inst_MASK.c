
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int unk_op ;
typedef char const* uintmax_t ;
typedef int uint8_t ;
struct readelf {int dummy; } ;
typedef char const* intmax_t ;
struct TYPE_4__ {int fp_base_op; int fp_extended_op; int fp_offset; int fp_register; } ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Small ;
typedef int Dwarf_Signed ;
typedef TYPE_1__ Dwarf_Frame_Op ;
typedef int Dwarf_Error ;
typedef int Dwarf_Debug ;
typedef int Dwarf_Cie ;
typedef int Dwarf_Addr ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int,TYPE_1__**,int*,int *) ;
 scalar_t__ FUNC_3 (int,char const**) ;
 char* FUNC_4 (struct readelf*,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char) ;
 int FUNC_7 (char*,int,char*,int) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static void
FUNC_9(struct readelf *VAR_2, Dwarf_Cie VAR_3, uint8_t *VAR_4,
    Dwarf_Unsigned VAR_5, Dwarf_Unsigned VAR_6, Dwarf_Signed VAR_7, Dwarf_Addr VAR_8,
    Dwarf_Debug VAR_9)
{
 Dwarf_Frame_Op *VAR_10;
 Dwarf_Signed VAR_11, VAR_12;
 Dwarf_Small VAR_13;
 Dwarf_Error VAR_14;
 const char *VAR_15;
 char VAR_16[32];
 int VAR_17;

 if (FUNC_2(VAR_3, VAR_4, VAR_5, &VAR_10,
     &VAR_11, &VAR_14) != VAR_1) {
  FUNC_8("dwarf_expand_frame_instructions failed: %s",
      FUNC_1(VAR_14));
  return;
 }

 for (VAR_17 = 0; VAR_17 < VAR_11; VAR_17++) {
  if (VAR_10[VAR_17].fp_base_op != 0)
   VAR_13 = VAR_10[VAR_17].fp_base_op << 6;
  else
   VAR_13 = VAR_10[VAR_17].fp_extended_op;
  if (FUNC_3(VAR_13, &VAR_15) != VAR_1) {
   FUNC_7(VAR_16, sizeof(VAR_16), "[Unknown CFA: %#x]",
       VAR_13);
   VAR_15 = VAR_16;
  }
  FUNC_5("  %s", VAR_15);
  switch (VAR_13) {
  case 141:
   VAR_12 = VAR_10[VAR_17].fp_offset * VAR_6;
   VAR_8 += VAR_12;
   FUNC_5(": %ju to %08jx", (uintmax_t) VAR_12,
       (uintmax_t) VAR_8);
   break;
  case 132:
  case 131:
  case 130:
   VAR_12 = VAR_10[VAR_17].fp_offset * VAR_7;
   FUNC_5(": r%u (%s) at cfa%+jd", VAR_10[VAR_17].fp_register,
       FUNC_4(VAR_2, VAR_10[VAR_17].fp_register),
       (intmax_t) VAR_12);
   break;
  case 129:
   FUNC_5(": r%u (%s)", VAR_10[VAR_17].fp_register,
       FUNC_4(VAR_2, VAR_10[VAR_17].fp_register));
   break;
  case 128:
   VAR_8 = VAR_10[VAR_17].fp_offset;
   FUNC_5(": to %08jx", (uintmax_t) VAR_8);
   break;
  case 140:
  case 139:
  case 138:
   VAR_8 += VAR_10[VAR_17].fp_offset;
   FUNC_5(": %jd to %08jx", (intmax_t) VAR_10[VAR_17].fp_offset,
       (uintmax_t) VAR_8);
   break;
  case 137:
   FUNC_5(": r%u (%s) ofs %ju", VAR_10[VAR_17].fp_register,
       FUNC_4(VAR_2, VAR_10[VAR_17].fp_register),
       (uintmax_t) VAR_10[VAR_17].fp_offset);
   break;
  case 133:
   FUNC_5(": r%u (%s) ofs %jd", VAR_10[VAR_17].fp_register,
       FUNC_4(VAR_2, VAR_10[VAR_17].fp_register),
       (intmax_t) (VAR_10[VAR_17].fp_offset * VAR_7));
   break;
  case 134:
   FUNC_5(": r%u (%s)", VAR_10[VAR_17].fp_register,
       FUNC_4(VAR_2, VAR_10[VAR_17].fp_register));
   break;
  case 136:
   FUNC_5(": %ju", (uintmax_t) VAR_10[VAR_17].fp_offset);
   break;
  case 135:
   FUNC_5(": %jd", (intmax_t) (VAR_10[VAR_17].fp_offset * VAR_7));
   break;
  default:
   break;
  }
  FUNC_6('\n');
 }

 FUNC_0(VAR_9, VAR_10, VAR_0);
}
