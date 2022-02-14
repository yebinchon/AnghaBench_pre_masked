
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int (* sk_data_ready ) (struct sock*,int) ;void* sk_state; int (* sk_state_change ) (struct sock*) ;} ;
struct sco_conn {int hcon; int dst; int src; struct sock* sk; } ;
struct TYPE_2__ {int dst; int src; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (char*,struct sco_conn*) ;
 int VAR_2 ;
 int FUNC_1 (struct sco_conn*,struct sock*,struct sock*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 TYPE_1__* FUNC_5 (struct sock*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sco_conn*) ;
 int FUNC_8 (struct sco_conn*) ;
 struct sock* FUNC_9 (int ) ;
 struct sock* FUNC_10 (int ,int *,int ,int ) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*,struct sock*) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sock*,int) ;

__attribute__((used)) static void FUNC_16(struct sco_conn *VAR_3)
{
 struct sock *VAR_4, *VAR_5;

 FUNC_0("conn %p", VAR_3);

 FUNC_7(VAR_3);

 if ((VAR_5 = VAR_3->sk)) {
  FUNC_11(VAR_5);
  FUNC_3(VAR_5);
  VAR_5->sk_state = VAR_1;
  VAR_5->sk_state_change(VAR_5);
  FUNC_4(VAR_5);
 } else {
  VAR_4 = FUNC_9(VAR_3->src);
  if (!VAR_4)
   goto done;

  FUNC_3(VAR_4);

  VAR_5 = FUNC_10(FUNC_13(VAR_4), ((void*)0), VAR_0, VAR_2);
  if (!VAR_5) {
   FUNC_4(VAR_4);
   goto done;
  }

  FUNC_12(VAR_5, VAR_4);

  FUNC_2(&FUNC_5(VAR_5)->src, VAR_3->src);
  FUNC_2(&FUNC_5(VAR_5)->dst, VAR_3->dst);

  FUNC_6(VAR_3->hcon);
  FUNC_1(VAR_3, VAR_5, VAR_4);

  VAR_5->sk_state = VAR_1;


  VAR_4->sk_data_ready(VAR_4, 1);

  FUNC_4(VAR_4);
 }

done:
 FUNC_8(VAR_3);
}
