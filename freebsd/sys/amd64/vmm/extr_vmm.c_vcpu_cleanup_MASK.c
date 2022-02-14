
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int cookie; struct vcpu* vcpu; } ;
struct vcpu {int guestfpu; int stats; int vlapic; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct vm *VAR_0, int VAR_1, bool VAR_2)
{
 struct vcpu *VAR_3 = &VAR_0->vcpu[VAR_1];

 FUNC_0(VAR_0->cookie, VAR_3->vlapic);
 if (VAR_2) {
  FUNC_2(VAR_3->stats);
  FUNC_1(VAR_3->guestfpu);
 }
}
