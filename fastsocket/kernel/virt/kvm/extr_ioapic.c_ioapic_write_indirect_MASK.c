
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mask; int trig_mode; int remote_irr; } ;
union kvm_ioapic_redirect_entry {int bits; TYPE_1__ fields; } ;
typedef int u64 ;
typedef int u32 ;
struct kvm_ioapic {int ioregsel; int id; int irr; int kvm; union kvm_ioapic_redirect_entry* redirtbl; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (char*,unsigned int,int) ;
 int FUNC_1 (struct kvm_ioapic*,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int,int) ;
 int FUNC_3 (struct kvm_ioapic*) ;

__attribute__((used)) static void FUNC_4(struct kvm_ioapic *VAR_3, u32 VAR_4)
{
 unsigned VAR_5;
 bool VAR_6, VAR_7;
 union kvm_ioapic_redirect_entry *VAR_8;

 switch (VAR_3->ioregsel) {
 case 128:

  break;

 case 130:
  VAR_3->id = (VAR_4 >> 24) & 0xf;
  break;

 case 129:
  break;

 default:
  VAR_5 = (VAR_3->ioregsel - 0x10) >> 1;

  FUNC_0("change redir index %x val %x\n", VAR_5, VAR_4);
  if (VAR_5 >= VAR_1)
   return;
  VAR_8 = &VAR_3->redirtbl[VAR_5];
  VAR_6 = VAR_8->fields.mask;
  if (VAR_3->ioregsel & 1) {
   VAR_8->bits &= 0xffffffff;
   VAR_8->bits |= (u64) VAR_4 << 32;
  } else {
   VAR_8->bits &= ~0xffffffffULL;
   VAR_8->bits |= (u32) VAR_4;
   VAR_8->fields.remote_irr = 0;
  }
  FUNC_3(VAR_3);
  VAR_7 = VAR_8->fields.mask;
  if (VAR_6 != VAR_7)
   FUNC_2(VAR_3->kvm, VAR_2, VAR_5, VAR_7);
  if (VAR_8->fields.trig_mode == VAR_0
      && VAR_3->irr & (1 << VAR_5))
   FUNC_1(VAR_3, VAR_5);
  break;
 }
}
