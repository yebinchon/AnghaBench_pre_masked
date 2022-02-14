
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct net {int dummy; } ;
struct fib_table {int (* tb_insert ) (struct fib_table*,struct fib_config*) ;} ;
struct fib_config {int fc_table; } ;


 int VAR_0 ;
 struct fib_table* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct net*,struct sk_buff*,struct nlmsghdr*,struct fib_config*) ;
 struct net* FUNC_2 (int ) ;
 int FUNC_3 (struct fib_table*,struct fib_config*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1, struct nlmsghdr *VAR_2, void *VAR_3)
{
 struct net *VAR_4 = FUNC_2(VAR_1->sk);
 struct fib_config VAR_5;
 struct fib_table *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_4, VAR_1, VAR_2, &VAR_5);
 if (VAR_7 < 0)
  goto errout;

 VAR_6 = FUNC_0(VAR_4, VAR_5.fc_table);
 if (VAR_6 == ((void*)0)) {
  VAR_7 = -VAR_0;
  goto errout;
 }

 VAR_7 = VAR_6->tb_insert(VAR_6, &VAR_5);
errout:
 return VAR_7;
}
