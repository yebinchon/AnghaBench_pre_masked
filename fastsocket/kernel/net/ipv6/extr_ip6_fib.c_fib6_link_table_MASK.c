
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * fib_table_hash; } ;
struct net {TYPE_1__ ipv6; } ;
struct fib6_table {int tb6_id; int tb6_hlist; int tb6_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct net *VAR_1, struct fib6_table *VAR_2)
{
 unsigned int VAR_3;





 FUNC_1(&VAR_2->tb6_lock);

 VAR_3 = VAR_2->tb6_id & (VAR_0 - 1);





 FUNC_0(&VAR_2->tb6_hlist, &VAR_1->ipv6.fib_table_hash[VAR_3]);
}
