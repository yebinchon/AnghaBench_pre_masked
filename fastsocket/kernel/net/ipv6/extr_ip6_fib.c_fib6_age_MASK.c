
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ lastuse; int __refcnt; } ;
struct TYPE_6__ {TYPE_1__ dst; } ;
struct rt6_info {int rt6i_flags; TYPE_3__* rt6i_nexthop; TYPE_2__ u; int rt6i_expires; } ;
struct TYPE_8__ {int more; scalar_t__ timeout; } ;
struct TYPE_7__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct rt6_info*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_4__ VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_2 (unsigned long,int ) ;
 scalar_t__ FUNC_3 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct rt6_info *VAR_6, void *VAR_7)
{
 unsigned long VAR_8 = VAR_5;
 if (VAR_6->rt6i_flags&VAR_2 && VAR_6->rt6i_expires) {
  if (FUNC_2(VAR_8, VAR_6->rt6i_expires)) {
   FUNC_0("expiring %p\n", VAR_6);
   return -1;
  }
  VAR_4.more++;
 } else if (VAR_6->rt6i_flags & VAR_1) {
  if (FUNC_1(&VAR_6->u.dst.__refcnt) == 0 &&
      FUNC_3(VAR_8, VAR_6->u.dst.lastuse + VAR_4.timeout)) {
   FUNC_0("aging clone %p\n", VAR_6);
   return -1;
  } else if ((VAR_6->rt6i_flags & VAR_3) &&
      (!(VAR_6->rt6i_nexthop->flags & VAR_0))) {
   FUNC_0("purging route %p via non-router but gateway\n",
      VAR_6);
   return -1;
  }
  VAR_4.more++;
 }

 return 0;
}
