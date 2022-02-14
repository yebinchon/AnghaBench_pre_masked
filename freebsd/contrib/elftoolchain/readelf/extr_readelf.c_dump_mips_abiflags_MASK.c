
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct section {int scn; } ;
struct readelf {int (* dw_decode ) (int**,int) ;} ;
struct TYPE_3__ {int d_size; int* d_buf; } ;
typedef TYPE_1__ Elf_Data ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int ,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int**,int) ;
 int FUNC_6 (int**,int) ;
 int FUNC_7 (int**,int) ;
 int FUNC_8 (int**,int) ;
 int FUNC_9 (int**,int) ;
 int FUNC_10 (int**,int) ;
 int FUNC_11 (int**,int) ;
 int FUNC_12 (int**,int) ;
 int FUNC_13 (int**,int) ;
 int FUNC_14 (int**,int) ;
 int FUNC_15 (int**,int) ;
 int FUNC_16 (char*,...) ;

__attribute__((used)) static void
FUNC_17(struct readelf *VAR_0, struct section *VAR_1)
{
 Elf_Data *VAR_2;
 uint8_t *VAR_3;
 int VAR_4;
 uint32_t VAR_5, VAR_6, VAR_7, VAR_8;
 uint16_t VAR_9;
 uint8_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 if ((VAR_2 = FUNC_2(VAR_1->scn, ((void*)0))) == ((void*)0)) {
  VAR_4 = FUNC_1();
  if (VAR_4 != 0)
   FUNC_16("elf_rawdata failed: %s",
       FUNC_0(VAR_4));
  return;
 }
 if (VAR_2->d_size != 24) {
  FUNC_16("invalid MIPS abiflags section size");
  return;
 }

 VAR_3 = VAR_2->d_buf;
 VAR_9 = VAR_0->dw_decode(&VAR_3, 2);
 FUNC_4("MIPS ABI Flags Version: %u", VAR_9);
 if (VAR_9 != 0) {
  FUNC_4(" (unknown)\n\n");
  return;
 }
 FUNC_4("\n\n");

 VAR_10 = VAR_0->dw_decode(&VAR_3, 1);
 VAR_11 = VAR_0->dw_decode(&VAR_3, 1);
 VAR_12 = VAR_0->dw_decode(&VAR_3, 1);
 VAR_13 = VAR_0->dw_decode(&VAR_3, 1);
 VAR_14 = VAR_0->dw_decode(&VAR_3, 1);
 VAR_15 = VAR_0->dw_decode(&VAR_3, 1);
 VAR_5 = VAR_0->dw_decode(&VAR_3, 4);
 VAR_6 = VAR_0->dw_decode(&VAR_3, 4);
 VAR_7 = VAR_0->dw_decode(&VAR_3, 4);
 VAR_8 = VAR_0->dw_decode(&VAR_3, 4);

 FUNC_4("ISA: ");
 if (VAR_11 <= 1)
  FUNC_4("MIPS%u\n", VAR_10);
 else
  FUNC_4("MIPS%ur%u\n", VAR_10, VAR_11);
 FUNC_4("GPR size: %d\n", FUNC_3(VAR_12));
 FUNC_4("CPR1 size: %d\n", FUNC_3(VAR_13));
 FUNC_4("CPR2 size: %d\n", FUNC_3(VAR_14));
 FUNC_4("FP ABI: ");
 switch (VAR_15) {
 case 3:
  FUNC_4("Soft float");
  break;
 default:
  FUNC_4("%u", VAR_15);
  break;
 }
 FUNC_4("\nISA Extension: %u\n", VAR_5);
 FUNC_4("ASEs: %u\n", VAR_6);
 FUNC_4("FLAGS 1: %08x\n", VAR_7);
 FUNC_4("FLAGS 2: %08x\n", VAR_8);
}
