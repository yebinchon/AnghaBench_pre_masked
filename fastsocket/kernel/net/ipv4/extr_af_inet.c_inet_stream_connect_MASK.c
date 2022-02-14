
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int state; struct sock* sk; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct sock {int sk_state; TYPE_1__* sk_prot; } ;
struct TYPE_2__ {int (* disconnect ) (struct sock*,int) ;int (* connect ) (struct sock*,struct sockaddr*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;

 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct sock*,long) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct sock*) ;
 int FUNC_5 (long) ;
 long FUNC_6 (struct sock*,int) ;
 int FUNC_7 (struct sock*,int) ;
 int FUNC_8 (struct sock*,struct sockaddr*,int) ;
 int FUNC_9 (struct sock*,int) ;

int FUNC_10(struct socket *VAR_12, struct sockaddr *VAR_13,
   int VAR_14, int VAR_15)
{
 struct sock *VAR_16 = VAR_12->sk;
 int VAR_17;
 long VAR_18;

 FUNC_1(VAR_16);

 if (VAR_13->sa_family == VAR_0) {
  VAR_17 = VAR_16->sk_prot->disconnect(VAR_16, VAR_15);
  VAR_12->state = VAR_17 ? VAR_7 : 128;
  goto out;
 }

 switch (VAR_12->state) {
 default:
  VAR_17 = -VAR_4;
  goto out;
 case 130:
  VAR_17 = -VAR_5;
  goto out;
 case 129:
  VAR_17 = -VAR_1;

  break;
 case 128:
  VAR_17 = -VAR_5;
  if (VAR_16->sk_state != VAR_10)
   goto out;

  VAR_17 = VAR_16->sk_prot->connect(VAR_16, VAR_13, VAR_14);
  if (VAR_17 < 0)
   goto out;

  VAR_12->state = 129;





  VAR_17 = -VAR_3;
  break;
 }

 VAR_18 = FUNC_6(VAR_16, VAR_15 & VAR_6);

 if ((1 << VAR_16->sk_state) & (VAR_9 | VAR_8)) {

  if (!VAR_18 || !FUNC_0(VAR_16, VAR_18))
   goto out;

  VAR_17 = FUNC_5(VAR_18);
  if (FUNC_3(VAR_11))
   goto out;
 }




 if (VAR_16->sk_state == VAR_10)
  goto sock_error;






 VAR_12->state = 130;
 VAR_17 = 0;
out:
 FUNC_2(VAR_16);
 return VAR_17;

sock_error:
 VAR_17 = FUNC_4(VAR_16) ? : -VAR_2;
 VAR_12->state = 128;
 if (VAR_16->sk_prot->disconnect(VAR_16, VAR_15))
  VAR_12->state = VAR_7;
 goto out;
}
