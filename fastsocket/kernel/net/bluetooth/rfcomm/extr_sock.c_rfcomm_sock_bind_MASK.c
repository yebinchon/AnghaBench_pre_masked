
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_rc {scalar_t__ rc_channel; int rc_bdaddr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct sock {scalar_t__ sk_state; scalar_t__ sk_type; } ;
struct TYPE_6__ {int src; } ;
struct TYPE_5__ {scalar_t__ channel; } ;
struct TYPE_4__ {int lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,struct sock*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 TYPE_2__* FUNC_7 (struct sock*) ;
 TYPE_1__ VAR_7 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct socket *VAR_8, struct sockaddr *VAR_9, int VAR_10)
{
 struct sockaddr_rc *VAR_11 = (struct sockaddr_rc *) VAR_9;
 struct sock *VAR_12 = VAR_8->sk;
 int VAR_13 = 0;

 FUNC_0("sk %p %s", VAR_12, FUNC_3(&VAR_11->rc_bdaddr));

 if (!VAR_9 || VAR_9->sa_family != VAR_0)
  return -VAR_5;

 FUNC_5(VAR_12);

 if (VAR_12->sk_state != VAR_2) {
  VAR_13 = -VAR_4;
  goto done;
 }

 if (VAR_12->sk_type != VAR_6) {
  VAR_13 = -VAR_5;
  goto done;
 }

 FUNC_8(&VAR_7.lock);

 if (VAR_11->rc_channel && FUNC_1(VAR_11->rc_channel, &VAR_11->rc_bdaddr)) {
  VAR_13 = -VAR_3;
 } else {

  FUNC_2(&FUNC_4(VAR_12)->src, &VAR_11->rc_bdaddr);
  FUNC_7(VAR_12)->channel = VAR_11->rc_channel;
  VAR_12->sk_state = VAR_1;
 }

 FUNC_9(&VAR_7.lock);

done:
 FUNC_6(VAR_12);
 return VAR_13;
}
