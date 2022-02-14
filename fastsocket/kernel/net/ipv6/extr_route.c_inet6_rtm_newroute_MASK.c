
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct fib6_config {int dummy; } ;


 int FUNC_0 (struct fib6_config*) ;
 int FUNC_1 (struct sk_buff*,struct nlmsghdr*,struct fib6_config*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_0, struct nlmsghdr* VAR_1, void *VAR_2)
{
 struct fib6_config VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_0(&VAR_3);
}
