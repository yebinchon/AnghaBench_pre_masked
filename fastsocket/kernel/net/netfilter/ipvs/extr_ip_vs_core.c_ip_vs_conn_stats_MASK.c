
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


struct TYPE_9__ {int conns; } ;
struct TYPE_10__ {int lock; TYPE_2__ ustats; } ;
struct ip_vs_service {TYPE_3__ stats; } ;
struct ip_vs_conn {TYPE_5__* dest; } ;
struct TYPE_11__ {int conns; } ;
struct TYPE_14__ {int lock; TYPE_4__ ustats; } ;
struct TYPE_8__ {int conns; } ;
struct TYPE_13__ {int lock; TYPE_1__ ustats; } ;
struct TYPE_12__ {TYPE_6__ stats; } ;


 TYPE_7__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void
FUNC_2(struct ip_vs_conn *VAR_1, struct ip_vs_service *VAR_2)
{
 FUNC_0(&VAR_1->dest->stats.lock);
 VAR_1->dest->stats.ustats.conns++;
 FUNC_1(&VAR_1->dest->stats.lock);

 FUNC_0(&VAR_2->stats.lock);
 VAR_2->stats.ustats.conns++;
 FUNC_1(&VAR_2->stats.lock);

 FUNC_0(&VAR_0.lock);
 VAR_0.ustats.conns++;
 FUNC_1(&VAR_0.lock);
}
