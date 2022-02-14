
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr_can {int can_ifindex; } ;
struct sockaddr {int dummy; } ;
struct sock {int (* sk_error_report ) (struct sock*) ;int sk_err; } ;
struct raw_sock {int bound; int ifindex; } ;
struct net_device {scalar_t__ type; int flags; int ifindex; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct net_device* FUNC_0 (int *,int) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_6 ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct net_device*,struct sock*) ;
 int FUNC_4 (struct net_device*,struct sock*) ;
 struct raw_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,int ) ;
 int FUNC_8 (struct sock*) ;

__attribute__((used)) static int FUNC_9(struct socket *VAR_7, struct sockaddr *VAR_8, int VAR_9)
{
 struct sockaddr_can *VAR_10 = (struct sockaddr_can *)VAR_8;
 struct sock *VAR_11 = VAR_7->sk;
 struct raw_sock *VAR_12 = FUNC_5(VAR_11);
 int VAR_13;
 int VAR_14 = 0;
 int VAR_15 = 0;

 if (VAR_9 < sizeof(*VAR_10))
  return -VAR_1;

 FUNC_2(VAR_11);

 if (VAR_12->bound && VAR_10->can_ifindex == VAR_12->ifindex)
  goto out;

 if (VAR_10->can_ifindex) {
  struct net_device *VAR_16;

  VAR_16 = FUNC_0(&VAR_6, VAR_10->can_ifindex);
  if (!VAR_16) {
   VAR_14 = -VAR_3;
   goto out;
  }
  if (VAR_16->type != VAR_0) {
   FUNC_1(VAR_16);
   VAR_14 = -VAR_3;
   goto out;
  }
  if (!(VAR_16->flags & VAR_4))
   VAR_15 = 1;

  VAR_13 = VAR_16->ifindex;


  VAR_14 = FUNC_4(VAR_16, VAR_11);
  FUNC_1(VAR_16);
 } else {
  VAR_13 = 0;


  VAR_14 = FUNC_4(((void*)0), VAR_11);
 }

 if (!VAR_14) {
  if (VAR_12->bound) {

   if (VAR_12->ifindex) {
    struct net_device *VAR_17;

    VAR_17 = FUNC_0(&VAR_6, VAR_12->ifindex);
    if (VAR_17) {
     FUNC_3(VAR_17, VAR_11);
     FUNC_1(VAR_17);
    }
   } else
    FUNC_3(((void*)0), VAR_11);
  }
  VAR_12->ifindex = VAR_13;
  VAR_12->bound = 1;
 }

 out:
 FUNC_6(VAR_11);

 if (VAR_15) {
  VAR_11->sk_err = VAR_2;
  if (!FUNC_7(VAR_11, VAR_5))
   VAR_11->sk_error_report(VAR_11);
 }

 return VAR_14;
}
