
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_sco {int sco_bdaddr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct sock {scalar_t__ sk_state; } ;
typedef int bdaddr_t ;
struct TYPE_4__ {int src; } ;
struct TYPE_3__ {int lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,struct sock*,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 TYPE_1__ VAR_7 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct socket *VAR_8, struct sockaddr *VAR_9, int VAR_10)
{
 struct sockaddr_sco *VAR_11 = (struct sockaddr_sco *) VAR_9;
 struct sock *VAR_12 = VAR_8->sk;
 bdaddr_t *VAR_13 = &VAR_11->sco_bdaddr;
 int VAR_14 = 0;

 FUNC_0("sk %p %s", VAR_12, FUNC_4(&VAR_11->sco_bdaddr));

 if (!VAR_9 || VAR_9->sa_family != VAR_0)
  return -VAR_6;

 FUNC_6(VAR_12);

 if (VAR_12->sk_state != VAR_3) {
  VAR_14 = -VAR_5;
  goto done;
 }

 FUNC_8(&VAR_7.lock);

 if (FUNC_2(VAR_13, VAR_1) && FUNC_1(VAR_13)) {
  VAR_14 = -VAR_4;
 } else {

  FUNC_3(&FUNC_5(VAR_12)->src, &VAR_11->sco_bdaddr);
  VAR_12->sk_state = VAR_2;
 }

 FUNC_9(&VAR_7.lock);

done:
 FUNC_7(VAR_12);
 return VAR_14;
}
