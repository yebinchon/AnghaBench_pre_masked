
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int (* notifier_call ) (struct notifier_block*,int ,struct ifnet*) ;} ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct notifier_block*,int ,struct ifnet*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1, struct ifnet *VAR_2)
{
 struct notifier_block *VAR_3;

 VAR_3 = VAR_1;
 VAR_3->notifier_call(VAR_3, VAR_0, VAR_2);
}
