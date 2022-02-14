
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr_can {scalar_t__ can_ifindex; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct net_device {scalar_t__ type; scalar_t__ ifindex; } ;
struct bcm_sock {int bound; int procname; int bcm_proc_read; scalar_t__ ifindex; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bcm_sock* FUNC_0 (struct sock*) ;
 struct net_device* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_3 (int ,int,scalar_t__,int *,struct sock*) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_6(struct socket *VAR_6, struct sockaddr *VAR_7, int VAR_8,
         int VAR_9)
{
 struct sockaddr_can *VAR_10 = (struct sockaddr_can *)VAR_7;
 struct sock *VAR_11 = VAR_6->sk;
 struct bcm_sock *VAR_12 = FUNC_0(VAR_11);

 if (VAR_12->bound)
  return -VAR_1;


 if (VAR_10->can_ifindex) {
  struct net_device *VAR_13;

  VAR_13 = FUNC_1(&VAR_4, VAR_10->can_ifindex);
  if (!VAR_13)
   return -VAR_2;

  if (VAR_13->type != VAR_0) {
   FUNC_2(VAR_13);
   return -VAR_2;
  }

  VAR_12->ifindex = VAR_13->ifindex;
  FUNC_2(VAR_13);

 } else {

  VAR_12->ifindex = 0;
 }

 VAR_12->bound = 1;

 if (VAR_5) {

  FUNC_5(VAR_12->procname, "%lu", FUNC_4(VAR_11));
  VAR_12->bcm_proc_read = FUNC_3(VAR_12->procname, 0644,
           VAR_5,
           &VAR_3, VAR_11);
 }

 return 0;
}
