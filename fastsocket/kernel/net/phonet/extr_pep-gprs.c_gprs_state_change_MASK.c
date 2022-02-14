
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; struct gprs_dev* sk_user_data; } ;
struct net_device {int dummy; } ;
struct gprs_dev {struct net_device* dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_1)
{
 struct gprs_dev *VAR_2 = VAR_1->sk_user_data;

 if (VAR_1->sk_state == VAR_0) {
  struct net_device *VAR_3 = VAR_2->dev;

  FUNC_1(VAR_3);
  FUNC_0(VAR_3);
 }
}
