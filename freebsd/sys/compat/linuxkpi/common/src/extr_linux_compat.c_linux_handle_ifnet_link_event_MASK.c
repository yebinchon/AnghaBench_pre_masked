
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int (* notifier_call ) (struct notifier_block*,int ,struct ifnet*) ;} ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct notifier_block*,int ,struct ifnet*) ;
 int FUNC_1 (struct notifier_block*,int ,struct ifnet*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_3, struct ifnet *VAR_4, int VAR_5)
{
 struct notifier_block *VAR_6;

 VAR_6 = VAR_3;
 if (VAR_5 == VAR_0)
  VAR_6->notifier_call(VAR_6, VAR_2, VAR_4);
 else
  VAR_6->notifier_call(VAR_6, VAR_1, VAR_4);
}
