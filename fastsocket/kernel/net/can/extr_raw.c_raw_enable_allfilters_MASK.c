
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct raw_sock {int count; int filter; int err_mask; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,struct sock*,int ,int ) ;
 int FUNC_1 (struct net_device*,struct sock*,int ) ;
 int FUNC_2 (struct net_device*,struct sock*,int ,int ) ;
 struct raw_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0, struct sock *VAR_1)
{
 struct raw_sock *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2->filter, VAR_2->count);
 if (!VAR_3) {
  VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2->err_mask);
  if (VAR_3)
   FUNC_0(VAR_0, VAR_1, VAR_2->filter, VAR_2->count);
 }

 return VAR_3;
}
