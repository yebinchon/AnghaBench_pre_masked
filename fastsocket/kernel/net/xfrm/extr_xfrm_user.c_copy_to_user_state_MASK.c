
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfrm_usersa_info {int seq; int flags; int family; int reqid; int replay_window; int mode; int saddr; int stats; int curlft; int lft; int sel; int id; } ;
struct TYPE_4__ {int seq; } ;
struct TYPE_3__ {int flags; int family; int reqid; int replay_window; int mode; int saddr; } ;
struct xfrm_state {TYPE_2__ km; TYPE_1__ props; int stats; int curlft; int lft; int sel; int id; } ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct xfrm_usersa_info*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct xfrm_state *VAR_0, struct xfrm_usersa_info *VAR_1)
{
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 FUNC_0(&VAR_1->id, &VAR_0->id, sizeof(VAR_1->id));
 FUNC_0(&VAR_1->sel, &VAR_0->sel, sizeof(VAR_1->sel));
 FUNC_0(&VAR_1->lft, &VAR_0->lft, sizeof(VAR_1->lft));
 FUNC_0(&VAR_1->curlft, &VAR_0->curlft, sizeof(VAR_1->curlft));
 FUNC_0(&VAR_1->stats, &VAR_0->stats, sizeof(VAR_1->stats));
 FUNC_0(&VAR_1->saddr, &VAR_0->props.saddr, sizeof(VAR_1->saddr));
 VAR_1->mode = VAR_0->props.mode;
 VAR_1->replay_window = VAR_0->props.replay_window;
 VAR_1->reqid = VAR_0->props.reqid;
 VAR_1->family = VAR_0->props.family;
 VAR_1->flags = VAR_0->props.flags;
 VAR_1->seq = VAR_0->km.seq;
}
