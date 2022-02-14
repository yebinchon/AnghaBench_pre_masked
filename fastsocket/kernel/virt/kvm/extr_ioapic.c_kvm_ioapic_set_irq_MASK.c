
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int polarity; scalar_t__ trig_mode; int remote_irr; } ;
union kvm_ioapic_redirect_entry {int bits; TYPE_1__ fields; } ;
typedef scalar_t__ u32 ;
struct kvm_ioapic {scalar_t__ irr; int lock; union kvm_ioapic_redirect_entry* redirtbl; int * irq_states; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (struct kvm_ioapic*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,int) ;

int FUNC_5(struct kvm_ioapic *VAR_2, int VAR_3, int VAR_4,
         int VAR_5)
{
 u32 VAR_6;
 u32 VAR_7 = 1 << VAR_3;
 union kvm_ioapic_redirect_entry VAR_8;
 int VAR_9 = 1;

 FUNC_2(&VAR_2->lock);
 VAR_6 = VAR_2->irr;
 if (VAR_3 >= 0 && VAR_3 < VAR_1) {
  int VAR_10 = FUNC_0(&VAR_2->irq_states[VAR_3],
           VAR_4, VAR_5);
  VAR_8 = VAR_2->redirtbl[VAR_3];
  VAR_10 ^= VAR_8.fields.polarity;
  if (!VAR_10)
   VAR_2->irr &= ~VAR_7;
  else {
   int VAR_11 = (VAR_8.fields.trig_mode == VAR_0);
   VAR_2->irr |= VAR_7;
   if ((VAR_11 && VAR_6 != VAR_2->irr) ||
       (!VAR_11 && !VAR_8.fields.remote_irr))
    VAR_9 = FUNC_1(VAR_2, VAR_3);
   else
    VAR_9 = 0;
  }
  FUNC_4(VAR_8.bits, VAR_3, VAR_9 == 0);
 }
 FUNC_3(&VAR_2->lock);

 return VAR_9;
}
