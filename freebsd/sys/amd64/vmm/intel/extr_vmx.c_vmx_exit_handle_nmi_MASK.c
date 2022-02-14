
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct vmx {int vm; } ;
struct TYPE_3__ {scalar_t__ exit_reason; } ;
struct TYPE_4__ {TYPE_1__ vmx; } ;
struct vm_exit {TYPE_2__ u; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static __inline void
FUNC_4(struct vmx *VAR_7, int VAR_8, struct vm_exit *VAR_9)
{
 uint32_t VAR_10;

 FUNC_0((FUNC_2() & VAR_2) == 0, ("interrupts enabled"));

 if (VAR_9->u.vmx.exit_reason != VAR_0)
  return;

 VAR_10 = FUNC_3(VAR_3);
 FUNC_0((VAR_10 & VAR_6) != 0,
     ("VM exit interruption info invalid: %#x", VAR_10));

 if ((VAR_10 & VAR_4) == VAR_5) {
  FUNC_0((VAR_10 & 0xff) == VAR_1, ("VM exit due "
      "to NMI has invalid vector: %#x", VAR_10));
  FUNC_1(VAR_7->vm, VAR_8, "Vectoring to NMI handler");
  __asm __volatile("int $2");
 }
}
