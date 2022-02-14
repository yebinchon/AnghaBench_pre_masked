
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct netlink_notify {scalar_t__ protocol; scalar_t__ pid; int * net; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct notifier_block *VAR_6,
   unsigned long VAR_7, void *VAR_8)
{
 struct netlink_notify *VAR_9 = VAR_8;

 if (VAR_7 == VAR_1 &&
     VAR_9->protocol == VAR_0 && VAR_9->pid) {
  FUNC_1(&VAR_5);
  if ((VAR_9->net == &VAR_3) && (VAR_9->pid == VAR_4))
   FUNC_0();
  FUNC_2(&VAR_5);
 }
 return VAR_2;
}
