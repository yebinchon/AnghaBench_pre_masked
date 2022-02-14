
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rd_frame {int caddr; } ;
struct irlap_cb {int caddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct irlap_cb*,struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int) ;

void FUNC_3(struct irlap_cb *VAR_3)
{
 struct sk_buff *VAR_4;
 struct rd_frame *VAR_5;

 VAR_4 = FUNC_0(sizeof(struct rd_frame), VAR_0);
 if (!VAR_4)
  return;

 VAR_5 = (struct rd_frame *)FUNC_2(VAR_4, 2);

 VAR_5->caddr = VAR_3->caddr;
 VAR_5->caddr = VAR_2 | VAR_1;

 FUNC_1(VAR_3, VAR_4);
}
