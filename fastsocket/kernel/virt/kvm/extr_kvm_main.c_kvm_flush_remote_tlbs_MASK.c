
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int remote_tlb_flush; } ;
struct kvm {TYPE_1__ stat; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kvm*,int ) ;

void FUNC_1(struct kvm *VAR_1)
{
 if (FUNC_0(VAR_1, VAR_0))
  ++VAR_1->stat.remote_tlb_flush;
}
