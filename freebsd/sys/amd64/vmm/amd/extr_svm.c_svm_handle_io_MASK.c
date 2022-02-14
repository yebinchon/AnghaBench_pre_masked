
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct vmcb_state {int cr0; int rflags; scalar_t__ rax; } ;
struct vmcb_ctrl {int exitinfo1; } ;
struct vm_inout_str {int addrsize; int count; int index; int cr0; int rflags; int paging; } ;
struct TYPE_3__ {int in; int string; int rep; int bytes; scalar_t__ eax; scalar_t__ port; } ;
struct TYPE_4__ {TYPE_1__ inout; struct vm_inout_str inout_str; } ;
struct vm_exit {TYPE_2__ u; int exitcode; } ;
struct svm_softc {int dummy; } ;
struct svm_regctx {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 struct svm_regctx* FUNC_2 (struct svm_softc*,int) ;
 int FUNC_3 (struct svm_softc*,int) ;
 struct vmcb_ctrl* FUNC_4 (struct svm_softc*,int) ;
 struct vmcb_state* FUNC_5 (struct svm_softc*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct svm_regctx*,int) ;
 int FUNC_8 (struct svm_regctx*,int) ;
 int FUNC_9 (struct svm_softc*,int,int,int,struct vm_inout_str*) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static int
FUNC_11(struct svm_softc *VAR_3, int VAR_4, struct vm_exit *VAR_5)
{
 struct vmcb_ctrl *VAR_6;
 struct vmcb_state *VAR_7;
 struct svm_regctx *VAR_8;
 struct vm_inout_str *VAR_9;
 uint64_t VAR_10;
 int VAR_11;

 VAR_7 = FUNC_5(VAR_3, VAR_4);
 VAR_6 = FUNC_4(VAR_3, VAR_4);
 VAR_8 = FUNC_2(VAR_3, VAR_4);

 VAR_10 = VAR_6->exitinfo1;
 VAR_11 = VAR_10 & FUNC_0(2) ? 1 : 0;
 if (VAR_11 && !FUNC_1())
  return (VAR_0);

 VAR_5->exitcode = VAR_1;
 VAR_5->u.inout.in = (VAR_10 & FUNC_0(0)) ? 1 : 0;
 VAR_5->u.inout.string = VAR_11;
 VAR_5->u.inout.rep = (VAR_10 & FUNC_0(3)) ? 1 : 0;
 VAR_5->u.inout.bytes = (VAR_10 >> 4) & 0x7;
 VAR_5->u.inout.port = (uint16_t)(VAR_10 >> 16);
 VAR_5->u.inout.eax = (uint32_t)(VAR_7->rax);

 if (VAR_11) {
  VAR_5->exitcode = VAR_2;
  VAR_9 = &VAR_5->u.inout_str;
  FUNC_10(FUNC_3(VAR_3, VAR_4), &VAR_9->paging);
  VAR_9->rflags = VAR_7->rflags;
  VAR_9->cr0 = VAR_7->cr0;
  VAR_9->index = FUNC_8(VAR_8, VAR_5->u.inout.in);
  VAR_9->count = FUNC_7(VAR_8, VAR_5->u.inout.rep);
  VAR_9->addrsize = FUNC_6(VAR_10);
  FUNC_9(VAR_3, VAR_4, VAR_10,
      VAR_5->u.inout.in, VAR_9);
 }

 return (VAR_0);
}
