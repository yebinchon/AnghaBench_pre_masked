
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct llc_sock {int inc_cntr; int dec_cntr; scalar_t__ npta; scalar_t__ dec_step; } ;


 scalar_t__ VAR_0 ;
 struct llc_sock* FUNC_0 (struct sock*) ;

__attribute__((used)) static int FUNC_1(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 struct llc_sock *VAR_3 = FUNC_0(VAR_1);

 if (!VAR_3->inc_cntr) {
  VAR_3->dec_step = 0;
  VAR_3->dec_cntr = VAR_3->inc_cntr = 2;
  ++VAR_3->npta;
  if (VAR_3->npta > (u8) ~VAR_0)
   VAR_3->npta = (u8) ~VAR_0;
 } else
  --VAR_3->inc_cntr;
 return 0;
}
