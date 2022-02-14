
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ispsoftc_t ;
struct TYPE_4__ {int pdb_sl_ptr; int pdb_il_ptr; int pdb_loopid; int pdb_prli_svc3; int pdb_prli_svc0; int pdb_prli_len; int pdb_fcount; int pdb_nxt_seqid; int pdb_ptimer; int pdb_sqtail; int pdb_sqhead; int pdb_lstopflg; int pdb_labrtflg; int pdb_noseq; int pdb_ncseq; int pdb_rdsiz; int pdb_initiator; int pdb_target; int pdb_roi; int pdb_pconcurrnt; int pdb_features; int pdb_tl_last; int pdb_tl_next; int pdb_qtail; int pdb_qhead; int pdb_curalloc; int pdb_resalloc; int pdb_retry_delay; int pdb_retry_count; int pdb_exec_count; int pdb_execthrottle; int * pdb_portname; int * pdb_nodename; int * pdb_portid_bits; int * pdb_hardaddr_bits; int pdb_sstate; int pdb_mstate; int pdb_options; } ;
typedef TYPE_1__ isp_pdb_21xx_t ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,int ) ;

void
FUNC_2(ispsoftc_t *VAR_0, isp_pdb_21xx_t *VAR_1, isp_pdb_21xx_t *VAR_2)
{
 int VAR_3;
 FUNC_0(VAR_0, &VAR_1->pdb_options, VAR_2->pdb_options);
        FUNC_1(VAR_0, &VAR_1->pdb_mstate, VAR_2->pdb_mstate);
        FUNC_1(VAR_0, &VAR_1->pdb_sstate, VAR_2->pdb_sstate);
 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  FUNC_1(VAR_0, &VAR_1->pdb_hardaddr_bits[VAR_3], VAR_2->pdb_hardaddr_bits[VAR_3]);
 }
 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  FUNC_1(VAR_0, &VAR_1->pdb_portid_bits[VAR_3], VAR_2->pdb_portid_bits[VAR_3]);
 }
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  FUNC_1(VAR_0, &VAR_1->pdb_nodename[VAR_3], VAR_2->pdb_nodename[VAR_3]);
 }
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  FUNC_1(VAR_0, &VAR_1->pdb_portname[VAR_3], VAR_2->pdb_portname[VAR_3]);
 }
 FUNC_0(VAR_0, &VAR_1->pdb_execthrottle, VAR_2->pdb_execthrottle);
 FUNC_0(VAR_0, &VAR_1->pdb_exec_count, VAR_2->pdb_exec_count);
 FUNC_1(VAR_0, &VAR_1->pdb_retry_count, VAR_2->pdb_retry_count);
 FUNC_1(VAR_0, &VAR_1->pdb_retry_delay, VAR_2->pdb_retry_delay);
 FUNC_0(VAR_0, &VAR_1->pdb_resalloc, VAR_2->pdb_resalloc);
 FUNC_0(VAR_0, &VAR_1->pdb_curalloc, VAR_2->pdb_curalloc);
 FUNC_0(VAR_0, &VAR_1->pdb_qhead, VAR_2->pdb_qhead);
 FUNC_0(VAR_0, &VAR_1->pdb_qtail, VAR_2->pdb_qtail);
 FUNC_0(VAR_0, &VAR_1->pdb_tl_next, VAR_2->pdb_tl_next);
 FUNC_0(VAR_0, &VAR_1->pdb_tl_last, VAR_2->pdb_tl_last);
 FUNC_0(VAR_0, &VAR_1->pdb_features, VAR_2->pdb_features);
 FUNC_0(VAR_0, &VAR_1->pdb_pconcurrnt, VAR_2->pdb_pconcurrnt);
 FUNC_0(VAR_0, &VAR_1->pdb_roi, VAR_2->pdb_roi);
 FUNC_1(VAR_0, &VAR_1->pdb_target, VAR_2->pdb_target);
 FUNC_1(VAR_0, &VAR_1->pdb_initiator, VAR_2->pdb_initiator);
 FUNC_0(VAR_0, &VAR_1->pdb_rdsiz, VAR_2->pdb_rdsiz);
 FUNC_0(VAR_0, &VAR_1->pdb_ncseq, VAR_2->pdb_ncseq);
 FUNC_0(VAR_0, &VAR_1->pdb_noseq, VAR_2->pdb_noseq);
 FUNC_0(VAR_0, &VAR_1->pdb_labrtflg, VAR_2->pdb_labrtflg);
 FUNC_0(VAR_0, &VAR_1->pdb_lstopflg, VAR_2->pdb_lstopflg);
 FUNC_0(VAR_0, &VAR_1->pdb_sqhead, VAR_2->pdb_sqhead);
 FUNC_0(VAR_0, &VAR_1->pdb_sqtail, VAR_2->pdb_sqtail);
 FUNC_0(VAR_0, &VAR_1->pdb_ptimer, VAR_2->pdb_ptimer);
 FUNC_0(VAR_0, &VAR_1->pdb_nxt_seqid, VAR_2->pdb_nxt_seqid);
 FUNC_0(VAR_0, &VAR_1->pdb_fcount, VAR_2->pdb_fcount);
 FUNC_0(VAR_0, &VAR_1->pdb_prli_len, VAR_2->pdb_prli_len);
 FUNC_0(VAR_0, &VAR_1->pdb_prli_svc0, VAR_2->pdb_prli_svc0);
 FUNC_0(VAR_0, &VAR_1->pdb_prli_svc3, VAR_2->pdb_prli_svc3);
 FUNC_0(VAR_0, &VAR_1->pdb_loopid, VAR_2->pdb_loopid);
 FUNC_0(VAR_0, &VAR_1->pdb_il_ptr, VAR_2->pdb_il_ptr);
 FUNC_0(VAR_0, &VAR_1->pdb_sl_ptr, VAR_2->pdb_sl_ptr);
}
