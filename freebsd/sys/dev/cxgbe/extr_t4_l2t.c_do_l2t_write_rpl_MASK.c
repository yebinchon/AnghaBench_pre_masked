
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_iq {int dummy; } ;
struct rss_header {int dummy; } ;
struct mbuf {int dummy; } ;
struct cpl_l2t_write_rpl {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct cpl_l2t_write_rpl const*) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,scalar_t__,unsigned int) ;

int
FUNC_3(struct sge_iq *VAR_4, const struct rss_header *VAR_5,
    struct mbuf *VAR_6)
{
 const struct cpl_l2t_write_rpl *VAR_7 = (const void *)(VAR_5 + 1);
 unsigned int VAR_8 = FUNC_0(VAR_7);
 unsigned int VAR_9 = VAR_8 % VAR_2;

 if (FUNC_1(VAR_7->status != VAR_0)) {
  FUNC_2(VAR_3,
      "Unexpected L2T_WRITE_RPL (%u) for entry at hw_idx %u\n",
      VAR_7->status, VAR_9);
  return (VAR_1);
 }

 return (0);
}
