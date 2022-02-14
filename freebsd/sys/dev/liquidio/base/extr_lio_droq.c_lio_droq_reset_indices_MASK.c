
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lio_droq {int pkts_pending; scalar_t__ refill_count; scalar_t__ refill_idx; scalar_t__ read_idx; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct lio_droq *VAR_0)
{

 VAR_0->read_idx = 0;
 VAR_0->refill_idx = 0;
 VAR_0->refill_count = 0;
 FUNC_0(&VAR_0->pkts_pending, 0);
}
