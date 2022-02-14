
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_max_ack_backlog; int sk_err; int sk_sleep; } ;
struct atm_vcc {int flags; int local; } ;


 int VAR_0 ;
 struct atm_vcc* FUNC_0 (struct socket*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (char*,struct atm_vcc*) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (struct atm_vcc*,int ,int *,int *,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (struct sock*) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_12(struct socket *VAR_11,int VAR_12)
{
 FUNC_1(VAR_10);
 struct sock *VAR_13 = VAR_11->sk;
 struct atm_vcc *VAR_14 = FUNC_0(VAR_11);
 int VAR_15;

 FUNC_4("svc_listen %p\n",VAR_14);
 FUNC_3(VAR_13);

 if (FUNC_10(VAR_2,&VAR_14->flags)) {
  VAR_15 = -VAR_5;
  goto out;
 }
 if (FUNC_10(VAR_1, &VAR_14->flags)) {
  VAR_15 = -VAR_4;
  goto out;
        }
 FUNC_8(VAR_3, &VAR_14->flags);
 FUNC_5(VAR_13->sk_sleep, &VAR_10, VAR_7);
 FUNC_9(VAR_14,VAR_8,((void*)0),((void*)0),&VAR_14->local);
 while (FUNC_10(VAR_3, &VAR_14->flags) && VAR_9) {
  FUNC_7();
  FUNC_5(VAR_13->sk_sleep, &VAR_10, VAR_7);
 }
 FUNC_2(VAR_13->sk_sleep, &VAR_10);
 if (!VAR_9) {
  VAR_15 = -VAR_6;
  goto out;
 }
 FUNC_8(VAR_1,&VAR_14->flags);
 FUNC_11(VAR_13);
 VAR_13->sk_max_ack_backlog = VAR_12 > 0 ? VAR_12 : VAR_0;
 VAR_15 = -VAR_13->sk_err;
out:
 FUNC_6(VAR_13);
 return VAR_15;
}
