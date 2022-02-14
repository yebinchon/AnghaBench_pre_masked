
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhpet {int isr; int vm; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct vhpet*,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(struct vhpet *VAR_0, int VAR_1)
{
 int VAR_2;

 if (VAR_0->isr & (1 << VAR_1)) {
  VAR_2 = FUNC_1(VAR_0, VAR_1);
  FUNC_0(VAR_2 != 0, ("vhpet timer %d irq incorrectly routed", VAR_1));
  FUNC_2(VAR_0->vm, VAR_2);
  VAR_0->isr &= ~(1 << VAR_1);
 }
}
