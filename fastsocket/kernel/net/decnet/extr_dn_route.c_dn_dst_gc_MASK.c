
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dst_ops {int dummy; } ;
struct TYPE_4__ {unsigned long lastuse; struct dn_route* dn_next; int __refcnt; } ;
struct TYPE_5__ {TYPE_1__ dst; } ;
struct dn_route {TYPE_2__ u; } ;
struct TYPE_6__ {int lock; struct dn_route* chain; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (struct dn_route*) ;
 unsigned long VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct dst_ops *VAR_4)
{
 struct dn_route *VAR_5, **VAR_6;
 int VAR_7;
 unsigned long VAR_8 = VAR_3;
 unsigned long VAR_9 = 10 * VAR_0;

 for(VAR_7 = 0; VAR_7 <= VAR_1; VAR_7++) {

  FUNC_2(&VAR_2[VAR_7].lock);
  VAR_6 = &VAR_2[VAR_7].chain;

  while((VAR_5=*VAR_6) != ((void*)0)) {
   if (FUNC_0(&VAR_5->u.dst.__refcnt) ||
     (VAR_8 - VAR_5->u.dst.lastuse) < VAR_9) {
    VAR_6 = &VAR_5->u.dst.dn_next;
    continue;
   }
   *VAR_6 = VAR_5->u.dst.dn_next;
   VAR_5->u.dst.dn_next = ((void*)0);
   FUNC_1(VAR_5);
   break;
  }
  FUNC_3(&VAR_2[VAR_7].lock);
 }

 return 0;
}
