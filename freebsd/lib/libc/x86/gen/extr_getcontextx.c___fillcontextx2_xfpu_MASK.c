
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* addr; void* len; } ;
typedef TYPE_2__ x86_get_xfpustate_t ;
struct TYPE_5__ {int mc_flags; void* mc_xfpustate_len; scalar_t__ mc_xfpustate; } ;
struct TYPE_7__ {TYPE_1__ uc_mcontext; } ;
typedef TYPE_3__ ucontext_t ;
typedef scalar_t__ __register_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 void* VAR_2 ;

__attribute__((used)) static int
FUNC_1(char *VAR_3)
{
 x86_get_xfpustate_t VAR_4;
 ucontext_t *VAR_5;

 VAR_5 = (ucontext_t *)VAR_3;
 VAR_4.addr = (char *)(VAR_5 + 1);
 VAR_4.len = VAR_2;
 if (FUNC_0(VAR_0, &VAR_4) == -1)
  return (-1);
 VAR_5->uc_mcontext.mc_xfpustate = (__register_t)VAR_4.addr;
 VAR_5->uc_mcontext.mc_xfpustate_len = VAR_2;
 VAR_5->uc_mcontext.mc_flags |= VAR_1;
 return (0);
}
