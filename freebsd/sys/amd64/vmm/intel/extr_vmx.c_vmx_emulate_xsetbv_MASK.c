
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct xsave_limits {int xcr0_allowed; int xsave_enabled; } ;
struct vmxctx {scalar_t__ guest_rcx; int guest_rdx; int guest_rax; } ;
struct vmx {int vm; struct vmxctx* ctx; } ;
struct vm_exit {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 struct xsave_limits* FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(struct vmx *VAR_9, int VAR_10, struct vm_exit *VAR_11)
{
 struct vmxctx *VAR_12;
 uint64_t VAR_13;
 const struct xsave_limits *VAR_14;

 VAR_12 = &VAR_9->ctx[VAR_10];
 VAR_14 = FUNC_4();
 if (VAR_12->guest_rcx != 0) {
  FUNC_1(VAR_9->vm, VAR_10);
  return (VAR_1);
 }


 if (!VAR_14->xsave_enabled || !(FUNC_3(VAR_2) & VAR_0)) {
  FUNC_2(VAR_9->vm, VAR_10);
  return (VAR_1);
 }

 VAR_13 = VAR_12->guest_rdx << 32 | (VAR_12->guest_rax & 0xffffffff);
 if ((VAR_13 & ~VAR_14->xcr0_allowed) != 0) {
  FUNC_1(VAR_9->vm, VAR_10);
  return (VAR_1);
 }

 if (!(VAR_13 & VAR_8)) {
  FUNC_1(VAR_9->vm, VAR_10);
  return (VAR_1);
 }


 if (VAR_13 & VAR_5 &&
     (VAR_13 & VAR_3) != VAR_3) {
  FUNC_1(VAR_9->vm, VAR_10);
  return (VAR_1);
 }





 if (VAR_13 & VAR_4 &&
     (VAR_13 & (VAR_4 | VAR_3)) !=
     (VAR_4 | VAR_3)) {
  FUNC_1(VAR_9->vm, VAR_10);
  return (VAR_1);
 }





 if (((VAR_13 & VAR_7) != 0) !=
     ((VAR_13 & VAR_6) != 0)) {
  FUNC_1(VAR_9->vm, VAR_10);
  return (VAR_1);
 }






 FUNC_0(0, VAR_13);
 return (VAR_1);
}
