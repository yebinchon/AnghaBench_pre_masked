
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {struct gprs_dev* sk_user_data; } ;
struct gprs_dev {int dev; } ;


 int FUNC_0 (struct gprs_dev*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_0)
{
 struct gprs_dev *VAR_1 = VAR_0->sk_user_data;

 if (FUNC_1(VAR_1->dev))
  FUNC_0(VAR_1);
}
