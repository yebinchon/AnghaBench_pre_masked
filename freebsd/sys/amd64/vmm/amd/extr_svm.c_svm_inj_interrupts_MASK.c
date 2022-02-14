
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vmcb_state {scalar_t__ rip; int rflags; } ;
struct vmcb_ctrl {int eventinj; int v_tpr; scalar_t__ intr_shadow; } ;
struct vlapic {int dummy; } ;
struct svm_vcpu {scalar_t__ nextrip; } ;
struct svm_softc {int vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (int ,int,char*,int) ;
 int FUNC_3 (int ,int,char*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct svm_softc*,int) ;
 int FUNC_5 (struct svm_softc*,int) ;
 int FUNC_6 (struct svm_softc*,int) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (struct svm_softc*,int) ;
 int FUNC_9 (struct svm_softc*,int,int ,int,int ,int) ;
 struct svm_vcpu* FUNC_10 (struct svm_softc*,int) ;
 struct vmcb_ctrl* FUNC_11 (struct svm_softc*,int) ;
 struct vmcb_state* FUNC_12 (struct svm_softc*,int) ;
 int FUNC_13 (struct svm_softc*,int) ;
 int FUNC_14 (struct svm_softc*,int,int ) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int ,int*) ;
 int FUNC_17 (struct vlapic*) ;
 int FUNC_18 (struct vlapic*,int) ;
 int FUNC_19 (struct vlapic*,int*) ;
 int FUNC_20 (int ,int) ;
 int FUNC_21 (int ,int) ;
 int FUNC_22 (int ,int) ;
 scalar_t__ FUNC_23 (int ,int) ;

__attribute__((used)) static void
FUNC_24(struct svm_softc *VAR_8, int VAR_9, struct vlapic *VAR_10)
{
 struct vmcb_ctrl *VAR_11;
 struct vmcb_state *VAR_12;
 struct svm_vcpu *VAR_13;
 uint8_t VAR_14;
 int VAR_15, VAR_16;
 int VAR_17;

 VAR_12 = FUNC_12(VAR_8, VAR_9);
 VAR_11 = FUNC_11(VAR_8, VAR_9);
 VAR_13 = FUNC_10(VAR_8, VAR_9);

 VAR_16 = 0;

 if (VAR_13->nextrip != VAR_12->rip) {
  VAR_11->intr_shadow = 0;
  FUNC_3(VAR_8->vm, VAR_9, "Guest interrupt blocking "
      "cleared due to rip change: %#lx/%#lx",
      VAR_13->nextrip, VAR_12->rip);
 }
 FUNC_13(VAR_8, VAR_9);


 if (FUNC_23(VAR_8->vm, VAR_9)) {
  if (FUNC_8(VAR_8, VAR_9)) {




   FUNC_1(VAR_8->vm, VAR_9, "Cannot inject NMI due "
       "to NMI-blocking");
  } else if (VAR_11->intr_shadow) {



   FUNC_1(VAR_8->vm, VAR_9, "Cannot inject NMI due to "
       "interrupt shadow");
   VAR_16 = 1;
   goto done;
  } else if (VAR_11->eventinj & VAR_6) {




   FUNC_2(VAR_8->vm, VAR_9, "Cannot inject NMI due to "
       "eventinj %#lx", VAR_11->eventinj);
   FUNC_7(VAR_7, VAR_1);
  } else {
   FUNC_22(VAR_8->vm, VAR_9);


   FUNC_9(VAR_8, VAR_9, VAR_5,
       VAR_0, 0, 0);


   FUNC_6(VAR_8, VAR_9);

   FUNC_1(VAR_8->vm, VAR_9, "Injecting vNMI");
  }
 }

 VAR_17 = FUNC_21(VAR_8->vm, VAR_9);
 if (!VAR_17) {
  if (!FUNC_19(VAR_10, &VAR_15))
   goto done;
  FUNC_0(VAR_15 >= 16 && VAR_15 <= 255,
      ("invalid vector %d from local APIC", VAR_15));
 } else {

  FUNC_16(VAR_8->vm, &VAR_15);
  FUNC_0(VAR_15 >= 0 && VAR_15 <= 255,
      ("invalid vector %d from INTR", VAR_15));
 }





 if ((VAR_12->rflags & VAR_2) == 0) {
  FUNC_3(VAR_8->vm, VAR_9, "Cannot inject vector %d due to "
      "rflags %#lx", VAR_15, VAR_12->rflags);
  VAR_16 = 1;
  goto done;
 }

 if (VAR_11->intr_shadow) {
  FUNC_2(VAR_8->vm, VAR_9, "Cannot inject vector %d due to "
      "interrupt shadow", VAR_15);
  VAR_16 = 1;
  goto done;
 }

 if (VAR_11->eventinj & VAR_6) {
  FUNC_3(VAR_8->vm, VAR_9, "Cannot inject vector %d due to "
      "eventinj %#lx", VAR_15, VAR_11->eventinj);
  VAR_16 = 1;
  goto done;
 }

 FUNC_9(VAR_8, VAR_9, VAR_4, VAR_15, 0, 0);

 if (!VAR_17) {
  FUNC_18(VAR_10, VAR_15);
 } else {
  FUNC_20(VAR_8->vm, VAR_9);
  FUNC_15(VAR_8->vm, VAR_15);
 }
 VAR_16 = 1;
done:
 VAR_14 = FUNC_17(VAR_10);
 FUNC_0(VAR_14 <= 15, ("invalid v_tpr %#x", VAR_14));
 if (VAR_11->v_tpr != VAR_14) {
  FUNC_3(VAR_8->vm, VAR_9, "VMCB V_TPR changed from %#x to %#x",
      VAR_11->v_tpr, VAR_14);
  VAR_11->v_tpr = VAR_14;
  FUNC_14(VAR_8, VAR_9, VAR_3);
 }

 if (VAR_16) {
  FUNC_0((VAR_11->eventinj & VAR_6) != 0 ||
      (VAR_12->rflags & VAR_2) == 0 || VAR_11->intr_shadow,
      ("Bogus intr_window_exiting: eventinj (%#lx), "
      "intr_shadow (%u), rflags (%#lx)",
      VAR_11->eventinj, VAR_11->intr_shadow, VAR_12->rflags));
  FUNC_5(VAR_8, VAR_9);
 } else {
  FUNC_4(VAR_8, VAR_9);
 }
}
