
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_dev {scalar_t__ mc_gq_running; } ;


 int FUNC_0 (struct inet6_dev*) ;
 int FUNC_1 (struct inet6_dev*,int *) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_0)
{
 struct inet6_dev *VAR_1 = (struct inet6_dev *)VAR_0;

 VAR_1->mc_gq_running = 0;
 FUNC_1(VAR_1, ((void*)0));
 FUNC_0(VAR_1);
}
