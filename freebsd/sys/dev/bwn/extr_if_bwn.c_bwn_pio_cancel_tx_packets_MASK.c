
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_pio_txqueue {struct bwn_pio_txpkt* tq_pkts; } ;
struct bwn_pio_txpkt {int * tp_m; } ;


 unsigned int FUNC_0 (struct bwn_pio_txpkt*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct bwn_pio_txqueue *VAR_0)
{
 struct bwn_pio_txpkt *VAR_1;
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->tq_pkts); VAR_2++) {
  VAR_1 = &(VAR_0->tq_pkts[VAR_2]);
  if (VAR_1->tp_m) {
   FUNC_1(VAR_1->tp_m);
   VAR_1->tp_m = ((void*)0);
  }
 }
}
