
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int maxcpus; int cookie; struct vcpu* vcpu; } ;
struct vcpu {int stats; int guestfpu; int guest_xcr0; scalar_t__ exception_pending; scalar_t__ extint_pending; scalar_t__ nmi_pending; scalar_t__ exitintinfo; scalar_t__ reqidle; int vlapic; int hostcpu; int state; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct vcpu*) ;
 int FUNC_5 (struct vcpu*) ;
 int FUNC_6 (struct vm*,int,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct vm *VAR_4, int VAR_5, bool VAR_6)
{
 struct vcpu *VAR_7;

 FUNC_0(VAR_5 >= 0 && VAR_5 < VAR_4->maxcpus,
     ("vcpu_init: invalid vcpu %d", VAR_5));

 VAR_7 = &VAR_4->vcpu[VAR_5];

 if (VAR_6) {
  FUNC_0(!FUNC_5(VAR_7), ("vcpu %d already "
      "initialized", VAR_5));
  FUNC_4(VAR_7);
  VAR_7->state = VAR_1;
  VAR_7->hostcpu = VAR_0;
  VAR_7->guestfpu = FUNC_2();
  VAR_7->stats = FUNC_7();
 }

 VAR_7->vlapic = FUNC_1(VAR_4->cookie, VAR_5);
 FUNC_6(VAR_4, VAR_5, VAR_2);
 VAR_7->reqidle = 0;
 VAR_7->exitintinfo = 0;
 VAR_7->nmi_pending = 0;
 VAR_7->extint_pending = 0;
 VAR_7->exception_pending = 0;
 VAR_7->guest_xcr0 = VAR_3;
 FUNC_3(VAR_7->guestfpu);
 FUNC_8(VAR_7->stats);
}
