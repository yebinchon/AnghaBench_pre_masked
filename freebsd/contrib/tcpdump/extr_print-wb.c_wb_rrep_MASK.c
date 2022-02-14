
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_7__ {int p_uid; int p_sid; } ;
struct pkt_dop {int pd_eseq; int pd_sseq; TYPE_1__ pd_page; } ;
struct pkt_rrep {int pr_id; struct pkt_dop pr_dop; } ;
struct TYPE_8__ {scalar_t__ ndo_vflag; } ;
typedef TYPE_2__ netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct pkt_rrep const) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,struct pkt_dop const*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(netdissect_options *VAR_0,
        const struct pkt_rrep *VAR_1, u_int VAR_2)
{
 const struct pkt_dop *VAR_3 = &VAR_1->pr_dop;

 FUNC_1((VAR_0, " wb-rrep:"));
 if (VAR_2 < sizeof(*VAR_1) || !FUNC_2(*VAR_1))
  return (-1);
 VAR_2 -= sizeof(*VAR_1);

 FUNC_1((VAR_0, " for %s %s:%u<%u:%u>",
     FUNC_3(VAR_0, &VAR_1->pr_id),
     FUNC_3(VAR_0, &VAR_3->pd_page.p_sid),
     FUNC_0(&VAR_3->pd_page.p_uid),
     FUNC_0(&VAR_3->pd_sseq),
     FUNC_0(&VAR_3->pd_eseq)));

 if (VAR_0->ndo_vflag)
  return (FUNC_4(VAR_0, VAR_3,
      FUNC_0(&VAR_3->pd_sseq),
      FUNC_0(&VAR_3->pd_eseq)));
 return (0);
}
