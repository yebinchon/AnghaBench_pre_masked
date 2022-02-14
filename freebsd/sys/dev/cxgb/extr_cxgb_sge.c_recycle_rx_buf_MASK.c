
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_fl {size_t pidx; int gen; size_t size; int cntxt_id; int credits; int * sdesc; struct rx_desc* desc; } ;
struct rx_desc {void* gen2; void* len_gen; int addr_hi; int addr_lo; } ;
typedef int adapter_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(adapter_t *VAR_1, struct sge_fl *VAR_2, unsigned int VAR_3)
{
 struct rx_desc *VAR_4 = &VAR_2->desc[VAR_3];
 struct rx_desc *VAR_5 = &VAR_2->desc[VAR_2->pidx];

 VAR_2->sdesc[VAR_2->pidx] = VAR_2->sdesc[VAR_3];
 VAR_5->addr_lo = VAR_4->addr_lo;
 VAR_5->addr_hi = VAR_4->addr_hi;
 FUNC_5();
 VAR_5->len_gen = FUNC_3(FUNC_1(VAR_2->gen));
 VAR_5->gen2 = FUNC_3(FUNC_2(VAR_2->gen));
 VAR_2->credits++;

 if (++VAR_2->pidx == VAR_2->size) {
  VAR_2->pidx = 0;
  VAR_2->gen ^= 1;
 }
 FUNC_4(VAR_1, VAR_0, FUNC_0(VAR_2->cntxt_id));
}
