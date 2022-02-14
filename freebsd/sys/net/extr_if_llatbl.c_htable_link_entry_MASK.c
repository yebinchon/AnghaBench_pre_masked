
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct lltable {size_t (* llt_hash ) (struct llentry*,int ) ;struct llentries* lle_head; int llt_hsize; int llt_ifp; } ;
struct llentry {int la_flags; struct llentries* lle_head; struct lltable* lle_tbl; } ;
struct llentries {int dummy; } ;


 int FUNC_0 (struct llentries*,struct llentry*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_2 (struct llentry*,int ) ;

__attribute__((used)) static void
FUNC_3(struct lltable *VAR_2, struct llentry *VAR_3)
{
 struct llentries *VAR_4;
 uint32_t VAR_5;

 if ((VAR_3->la_flags & VAR_0) != 0)
  return;

 FUNC_1(VAR_2->llt_ifp);

 VAR_5 = VAR_2->llt_hash(VAR_3, VAR_2->llt_hsize);
 VAR_4 = &VAR_2->lle_head[VAR_5];

 VAR_3->lle_tbl = VAR_2;
 VAR_3->lle_head = VAR_4;
 VAR_3->la_flags |= VAR_0;
 FUNC_0(VAR_4, VAR_3, VAR_1);
}
