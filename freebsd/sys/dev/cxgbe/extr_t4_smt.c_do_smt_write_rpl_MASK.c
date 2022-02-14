
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smt_entry {int lock; int state; } ;
struct sge_iq {struct adapter* adapter; } ;
struct rss_header {int dummy; } ;
struct mbuf {int dummy; } ;
struct cpl_smt_write_rpl {scalar_t__ status; } ;
struct adapter {TYPE_1__* smt; } ;
struct TYPE_2__ {struct smt_entry* smtab; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct cpl_smt_write_rpl const*) ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,char*,scalar_t__,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct sge_iq *VAR_4, const struct rss_header *VAR_5,
  struct mbuf *VAR_6)
{
 struct adapter *VAR_7 = VAR_4->adapter;
 const struct cpl_smt_write_rpl *VAR_8 = (const void *)(VAR_5 + 1);
 unsigned int VAR_9 = FUNC_0(VAR_8);
 unsigned int VAR_10 = FUNC_1(VAR_9);

 if (FUNC_2(VAR_8->status != VAR_0)) {
  struct smt_entry *VAR_11 = &VAR_7->smt->smtab[VAR_10];
  FUNC_3(VAR_2,
      "Unexpected SMT_WRITE_RPL (%u) for entry at hw_idx %u\n",
      VAR_8->status, VAR_10);
  FUNC_4(&VAR_11->lock);
  VAR_11->state = VAR_3;
  FUNC_5(&VAR_11->lock);
  return (VAR_1);
 }

 return (0);
}
