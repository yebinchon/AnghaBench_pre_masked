
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {scalar_t__* tn_member; struct TYPE_4__** tn_next; } ;
typedef TYPE_1__ txg_node_t ;
struct TYPE_5__ {char* tl_offset; int tl_lock; TYPE_1__** tl_head; int tl_spa; } ;
typedef TYPE_2__ txg_list_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;

void *
FUNC_3(txg_list_t *VAR_1, void *VAR_2, uint64_t VAR_3)
{
 int VAR_4 = VAR_3 & VAR_0;
 txg_node_t *VAR_5, **VAR_6;

 FUNC_2(VAR_1->tl_spa, VAR_3);
 FUNC_0(&VAR_1->tl_lock);

 for (VAR_6 = &VAR_1->tl_head[VAR_4]; (VAR_5 = *VAR_6) != ((void*)0); VAR_6 = &VAR_5->tn_next[VAR_4]) {
  if ((char *)VAR_5 - VAR_1->tl_offset == VAR_2) {
   *VAR_6 = VAR_5->tn_next[VAR_4];
   VAR_5->tn_next[VAR_4] = ((void*)0);
   VAR_5->tn_member[VAR_4] = 0;
   FUNC_1(&VAR_1->tl_lock);
   return (VAR_2);
  }
 }

 FUNC_1(&VAR_1->tl_lock);

 return (((void*)0));
}
