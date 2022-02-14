
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rr_frame {int control; int caddr; } ;
struct irlap_cb {int vr; int caddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct irlap_cb*,struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int) ;

void FUNC_3(struct irlap_cb *VAR_4, int VAR_5)
{
 struct sk_buff *VAR_6;
 struct rr_frame *VAR_7;

 VAR_6 = FUNC_0(sizeof(struct rr_frame), VAR_1);
 if (!VAR_6)
  return;

 VAR_7 = (struct rr_frame *)FUNC_2(VAR_6, 2);

 VAR_7->caddr = VAR_4->caddr;
 VAR_7->caddr |= (VAR_5) ? VAR_0 : 0;

 VAR_7->control = VAR_3 | VAR_2 | (VAR_4->vr << 5);

 FUNC_1(VAR_4, VAR_6);
}
