
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfrm_usersa_info {int flags; scalar_t__ family; int saddr; int reqid; int replay_window; int mode; int lft; int sel; int id; } ;
struct TYPE_4__ {scalar_t__ family; } ;
struct TYPE_3__ {int flags; TYPE_2__ saddr; scalar_t__ family; int reqid; int replay_window; int mode; } ;
struct xfrm_state {TYPE_2__ sel; TYPE_1__ props; TYPE_2__ lft; TYPE_2__ id; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *,int) ;

__attribute__((used)) static void FUNC_1(struct xfrm_state *VAR_1, struct xfrm_usersa_info *VAR_2)
{
 FUNC_0(&VAR_1->id, &VAR_2->id, sizeof(VAR_1->id));
 FUNC_0(&VAR_1->sel, &VAR_2->sel, sizeof(VAR_1->sel));
 FUNC_0(&VAR_1->lft, &VAR_2->lft, sizeof(VAR_1->lft));
 VAR_1->props.mode = VAR_2->mode;
 VAR_1->props.replay_window = VAR_2->replay_window;
 VAR_1->props.reqid = VAR_2->reqid;
 VAR_1->props.family = VAR_2->family;
 FUNC_0(&VAR_1->props.saddr, &VAR_2->saddr, sizeof(VAR_1->props.saddr));
 VAR_1->props.flags = VAR_2->flags;

 if (!VAR_1->sel.family && !(VAR_2->flags & VAR_0))
  VAR_1->sel.family = VAR_2->family;
}
