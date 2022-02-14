
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nicvf {int dummy; } ;
struct cqe_send_t {int send_status; } ;
struct TYPE_2__ {int csum_overflow; int csum_overlap; int mem_fault; int tstmp_timeout; int tstmp_conflict; int data_fault; int lock_viol; int mem_seq_err; int data_seq_err; int imm_size_oflow; int subdesc_err; int hdr_cons_err; int desc_fault; int good; } ;
struct cmp_queue_stats {TYPE_1__ tx; } ;
struct cmp_queue {struct cmp_queue_stats stats; } ;
int
FUNC_0(struct nicvf *VAR_0, struct cmp_queue *VAR_1,
    struct cqe_send_t *VAR_2)
{
 struct cmp_queue_stats *VAR_3 = &VAR_1->stats;

 switch (VAR_2->send_status) {
 case 136:
  VAR_3->tx.good++;
  return (0);
 case 137:
  VAR_3->tx.desc_fault++;
  break;
 case 135:
  VAR_3->tx.hdr_cons_err++;
  break;
 case 130:
  VAR_3->tx.subdesc_err++;
  break;
 case 134:
  VAR_3->tx.imm_size_oflow++;
  break;
 case 138:
  VAR_3->tx.data_seq_err++;
  break;
 case 131:
  VAR_3->tx.mem_seq_err++;
  break;
 case 133:
  VAR_3->tx.lock_viol++;
  break;
 case 139:
  VAR_3->tx.data_fault++;
  break;
 case 129:
  VAR_3->tx.tstmp_conflict++;
  break;
 case 128:
  VAR_3->tx.tstmp_timeout++;
  break;
 case 132:
  VAR_3->tx.mem_fault++;
  break;
 case 140:
  VAR_3->tx.csum_overlap++;
  break;
 case 141:
  VAR_3->tx.csum_overflow++;
  break;
 }

 return (1);
}
