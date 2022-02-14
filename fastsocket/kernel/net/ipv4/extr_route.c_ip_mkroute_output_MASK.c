
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtable {int dummy; } ;
struct net_device {int dummy; } ;
struct flowi {int oif; int fl4_src; int fl4_dst; } ;
struct fib_result {int dummy; } ;


 int FUNC_0 (struct rtable**,struct fib_result*,struct flowi const*,struct flowi const*,struct net_device*,unsigned int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (unsigned int,struct rtable*,struct rtable**,int *) ;

__attribute__((used)) static int FUNC_5(struct rtable **VAR_0,
        struct fib_result *VAR_1,
        const struct flowi *VAR_2,
        const struct flowi *VAR_3,
        struct net_device *VAR_4,
        unsigned VAR_5)
{
 struct rtable *VAR_6 = ((void*)0);
 int VAR_7 = FUNC_0(&VAR_6, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 unsigned VAR_8;
 if (VAR_7 == 0) {
  VAR_8 = FUNC_3(VAR_3->fl4_dst, VAR_3->fl4_src, VAR_3->oif,
          FUNC_2(FUNC_1(VAR_4)));
  VAR_7 = FUNC_4(VAR_8, VAR_6, VAR_0, ((void*)0));
 }

 return VAR_7;
}
