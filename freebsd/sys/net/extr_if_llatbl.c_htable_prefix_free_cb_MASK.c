
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prefix_match_data {int dchain; int flags; int mask; int addr; } ;
struct lltable {scalar_t__ (* llt_match_prefix ) (int ,int ,int ,struct llentry*) ;} ;
struct llentry {int dummy; } ;


 int FUNC_0 (int *,struct llentry*,int ) ;
 int FUNC_1 (struct llentry*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int ,int ,struct llentry*) ;

__attribute__((used)) static int
FUNC_3(struct lltable *VAR_1, struct llentry *VAR_2, void *VAR_3)
{
 struct prefix_match_data *VAR_4;

 VAR_4 = (struct prefix_match_data *)VAR_3;

 if (VAR_1->llt_match_prefix(VAR_4->addr, VAR_4->mask, VAR_4->flags, VAR_2)) {
  FUNC_1(VAR_2);
  FUNC_0(&VAR_4->dchain, VAR_2, VAR_0);
 }

 return (0);
}
