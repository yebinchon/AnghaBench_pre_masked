
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {TYPE_1__* header_ops; } ;
struct neighbour {int nud_state; TYPE_2__* ops; struct hh_cache* hh; } ;
struct hh_cache {scalar_t__ hh_type; int hh_refcnt; int hh_output; struct hh_cache* hh_next; int hh_lock; } ;
struct dst_entry {struct hh_cache* hh; struct net_device* dev; } ;
typedef scalar_t__ __be16 ;
struct TYPE_4__ {int output; int hh_output; } ;
struct TYPE_3__ {scalar_t__ (* cache ) (struct neighbour*,struct hh_cache*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct hh_cache*) ;
 struct hh_cache* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct neighbour*,struct hh_cache*) ;

__attribute__((used)) static void FUNC_6(struct neighbour *VAR_2, struct dst_entry *VAR_3,
     __be16 VAR_4)
{
 struct hh_cache *VAR_5;
 struct net_device *VAR_6 = VAR_3->dev;

 for (VAR_5 = VAR_2->hh; VAR_5; VAR_5 = VAR_5->hh_next)
  if (VAR_5->hh_type == VAR_4)
   break;

 if (!VAR_5 && (VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0)) != ((void*)0)) {
  FUNC_4(&VAR_5->hh_lock);
  VAR_5->hh_type = VAR_4;
  FUNC_1(&VAR_5->hh_refcnt, 0);
  VAR_5->hh_next = ((void*)0);

  if (VAR_6->header_ops->cache(VAR_2, VAR_5)) {
   FUNC_2(VAR_5);
   VAR_5 = ((void*)0);
  } else {
   FUNC_0(&VAR_5->hh_refcnt);
   VAR_5->hh_next = VAR_2->hh;
   VAR_2->hh = VAR_5;
   if (VAR_2->nud_state & VAR_1)
    VAR_5->hh_output = VAR_2->ops->hh_output;
   else
    VAR_5->hh_output = VAR_2->ops->output;
  }
 }
 if (VAR_5) {
  FUNC_0(&VAR_5->hh_refcnt);
  VAR_3->hh = VAR_5;
 }
}
