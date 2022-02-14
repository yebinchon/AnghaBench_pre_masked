
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int p_uid; int p_sid; } ;
struct pkt_rreq {int pr_eseq; int pr_sseq; TYPE_1__ pr_page; int pr_id; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pkt_rreq const) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int
FUNC_4(netdissect_options *VAR_0,
        const struct pkt_rreq *VAR_1, u_int VAR_2)
{
 FUNC_1((VAR_0, " wb-rreq:"));
 if (VAR_2 < sizeof(*VAR_1) || !FUNC_2(*VAR_1))
  return (-1);

 FUNC_1((VAR_0, " please repair %s %s:%u<%u:%u>",
        FUNC_3(VAR_0, &VAR_1->pr_id),
        FUNC_3(VAR_0, &VAR_1->pr_page.p_sid),
        FUNC_0(&VAR_1->pr_page.p_uid),
        FUNC_0(&VAR_1->pr_sseq),
        FUNC_0(&VAR_1->pr_eseq)));
 return (0);
}
