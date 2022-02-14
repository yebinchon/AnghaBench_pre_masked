
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long lastuse; struct dn_route* dn_next; int __refcnt; } ;
struct TYPE_5__ {TYPE_1__ dst; } ;
struct dn_route {TYPE_2__ u; } ;
struct TYPE_6__ {int lock; struct dn_route* chain; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_1 (struct dn_route*) ;
 unsigned long VAR_5 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_6)
{
 int VAR_7;
 struct dn_route *VAR_8, **VAR_9;
 unsigned long VAR_10 = VAR_5;
 unsigned long VAR_11 = 120 * VAR_0;

 for(VAR_7 = 0; VAR_7 <= VAR_3; VAR_7++) {
  VAR_9 = &VAR_4[VAR_7].chain;

  FUNC_3(&VAR_4[VAR_7].lock);
  while((VAR_8=*VAR_9) != ((void*)0)) {
   if (FUNC_0(&VAR_8->u.dst.__refcnt) ||
     (VAR_10 - VAR_8->u.dst.lastuse) < VAR_11) {
    VAR_9 = &VAR_8->u.dst.dn_next;
    continue;
   }
   *VAR_9 = VAR_8->u.dst.dn_next;
   VAR_8->u.dst.dn_next = ((void*)0);
   FUNC_1(VAR_8);
  }
  FUNC_4(&VAR_4[VAR_7].lock);

  if ((VAR_5 - VAR_10) > 0)
   break;
 }

 FUNC_2(&VAR_2, VAR_10 + VAR_1 * VAR_0);
}
