
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lltable {int (* llt_unlink_entry ) (struct llentry*) ;} ;
struct llentry {int dummy; } ;


 int FUNC_0 (struct llentry*) ;

void
FUNC_1(struct lltable *VAR_0, struct llentry *VAR_1)
{

 VAR_0->llt_unlink_entry(VAR_1);
}
