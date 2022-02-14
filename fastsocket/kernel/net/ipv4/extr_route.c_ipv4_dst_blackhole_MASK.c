
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct dst_entry {int __use; scalar_t__ dev; int metrics; void* output; void* input; int __refcnt; } ;
struct TYPE_4__ {struct dst_entry dst; } ;
struct rtable {TYPE_2__ u; TYPE_1__* peer; int rt_spec_dst; int rt_gateway; int rt_iif; int rt_src; int rt_dst; int rt_type; int rt_flags; int rt_genid; scalar_t__ idev; int fl; } ;
struct net {int dummy; } ;
struct flowi {int dummy; } ;
struct TYPE_3__ {int refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 void* VAR_2 ;
 int FUNC_4 (struct dst_entry*) ;
 int FUNC_5 (struct dst_entry*) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (struct net*) ;

__attribute__((used)) static int FUNC_9(struct net *VAR_4, struct rtable **VAR_5, struct flowi *VAR_6)
{
 struct rtable *VAR_7 = *VAR_5;
 struct rtable *VAR_8 = (struct rtable *)
  FUNC_3(&VAR_3);

 if (VAR_8) {
  struct dst_entry *VAR_9 = &VAR_8->u.dst;

  FUNC_1(&VAR_9->__refcnt, 1);
  VAR_9->__use = 1;
  VAR_9->input = VAR_2;
  VAR_9->output = VAR_2;
  FUNC_7(VAR_9->metrics, VAR_7->u.dst.metrics, VAR_1*sizeof(u32));

  VAR_9->dev = VAR_7->u.dst.dev;
  if (VAR_9->dev)
   FUNC_2(VAR_9->dev);

  VAR_8->fl = VAR_7->fl;

  VAR_8->idev = VAR_7->idev;
  if (VAR_8->idev)
   FUNC_6(VAR_8->idev);
  VAR_8->rt_genid = FUNC_8(VAR_4);
  VAR_8->rt_flags = VAR_7->rt_flags;
  VAR_8->rt_type = VAR_7->rt_type;
  VAR_8->rt_dst = VAR_7->rt_dst;
  VAR_8->rt_src = VAR_7->rt_src;
  VAR_8->rt_iif = VAR_7->rt_iif;
  VAR_8->rt_gateway = VAR_7->rt_gateway;
  VAR_8->rt_spec_dst = VAR_7->rt_spec_dst;
  VAR_8->peer = VAR_7->peer;
  if (VAR_8->peer)
   FUNC_0(&VAR_8->peer->refcnt);

  FUNC_4(VAR_9);
 }

 FUNC_5(&(*VAR_5)->u.dst);
 *VAR_5 = VAR_8;
 return (VAR_8 ? 0 : -VAR_0);
}
