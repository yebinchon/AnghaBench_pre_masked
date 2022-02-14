
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int (* sk_state_change ) (struct sock*) ;} ;
struct sk_buff {int dummy; } ;
struct dn_scp {unsigned short ackrcv_dat; unsigned short ackrcv_oth; int other_xmit_queue; int data_xmit_queue; } ;


 struct dn_scp* FUNC_0 (struct sock*) ;
 int VAR_0 ;
 int FUNC_1 (unsigned short,unsigned short) ;
 int FUNC_2 (struct sock*,struct sk_buff*,int *,unsigned short) ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_1, struct sk_buff *VAR_2, unsigned short VAR_3)
{
 struct dn_scp *VAR_4 = FUNC_0(VAR_1);
 unsigned short VAR_5 = ((VAR_3 >> 12) & 0x0003);
 int VAR_6 = 0;

 switch(VAR_5) {
  case 0:
   if (FUNC_1(VAR_3, VAR_4->ackrcv_dat)) {
    VAR_4->ackrcv_dat = VAR_3 & 0x0fff;
    VAR_6 |= FUNC_2(VAR_1, VAR_2, &VAR_4->data_xmit_queue, VAR_3);
   }
   break;
  case 1:
   break;
  case 2:
   if (FUNC_1(VAR_3, VAR_4->ackrcv_oth)) {
    VAR_4->ackrcv_oth = VAR_3 & 0x0fff;
    VAR_6 |= FUNC_2(VAR_1, VAR_2, &VAR_4->other_xmit_queue, VAR_3);
   }
   break;
  case 3:
   break;
 }

 if (VAR_6 && !FUNC_3(VAR_1, VAR_0))
  VAR_1->sk_state_change(VAR_1);
}
