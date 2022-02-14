
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int items; int lock; } ;
struct kvm {int ioeventfds; TYPE_1__ irqfds; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct kvm *VAR_0)
{
 FUNC_1(&VAR_0->irqfds.lock);
 FUNC_0(&VAR_0->irqfds.items);
 FUNC_0(&VAR_0->ioeventfds);
}
