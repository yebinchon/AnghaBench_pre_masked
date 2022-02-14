
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pktgen_dev {int nr_labels; scalar_t__ pkt_overhead; } ;


 scalar_t__ FUNC_0 (struct pktgen_dev*) ;
 scalar_t__ FUNC_1 (struct pktgen_dev*) ;

__attribute__((used)) static inline void FUNC_2(struct pktgen_dev *VAR_0)
{
 VAR_0->pkt_overhead = 0;
 VAR_0->pkt_overhead += VAR_0->nr_labels*sizeof(u32);
 VAR_0->pkt_overhead += FUNC_1(VAR_0);
 VAR_0->pkt_overhead += FUNC_0(VAR_0);
}
