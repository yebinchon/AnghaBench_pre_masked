
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_txq {scalar_t__ n_pend_desc; scalar_t__ max_pkt_desc; int blocked; unsigned int added; unsigned int reaped; unsigned int entries; int pend_desc; int common; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct sfxge_txq*) ;
 int FUNC_3 (int ,int ,scalar_t__,unsigned int,unsigned int*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct sfxge_txq*) ;

__attribute__((used)) static void
FUNC_6(struct sfxge_txq *VAR_0)
{
 unsigned int VAR_1;
 unsigned int VAR_2;
 unsigned int VAR_3;
 int VAR_4;

 FUNC_2(VAR_0);

 FUNC_1(VAR_0->n_pend_desc != 0, ("txq->n_pend_desc == 0"));
 FUNC_1(VAR_0->n_pend_desc <= VAR_0->max_pkt_desc,
  ("txq->n_pend_desc too large"));
 FUNC_1(!VAR_0->blocked, ("txq->blocked"));

 VAR_1 = VAR_0->added;


 VAR_4 = FUNC_3(VAR_0->common, VAR_0->pend_desc, VAR_0->n_pend_desc,
     VAR_0->reaped, &VAR_0->added);
 FUNC_1(VAR_4 == 0, ("efx_tx_qdesc_post() failed"));





 FUNC_1(VAR_0->added - VAR_1 == VAR_0->n_pend_desc,
  ("efx_tx_qdesc_post() refragmented descriptors"));

 VAR_3 = VAR_0->added - VAR_0->reaped;
 FUNC_1(VAR_3 <= VAR_0->entries, ("overfilled TX queue"));


 VAR_0->n_pend_desc = 0;





 VAR_2 = FUNC_0(VAR_0->entries) - VAR_0->max_pkt_desc;


 if (VAR_3 < VAR_2)
  return;


 FUNC_5(VAR_0);
 VAR_3 = VAR_0->added - VAR_0->reaped;
 if (VAR_3 < VAR_2)
  return;

 VAR_0->blocked = 1;





 FUNC_4();
 FUNC_5(VAR_0);
 VAR_3 = VAR_0->added - VAR_0->reaped;
 if (VAR_3 < VAR_2) {
  FUNC_4();
  VAR_0->blocked = 0;
 }
}
