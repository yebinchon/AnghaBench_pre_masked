
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_8__ {int inbytes; int inpkts; } ;
struct TYPE_9__ {int lock; TYPE_1__ ustats; } ;
struct ip_vs_dest {int flags; TYPE_5__* svc; TYPE_2__ stats; } ;
struct ip_vs_conn {struct ip_vs_dest* dest; } ;
struct TYPE_13__ {int inbytes; int inpkts; } ;
struct TYPE_14__ {int lock; TYPE_6__ ustats; } ;
struct TYPE_10__ {int inbytes; int inpkts; } ;
struct TYPE_11__ {int lock; TYPE_3__ ustats; } ;
struct TYPE_12__ {TYPE_4__ stats; } ;


 int VAR_0 ;
 TYPE_7__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void
FUNC_2(struct ip_vs_conn *VAR_2, struct sk_buff *VAR_3)
{
 struct ip_vs_dest *VAR_4 = VAR_2->dest;
 if (VAR_4 && (VAR_4->flags & VAR_0)) {
  FUNC_0(&VAR_4->stats.lock);
  VAR_4->stats.ustats.inpkts++;
  VAR_4->stats.ustats.inbytes += VAR_3->len;
  FUNC_1(&VAR_4->stats.lock);

  FUNC_0(&VAR_4->svc->stats.lock);
  VAR_4->svc->stats.ustats.inpkts++;
  VAR_4->svc->stats.ustats.inbytes += VAR_3->len;
  FUNC_1(&VAR_4->svc->stats.lock);

  FUNC_0(&VAR_1.lock);
  VAR_1.ustats.inpkts++;
  VAR_1.ustats.inbytes += VAR_3->len;
  FUNC_1(&VAR_1.lock);
 }
}
