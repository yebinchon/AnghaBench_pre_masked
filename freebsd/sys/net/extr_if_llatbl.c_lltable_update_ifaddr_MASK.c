
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct lltable {TYPE_1__* llt_ifp; } ;
struct TYPE_4__ {int if_flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (struct lltable*,int ,TYPE_1__*) ;

void
FUNC_3(struct lltable *VAR_2)
{

 if (VAR_2->llt_ifp->if_flags & VAR_0)
  return;

 FUNC_0(VAR_2->llt_ifp);
 FUNC_2(VAR_2, VAR_1, VAR_2->llt_ifp);
 FUNC_1(VAR_2->llt_ifp);
}
