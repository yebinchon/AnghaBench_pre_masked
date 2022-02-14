
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_mqnotifier; } ;
struct mqueue_notifier {int dummy; } ;


 int FUNC_0 (int *,struct mqueue_notifier*,int ) ;
 int VAR_0 ;

__attribute__((used)) static __inline void
FUNC_1(struct proc *VAR_1, struct mqueue_notifier *VAR_2)
{
 FUNC_0(&VAR_1->p_mqnotifier, VAR_2, VAR_0);
}
