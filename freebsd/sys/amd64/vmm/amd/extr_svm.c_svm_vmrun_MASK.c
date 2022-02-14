
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint16_t ;
struct vmcb_state {int rip; } ;
struct vmcb_ctrl {int vmcb_clean; } ;
struct vm_exit {int dummy; } ;
struct vm_eventinfo {int dummy; } ;
struct vm {int dummy; } ;
struct vlapic {int dummy; } ;
struct TYPE_7__ {scalar_t__ gen; } ;
struct svm_vcpu {scalar_t__ lastcpu; int dirty; int nextrip; TYPE_2__ asid; } ;
struct svm_softc {TYPE_1__* vcpu; struct vm* vm; } ;
struct svm_regctx {int dummy; } ;
typedef int register_t ;
typedef TYPE_3__* pmap_t ;
struct TYPE_8__ {int pm_active; } ;
struct TYPE_6__ {int vmcb_pa; } ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (struct vm*,int,char*,int) ;
 int VAR_0 ;
 int FUNC_3 (struct svm_softc*,int,TYPE_3__*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct svm_regctx*) ;
 int FUNC_11 (struct svm_regctx*) ;
 struct svm_regctx* FUNC_12 (struct svm_softc*,int) ;
 struct svm_vcpu* FUNC_13 (struct svm_softc*,int) ;
 struct vmcb_ctrl* FUNC_14 (struct svm_softc*,int) ;
 struct vmcb_state* FUNC_15 (struct svm_softc*,int) ;
 int FUNC_16 (struct svm_softc*,int,struct vlapic*) ;
 int FUNC_17 (int ,struct svm_regctx*,int ) ;
 int FUNC_18 (struct svm_softc*,int) ;
 int FUNC_19 (struct svm_softc*,int) ;
 int FUNC_20 (struct svm_softc*,int,int) ;
 int FUNC_21 (struct svm_softc*,int,struct vm_exit*) ;
 scalar_t__ FUNC_22 (struct vm*,int) ;
 scalar_t__ FUNC_23 (struct vm_eventinfo*) ;
 scalar_t__ FUNC_24 (struct vm_eventinfo*) ;
 scalar_t__ FUNC_25 (struct vm*,int) ;
 scalar_t__ FUNC_26 (struct vm_eventinfo*) ;
 int FUNC_27 (struct vm*,int,int) ;
 int FUNC_28 (struct vm*,int,int) ;
 int FUNC_29 (struct vm*,int,int) ;
 int FUNC_30 (struct vm*,int,int) ;
 int FUNC_31 (struct vm*,int,int) ;
 struct vm_exit* FUNC_32 (struct vm*,int) ;
 struct vlapic* FUNC_33 (struct vm*,int) ;
 int VAR_2 ;
 int FUNC_34 (struct vm*,int,int ,int) ;

__attribute__((used)) static int
FUNC_35(void *VAR_3, int VAR_4, register_t VAR_5, pmap_t VAR_6,
 struct vm_eventinfo *VAR_7)
{
 struct svm_regctx *VAR_8;
 struct svm_softc *VAR_9;
 struct svm_vcpu *VAR_10;
 struct vmcb_state *VAR_11;
 struct vmcb_ctrl *VAR_12;
 struct vm_exit *VAR_13;
 struct vlapic *VAR_14;
 struct vm *VAR_15;
 uint64_t VAR_16;
 int VAR_17;
 uint16_t VAR_18;

 VAR_9 = VAR_3;
 VAR_15 = VAR_9->vm;

 VAR_10 = FUNC_13(VAR_9, VAR_4);
 VAR_11 = FUNC_15(VAR_9, VAR_4);
 VAR_12 = FUNC_14(VAR_9, VAR_4);
 VAR_13 = FUNC_32(VAR_15, VAR_4);
 VAR_14 = FUNC_33(VAR_15, VAR_4);

 VAR_8 = FUNC_12(VAR_9, VAR_4);
 VAR_16 = VAR_9->vcpu[VAR_4].vmcb_pa;

 if (VAR_10->lastcpu != VAR_1) {



  VAR_10->asid.gen = 0;




  FUNC_20(VAR_9, VAR_4, 0xffffffff);
  VAR_10->lastcpu = VAR_1;
  FUNC_34(VAR_15, VAR_4, VAR_0, 1);
 }

 FUNC_18(VAR_9, VAR_4);


 VAR_11->rip = VAR_5;

 do {







  FUNC_4();

  if (FUNC_26(VAR_7)) {
   FUNC_5();
   FUNC_31(VAR_15, VAR_4, VAR_11->rip);
   break;
  }

  if (FUNC_23(VAR_7)) {
   FUNC_5();
   FUNC_29(VAR_15, VAR_4, VAR_11->rip);
   break;
  }

  if (FUNC_24(VAR_7)) {
   FUNC_5();
   FUNC_30(VAR_15, VAR_4, VAR_11->rip);
   break;
  }


  if (FUNC_25(VAR_15, VAR_4)) {
   FUNC_5();
   FUNC_27(VAR_15, VAR_4, VAR_11->rip);
   break;
  }

  if (FUNC_22(VAR_15, VAR_4)) {
   FUNC_5();
   FUNC_28(VAR_15, VAR_4, VAR_11->rip);
   break;
  }
  VAR_18 = FUNC_9();

  FUNC_16(VAR_9, VAR_4, VAR_14);


  FUNC_1(VAR_1, &VAR_6->pm_active);





  FUNC_3(VAR_9, VAR_4, VAR_6, VAR_1);

  VAR_12->vmcb_clean = VAR_2 & ~VAR_10->dirty;
  VAR_10->dirty = 0;
  FUNC_2(VAR_15, VAR_4, "vmcb clean %#x", VAR_12->vmcb_clean);


  FUNC_2(VAR_15, VAR_4, "Resume execution at %#lx", VAR_11->rip);
  FUNC_10(VAR_8);
  FUNC_17(VAR_16, VAR_8, FUNC_6());
  FUNC_11(VAR_8);

  FUNC_0(VAR_1, &VAR_6->pm_active);






  FUNC_8();


  FUNC_7(VAR_18);


  FUNC_5();


  VAR_10->nextrip = VAR_11->rip;


  VAR_17 = FUNC_21(VAR_9, VAR_4, VAR_13);
 } while (VAR_17);

 FUNC_19(VAR_9, VAR_4);

 return (0);
}
