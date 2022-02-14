
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
typedef int uint32_t ;
struct vmcb_state {int dbgctl; int g_pat; int dr7; int dr6; int efer; } ;
struct vmcb_ctrl {int np_enable; int v_intr_masking; int lbr_virt_en; scalar_t__ asid; void* n_cr3; void* msrpm_base_pa; void* iopm_base_pa; } ;
struct svm_softc {int vm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (struct svm_softc*,int,int ,int) ;
 int FUNC_3 (struct svm_softc*,int,int ,int) ;
 struct vmcb_ctrl* FUNC_4 (struct svm_softc*,int) ;
 struct vmcb_state* FUNC_5 (struct svm_softc*,int) ;
 scalar_t__ FUNC_6 (int ,int) ;

__attribute__((used)) static void
FUNC_7(struct svm_softc *VAR_24, int VAR_25, uint64_t VAR_26,
    uint64_t VAR_27, uint64_t VAR_28)
{
 struct vmcb_ctrl *VAR_29;
 struct vmcb_state *VAR_30;
 uint32_t VAR_31;
 int VAR_32;

 VAR_29 = FUNC_4(VAR_24, VAR_25);
 VAR_30 = FUNC_5(VAR_24, VAR_25);

 VAR_29->iopm_base_pa = VAR_26;
 VAR_29->msrpm_base_pa = VAR_27;


 VAR_29->np_enable = 1;
 VAR_29->n_cr3 = VAR_28;





 for (VAR_32 = 0; VAR_32 < 16; VAR_32++) {
  VAR_31 = (FUNC_0(VAR_32) << 16) | FUNC_0(VAR_32);
  if (VAR_32 == 0 || VAR_32 == 2 || VAR_32 == 3 || VAR_32 == 4 || VAR_32 == 8)
   FUNC_2(VAR_24, VAR_25, VAR_8, VAR_31);
  else
   FUNC_3(VAR_24, VAR_25, VAR_8, VAR_31);
 }






 if (FUNC_6(VAR_24->vm, VAR_25)) {
  for (VAR_32 = 0; VAR_32 < 32; VAR_32++) {



   if (VAR_32 == 2 || VAR_32 == 9) {
    continue;
   }
   FUNC_3(VAR_24, VAR_25, VAR_11, FUNC_0(VAR_32));
  }
 } else {
  FUNC_3(VAR_24, VAR_25, VAR_11, FUNC_0(VAR_3));
 }


 FUNC_3(VAR_24, VAR_25, VAR_9, VAR_16);
 FUNC_3(VAR_24, VAR_25, VAR_9, VAR_18);
 FUNC_3(VAR_24, VAR_25, VAR_9, VAR_12);
 FUNC_3(VAR_24, VAR_25, VAR_9, VAR_15);
 FUNC_3(VAR_24, VAR_25, VAR_9, VAR_14);
 FUNC_3(VAR_24, VAR_25, VAR_9, VAR_20);
 FUNC_3(VAR_24, VAR_25, VAR_9, VAR_22);
 FUNC_3(VAR_24, VAR_25, VAR_9, VAR_21);
 FUNC_3(VAR_24, VAR_25, VAR_9,
     VAR_13);

 FUNC_3(VAR_24, VAR_25, VAR_10, VAR_17);
 FUNC_3(VAR_24, VAR_25, VAR_10, VAR_19);





 FUNC_3(VAR_24, VAR_25, VAR_10, VAR_23);




 VAR_29->asid = 0;







 VAR_29->v_intr_masking = 1;


 VAR_29->lbr_virt_en = 1;
 VAR_30->dbgctl = FUNC_0(0);


 VAR_30->efer = VAR_2;


 VAR_30->g_pat = FUNC_1(0, VAR_6) |
     FUNC_1(1, VAR_7) |
     FUNC_1(2, VAR_5) |
     FUNC_1(3, VAR_4) |
     FUNC_1(4, VAR_6) |
     FUNC_1(5, VAR_7) |
     FUNC_1(6, VAR_5) |
     FUNC_1(7, VAR_4);


 VAR_30->dr6 = VAR_0;
 VAR_30->dr7 = VAR_1;
}
