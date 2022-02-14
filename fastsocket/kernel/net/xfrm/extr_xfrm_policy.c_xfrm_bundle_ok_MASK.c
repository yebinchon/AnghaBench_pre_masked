
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct xfrm_policy {int dummy; } ;
struct dst_entry {scalar_t__ next; scalar_t__* metrics; TYPE_5__* xfrm; struct dst_entry* child; scalar_t__ dev; struct dst_entry* path; } ;
struct TYPE_11__ {struct dst_entry dst; } ;
struct xfrm_dst {scalar_t__ xfrm_genid; scalar_t__ num_pols; scalar_t__ policy_genid; scalar_t__ child_mtu_cached; scalar_t__ route_mtu_cached; TYPE_4__ u; struct dst_entry* route; int route_cookie; TYPE_2__** pols; int * partner; scalar_t__ origin; int path_cookie; } ;
struct flowi {int dummy; } ;
struct TYPE_8__ {scalar_t__ state; } ;
struct TYPE_12__ {scalar_t__ genid; TYPE_3__* outer_mode; TYPE_1__ km; int sel; } ;
struct TYPE_10__ {int flags; } ;
struct TYPE_9__ {int genid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct dst_entry*,int ) ;
 scalar_t__ FUNC_2 (struct dst_entry*) ;
 int FUNC_3 (scalar_t__,struct flowi*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_5__*,struct xfrm_policy*,struct flowi*) ;
 int FUNC_7 (int *,struct flowi*,int) ;
 int FUNC_8 (TYPE_5__*,struct flowi*,int) ;
 scalar_t__ FUNC_9 (TYPE_5__*,scalar_t__) ;

int FUNC_10(struct xfrm_policy *VAR_3, struct xfrm_dst *VAR_4,
  struct flowi *VAR_5, int VAR_6, int VAR_7)
{
 struct dst_entry *VAR_8 = &VAR_4->u.dst;
 struct xfrm_dst *VAR_9;
 u32 VAR_10;

 if (!FUNC_1(VAR_8->path, ((struct xfrm_dst *)VAR_8)->path_cookie) ||
     (VAR_8->dev && !FUNC_5(VAR_8->dev)))
  return 0;
 VAR_9 = ((void*)0);

 do {
  struct xfrm_dst *VAR_11 = (struct xfrm_dst *)VAR_8;

  if (VAR_5 && !FUNC_7(&VAR_8->xfrm->sel, VAR_5, VAR_6))
   return 0;
  if (VAR_5 && VAR_3 &&
      !FUNC_6(VAR_8->xfrm, VAR_3, VAR_5))
   return 0;
  if (VAR_8->xfrm->km.state != VAR_2)
   return 0;
  if (VAR_11->xfrm_genid != VAR_8->xfrm->genid)
   return 0;
  if (VAR_11->num_pols > 0 &&
      VAR_11->policy_genid != FUNC_0(&VAR_11->pols[0]->genid))
   return 0;

  if (VAR_7 && VAR_5 &&
      !(VAR_8->xfrm->outer_mode->flags & VAR_1) &&
      !FUNC_8(VAR_8->xfrm, VAR_5, VAR_6))
   return 0;

  VAR_10 = FUNC_2(VAR_8->child);
  if (VAR_11->child_mtu_cached != VAR_10) {
   VAR_9 = VAR_11;
   VAR_11->child_mtu_cached = VAR_10;
  }

  if (!FUNC_1(VAR_11->route, VAR_11->route_cookie))
   return 0;
  VAR_10 = FUNC_2(VAR_11->route);
  if (VAR_11->route_mtu_cached != VAR_10) {
   VAR_9 = VAR_11;
   VAR_11->route_mtu_cached = VAR_10;
  }

  VAR_8 = VAR_8->child;
 } while (VAR_8->xfrm);

 if (FUNC_4(!VAR_9))
  return 1;

 VAR_10 = VAR_9->child_mtu_cached;
 for (;;) {
  VAR_8 = &VAR_9->u.dst;

  VAR_10 = FUNC_9(VAR_8->xfrm, VAR_10);
  if (VAR_10 > VAR_9->route_mtu_cached)
   VAR_10 = VAR_9->route_mtu_cached;
  VAR_8->metrics[VAR_0-1] = VAR_10;

  if (VAR_9 == VAR_4)
   break;

  VAR_9 = (struct xfrm_dst *)VAR_9->u.dst.next;
  VAR_9->child_mtu_cached = VAR_10;
 }

 return 1;
}
