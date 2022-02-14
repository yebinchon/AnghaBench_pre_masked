
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct llc_sock {int dec_cntr; int inc_cntr; scalar_t__ npta; scalar_t__ connect_step; int dec_step; int remote_busy_flag; } ;


 struct llc_sock* FUNC_0 (struct sock*) ;

int FUNC_1(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 struct llc_sock *VAR_2 = FUNC_0(VAR_0);

 if (!VAR_2->connect_step && !VAR_2->remote_busy_flag) {
  if (!VAR_2->dec_step) {
   if (!VAR_2->dec_cntr) {
    VAR_2->inc_cntr = VAR_2->dec_cntr = 2;
    if (VAR_2->npta > 0)
     VAR_2->npta = VAR_2->npta - 1;
   } else
    VAR_2->dec_cntr -=1;
  }
 } else
  VAR_2->connect_step = 0 ;
 return 0;
}
