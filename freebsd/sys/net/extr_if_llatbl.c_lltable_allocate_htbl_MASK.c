
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lltable {int llt_hsize; int llt_free_tbl; int llt_foreach_entry; int llt_prefix_free; int llt_unlink_entry; int llt_link_entry; int * lle_head; } ;
struct llentries {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (int,int ,int) ;

struct lltable *
FUNC_2(uint32_t VAR_8)
{
 struct lltable *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(sizeof(struct lltable), VAR_0, VAR_1 | VAR_2);
 VAR_9->llt_hsize = VAR_8;
 VAR_9->lle_head = FUNC_1(sizeof(struct llentries) * VAR_8,
     VAR_0, VAR_1 | VAR_2);

 for (VAR_10 = 0; VAR_10 < VAR_9->llt_hsize; VAR_10++)
  FUNC_0(&VAR_9->lle_head[VAR_10]);


 VAR_9->llt_link_entry = VAR_5;
 VAR_9->llt_unlink_entry = VAR_7;
 VAR_9->llt_prefix_free = VAR_6;
 VAR_9->llt_foreach_entry = VAR_3;
 VAR_9->llt_free_tbl = VAR_4;

 return (VAR_9);
}
