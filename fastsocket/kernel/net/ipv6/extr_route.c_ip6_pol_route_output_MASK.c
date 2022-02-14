
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt6_info {int dummy; } ;
struct net {int dummy; } ;
struct flowi {int oif; } ;
struct fib6_table {int dummy; } ;


 struct rt6_info* FUNC_0 (struct net*,struct fib6_table*,int ,struct flowi*,int,int) ;

__attribute__((used)) static struct rt6_info *FUNC_1(struct net *VAR_0, struct fib6_table *VAR_1,
          struct flowi *VAR_2, int VAR_3)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2->oif, VAR_2, VAR_3, 0);
}
