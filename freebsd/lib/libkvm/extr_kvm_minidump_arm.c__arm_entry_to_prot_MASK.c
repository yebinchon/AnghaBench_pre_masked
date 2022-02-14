
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_prot_t ;
struct TYPE_4__ {scalar_t__ mmuformat; } ;
struct vmstate {TYPE_1__ hdr; } ;
struct TYPE_5__ {struct vmstate* vmst; } ;
typedef TYPE_2__ kvm_t ;
typedef int arm_pt_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static vm_prot_t
FUNC_0(kvm_t *VAR_7, arm_pt_entry_t VAR_8)
{
 struct vmstate *VAR_9 = VAR_7->vmst;
 vm_prot_t VAR_10 = VAR_5;


 if (VAR_9->hdr.mmuformat == VAR_3) {
  if (VAR_8 & VAR_0)
   VAR_10 |= VAR_6;
  return VAR_10;
 }


 if ((VAR_8 & VAR_2) == 0)
  VAR_10 |= VAR_6;
 if ((VAR_8 & VAR_1) == 0)
  VAR_10 |= VAR_4;
 return VAR_10;
}
