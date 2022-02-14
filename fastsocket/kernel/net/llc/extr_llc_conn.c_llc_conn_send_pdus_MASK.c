
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_write_queue; } ;
struct sk_buff {TYPE_1__* dev; } ;
struct llc_pdu_sn {int dummy; } ;
struct TYPE_4__ {int pdu_unack_q; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct llc_pdu_sn*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct llc_pdu_sn* FUNC_2 (struct sk_buff*) ;
 TYPE_2__* FUNC_3 (struct sock*) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_5 (int *) ;
 int FUNC_6 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_2)
{
 struct sk_buff *VAR_3;

 while ((VAR_3 = FUNC_5(&VAR_2->sk_write_queue)) != ((void*)0)) {
  struct llc_pdu_sn *VAR_4 = FUNC_2(VAR_3);

  if (FUNC_0(VAR_4) &&
      !(VAR_3->dev->flags & VAR_1)) {
   struct sk_buff *VAR_5 = FUNC_4(VAR_3, VAR_0);

   FUNC_6(&FUNC_3(VAR_2)->pdu_unack_q, VAR_3);
   if (!VAR_5)
    break;
   VAR_3 = VAR_5;
  }
  FUNC_1(VAR_3);
 }
}
