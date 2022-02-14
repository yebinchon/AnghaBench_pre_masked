
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_err; int sk_sleep; } ;
struct atm_vcc {int flags; int local; } ;
struct atm_qos {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (struct atm_vcc*,int ,int *,int *,int *,struct atm_qos*,int ) ;
 struct sock* FUNC_6 (struct atm_vcc*) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int VAR_6 ;

int FUNC_8(struct atm_vcc *VAR_7,struct atm_qos *VAR_8)
{
 struct sock *VAR_9 = FUNC_6(VAR_7);
 FUNC_0(VAR_6);

 FUNC_4(VAR_1, &VAR_7->flags);
 FUNC_2(VAR_9->sk_sleep, &VAR_6, VAR_3);
 FUNC_5(VAR_7,VAR_4,((void*)0),((void*)0),&VAR_7->local,VAR_8,0);
 while (FUNC_7(VAR_1, &VAR_7->flags) &&
        !FUNC_7(VAR_0, &VAR_7->flags) && VAR_5) {
  FUNC_3();
  FUNC_2(VAR_9->sk_sleep, &VAR_6, VAR_3);
 }
 FUNC_1(VAR_9->sk_sleep, &VAR_6);
 if (!VAR_5) return -VAR_2;
 return -VAR_9->sk_err;
}
