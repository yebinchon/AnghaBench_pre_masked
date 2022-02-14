
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct section {char* name; int scn; } ;
struct readelf {int (* dw_decode ) (int**,int) ;} ;
struct TYPE_3__ {scalar_t__ d_size; int* d_buf; } ;
typedef TYPE_1__ Elf_Data ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct readelf*,int*,int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int**,int) ;
 int FUNC_7 (int**,int) ;
 int FUNC_8 (int**,int) ;
 int FUNC_9 (int**,int) ;
 int FUNC_10 (char*,...) ;

__attribute__((used)) static void
FUNC_11(struct readelf *VAR_7, struct section *VAR_8)
{
 Elf_Data *VAR_9;
 uint32_t VAR_10;
 uint16_t VAR_11;
 uint8_t *VAR_12, *VAR_13;
 uint8_t VAR_14, VAR_15;
 int VAR_16;

 (void) FUNC_3();
 if ((VAR_9 = FUNC_4(VAR_8->scn, ((void*)0))) == ((void*)0)) {
  VAR_16 = FUNC_3();
  if (VAR_16 != 0)
   FUNC_10("elf_rawdata failed: %s",
       FUNC_2(VAR_16));
  return;
 }
 if (VAR_9->d_size == 0)
  return;

 FUNC_5("\nSection %s contains:\n", VAR_8->name);
 VAR_12 = VAR_9->d_buf;
 VAR_13 = VAR_12 + VAR_9->d_size;
 while (VAR_12 < VAR_13) {
  if (VAR_13 - VAR_12 < 8) {
   FUNC_10("Truncated MIPS option header");
   return;
  }
  VAR_14 = VAR_7->dw_decode(&VAR_12, 1);
  VAR_15 = VAR_7->dw_decode(&VAR_12, 1);
  VAR_11 = VAR_7->dw_decode(&VAR_12, 2);
  VAR_10 = VAR_7->dw_decode(&VAR_12, 4);
  if (VAR_15 < 8 || VAR_15 - 8 > VAR_13 - VAR_12) {
   FUNC_10("Malformed MIPS option header");
   return;
  }
  VAR_15 -= 8;
  switch (VAR_14) {
  case 129:
   FUNC_0(VAR_7, VAR_12, VAR_15);
   break;
  case 138:
   FUNC_5(" EXCEPTIONS FPU_MIN: %#x\n",
       VAR_10 & VAR_1);
   FUNC_5("%11.11s FPU_MAX: %#x\n", "",
       VAR_10 & VAR_0);
   FUNC_1("", VAR_2,
       VAR_10);
   break;
  case 131:
   FUNC_5(" %-10.10s section: %ju\n", "OPAD",
       (uintmax_t) VAR_11);
   FUNC_1("", VAR_6, VAR_10);
   break;
  case 133:
   FUNC_1("HWPATCH", VAR_5,
       VAR_10);
   break;
  case 135:
   FUNC_1("HWAND", VAR_3, VAR_10);
   break;
  case 134:
   FUNC_1("HWOR", VAR_4, VAR_10);
   break;
  case 137:
   FUNC_5(" %-10.10s %#jx\n", "FILL", (uintmax_t) VAR_10);
   break;
  case 128:
   FUNC_5(" %-10.10s\n", "TAGS");
   break;
  case 136:
   FUNC_5(" %-10.10s GP group number: %#x\n", "GP_GROUP",
       VAR_10 & 0xFFFF);
   if (VAR_10 & 0x10000)
    FUNC_5(" %-10.10s GP group is "
        "self-contained\n", "");
   break;
  case 132:
   FUNC_5(" %-10.10s default GP group number: %#x\n",
       "IDENT", VAR_10 & 0xFFFF);
   if (VAR_10 & 0x10000)
    FUNC_5(" %-10.10s default GP group is "
        "self-contained\n", "");
   break;
  case 130:
   FUNC_5(" %-10.10s\n", "PAGESIZE");
   break;
  default:
   break;
  }
  VAR_12 += VAR_15;
 }
}
