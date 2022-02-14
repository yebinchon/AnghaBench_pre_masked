
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netns_frags {scalar_t__ low_thresh; } ;
struct inet_frags {int dummy; } ;


 int FUNC_0 (struct netns_frags*,struct inet_frags*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3(struct netns_frags *VAR_0, struct inet_frags *VAR_1)
{
 VAR_0->low_thresh = 0;

 FUNC_1();
 FUNC_0(VAR_0, VAR_1);
 FUNC_2();
}
