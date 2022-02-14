
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_receive_queue; int sk_sleep; } ;
struct sk_buff {int truesize; } ;
struct atm_vcc {int flags; int qos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct atm_vcc*,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 () ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (struct atm_vcc*,int ,int *,int *,int *) ;
 int FUNC_9 (int *,int ,struct atm_vcc*,int *,int *,int *,int ) ;
 struct sock* FUNC_10 (struct atm_vcc*) ;
 struct sk_buff* FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_13(struct atm_vcc *VAR_7)
{
 FUNC_0(VAR_6);
 struct sk_buff *VAR_8;
 struct sock *VAR_9 = FUNC_10(VAR_7);

 FUNC_5("svc_disconnect %p\n",VAR_7);
 if (FUNC_12(VAR_0,&VAR_7->flags)) {
  FUNC_6(VAR_9->sk_sleep, &VAR_6, VAR_2);
  FUNC_8(VAR_7,VAR_3,((void*)0),((void*)0),((void*)0));
  while (!FUNC_12(VAR_1,&VAR_7->flags) && VAR_5) {
   FUNC_7();
   FUNC_6(VAR_9->sk_sleep, &VAR_6, VAR_2);
  }
  FUNC_4(VAR_9->sk_sleep, &VAR_6);
 }


 while ((VAR_8 = FUNC_11(&VAR_9->sk_receive_queue)) != ((void*)0)) {
  FUNC_1(VAR_7, VAR_8->truesize);
  FUNC_5("LISTEN REL\n");
  FUNC_9(((void*)0),VAR_4,VAR_7,((void*)0),((void*)0),&VAR_7->qos,0);
  FUNC_3(VAR_8);
 }
 FUNC_2(VAR_0, &VAR_7->flags);

}
