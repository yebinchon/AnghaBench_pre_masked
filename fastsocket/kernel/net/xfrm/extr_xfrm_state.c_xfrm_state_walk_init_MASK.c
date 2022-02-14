
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xfrm_state_walk {scalar_t__ seq; int state; int proto; int all; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

void FUNC_1(struct xfrm_state_walk *VAR_1, u8 VAR_2)
{
 FUNC_0(&VAR_1->all);
 VAR_1->proto = VAR_2;
 VAR_1->state = VAR_0;
 VAR_1->seq = 0;
}
