
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfront_txq {size_t id; struct netfront_info* info; } ;
struct netfront_rxq {int dummy; } ;
struct netfront_info {struct netfront_rxq* rxq; } ;


 int FUNC_0 (struct netfront_rxq*) ;
 int FUNC_1 (struct netfront_txq*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 struct netfront_txq *VAR_1 = VAR_0;
 struct netfront_info *VAR_2 = VAR_1->info;
 struct netfront_rxq *VAR_3 = &VAR_2->rxq[VAR_1->id];


 FUNC_0(VAR_3);
 FUNC_1(VAR_1);
}
