
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {struct sock* sk; struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct msghdr {int msg_iov; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct sk_buff*,int) ;
 struct net_device* FUNC_2 (int *,int) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_5 ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_7(struct msghdr *VAR_6, int VAR_7, struct sock *VAR_8)
{
 struct sk_buff *VAR_9;
 struct net_device *VAR_10;
 int VAR_11;


 if (!VAR_7)
  return -VAR_1;

 VAR_9 = FUNC_0(VAR_0, VAR_3);

 if (!VAR_9)
  return -VAR_2;

 VAR_11 = FUNC_5(FUNC_6(VAR_9, VAR_0), VAR_6->msg_iov, VAR_0);
 if (VAR_11 < 0) {
  FUNC_4(VAR_9);
  return VAR_11;
 }

 VAR_10 = FUNC_2(&VAR_5, VAR_7);
 if (!VAR_10) {
  FUNC_4(VAR_9);
  return -VAR_1;
 }

 VAR_9->dev = VAR_10;
 VAR_9->sk = VAR_8;
 VAR_11 = FUNC_1(VAR_9, 1);
 FUNC_3(VAR_10);

 if (VAR_11)
  return VAR_11;

 return VAR_0 + VAR_4;
}
