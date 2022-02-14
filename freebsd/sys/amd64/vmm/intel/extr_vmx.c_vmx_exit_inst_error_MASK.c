
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmxctx {scalar_t__ inst_fail_status; } ;
struct TYPE_3__ {scalar_t__ status; int inst_type; int exit_qualification; int exit_reason; int inst_error; } ;
struct TYPE_4__ {TYPE_1__ vmx; } ;
struct vm_exit {TYPE_2__ u; int exitcode; scalar_t__ inst_length; } ;


 int FUNC_0 (int,char*) ;



 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;

__attribute__((used)) static __inline void
FUNC_3(struct vmxctx *VAR_2, int VAR_3, struct vm_exit *VAR_4)
{

 FUNC_0(VAR_2->inst_fail_status != VAR_1,
     ("vmx_exit_inst_error: invalid inst_fail_status %d",
     VAR_2->inst_fail_status));

 VAR_4->inst_length = 0;
 VAR_4->exitcode = VAR_0;
 VAR_4->u.vmx.status = VAR_2->inst_fail_status;
 VAR_4->u.vmx.inst_error = FUNC_2();
 VAR_4->u.vmx.exit_reason = ~0;
 VAR_4->u.vmx.exit_qualification = ~0;

 switch (VAR_3) {
 case 128:
 case 129:
 case 130:
  VAR_4->u.vmx.inst_type = VAR_3;
  break;
 default:
  FUNC_1("vm_exit_inst_error: vmx_enter_guest returned %d", VAR_3);
 }
}
