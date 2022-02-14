
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ state; struct sock* sk; } ;
struct sockaddr_atmsvc {scalar_t__ sas_family; } ;
struct sockaddr {int dummy; } ;
struct sock {int sk_err; int sk_sleep; } ;
struct atm_vcc {int flags; struct sockaddr_atmsvc local; } ;


 scalar_t__ VAR_0 ;
 struct atm_vcc* FUNC_0 (struct socket*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ VAR_14 ;
 int FUNC_9 (struct atm_vcc*,int ,int *,int *,struct sockaddr_atmsvc*) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_11(struct socket *VAR_16,struct sockaddr *VAR_17,
    int VAR_18)
{
 FUNC_1(VAR_15);
 struct sock *VAR_19 = VAR_16->sk;
 struct sockaddr_atmsvc *VAR_20;
 struct atm_vcc *VAR_21;
 int VAR_22;

 if (VAR_18 != sizeof(struct sockaddr_atmsvc))
  return -VAR_7;
 FUNC_4(VAR_19);
 if (VAR_16->state == VAR_10) {
  VAR_22 = -VAR_8;
  goto out;
 }
 if (VAR_16->state != VAR_11) {
  VAR_22 = -VAR_7;
  goto out;
 }
 VAR_21 = FUNC_0(VAR_16);
 VAR_20 = (struct sockaddr_atmsvc *) VAR_17;
 if (VAR_20->sas_family != VAR_0) {
  VAR_22 = -VAR_5;
  goto out;
 }
 FUNC_2(VAR_1,&VAR_21->flags);


 if (!FUNC_10(VAR_2,&VAR_21->flags)) {
  VAR_22 = -VAR_6;
  goto out;
 }
 VAR_21->local = *VAR_20;
 FUNC_8(VAR_4, &VAR_21->flags);
 FUNC_5(VAR_19->sk_sleep, &VAR_15, VAR_12);
 FUNC_9(VAR_21,VAR_13,((void*)0),((void*)0),&VAR_21->local);
 while (FUNC_10(VAR_4, &VAR_21->flags) && VAR_14) {
  FUNC_7();
  FUNC_5(VAR_19->sk_sleep, &VAR_15, VAR_12);
 }
 FUNC_3(VAR_19->sk_sleep, &VAR_15);
 FUNC_2(VAR_3,&VAR_21->flags);
 if (!VAR_14) {
  VAR_22 = -VAR_9;
  goto out;
 }
 if (!VAR_19->sk_err)
  FUNC_8(VAR_1,&VAR_21->flags);
 VAR_22 = -VAR_19->sk_err;
out:
 FUNC_6(VAR_19);
 return VAR_22;
}
