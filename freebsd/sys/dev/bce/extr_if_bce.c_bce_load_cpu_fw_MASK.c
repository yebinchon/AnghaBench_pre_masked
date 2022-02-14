
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct fw_info {int text_len; int data_len; int sbss_len; int bss_len; int rodata_len; int start_addr; int * rodata; scalar_t__ rodata_addr; int * bss; scalar_t__ bss_addr; int * sbss; scalar_t__ sbss_addr; int * data; scalar_t__ data_addr; int * text; scalar_t__ text_addr; } ;
struct cpu_reg {scalar_t__ pc; scalar_t__ inst; scalar_t__ mips_view_base; scalar_t__ spad_base; } ;
struct bce_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bce_softc*,scalar_t__,int ) ;
 int FUNC_3 (struct bce_softc*,struct cpu_reg*) ;

__attribute__((used)) static void
FUNC_4(struct bce_softc *VAR_1, struct cpu_reg *VAR_2,
 struct fw_info *VAR_3)
{
 u32 VAR_4;

 FUNC_0(VAR_0);

    FUNC_3(VAR_1, VAR_2);


 VAR_4 = VAR_2->spad_base + (VAR_3->text_addr - VAR_2->mips_view_base);
 if (VAR_3->text) {
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < (VAR_3->text_len / 4); VAR_5++, VAR_4 += 4) {
   FUNC_2(VAR_1, VAR_4, VAR_3->text[VAR_5]);
         }
 }


 VAR_4 = VAR_2->spad_base + (VAR_3->data_addr - VAR_2->mips_view_base);
 if (VAR_3->data) {
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < (VAR_3->data_len / 4); VAR_6++, VAR_4 += 4) {
   FUNC_2(VAR_1, VAR_4, VAR_3->data[VAR_6]);
  }
 }


 VAR_4 = VAR_2->spad_base + (VAR_3->sbss_addr - VAR_2->mips_view_base);
 if (VAR_3->sbss) {
  int VAR_7;

  for (VAR_7 = 0; VAR_7 < (VAR_3->sbss_len / 4); VAR_7++, VAR_4 += 4) {
   FUNC_2(VAR_1, VAR_4, VAR_3->sbss[VAR_7]);
  }
 }


 VAR_4 = VAR_2->spad_base + (VAR_3->bss_addr - VAR_2->mips_view_base);
 if (VAR_3->bss) {
  int VAR_8;

  for (VAR_8 = 0; VAR_8 < (VAR_3->bss_len/4); VAR_8++, VAR_4 += 4) {
   FUNC_2(VAR_1, VAR_4, VAR_3->bss[VAR_8]);
  }
 }


 VAR_4 = VAR_2->spad_base +
  (VAR_3->rodata_addr - VAR_2->mips_view_base);
 if (VAR_3->rodata) {
  int VAR_9;

  for (VAR_9 = 0; VAR_9 < (VAR_3->rodata_len / 4); VAR_9++, VAR_4 += 4) {
   FUNC_2(VAR_1, VAR_4, VAR_3->rodata[VAR_9]);
  }
 }


 FUNC_2(VAR_1, VAR_2->inst, 0);
 FUNC_2(VAR_1, VAR_2->pc, VAR_3->start_addr);

 FUNC_1(VAR_0);
}
