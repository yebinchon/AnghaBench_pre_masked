
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysctl_req {int dummy; } ;
struct lltable {scalar_t__ llt_dump_entry; TYPE_1__* llt_ifp; } ;
struct epoch_tracker {int dummy; } ;
typedef int llt_foreach_cb_t ;
struct TYPE_2__ {int if_flags; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct epoch_tracker) ;
 int FUNC_2 (struct epoch_tracker) ;
 int FUNC_3 (struct lltable*,int *,struct sysctl_req*) ;

__attribute__((used)) static int
FUNC_4(struct lltable *VAR_1, struct sysctl_req *VAR_2)
{
 struct epoch_tracker VAR_3;
 int VAR_4;

 FUNC_0();

 if (VAR_1->llt_ifp->if_flags & VAR_0)
  return (0);
 VAR_4 = 0;

 FUNC_1(VAR_3);
 VAR_4 = FUNC_3(VAR_1,
     (llt_foreach_cb_t *)VAR_1->llt_dump_entry, VAR_2);
 FUNC_2(VAR_3);

 return (VAR_4);
}
