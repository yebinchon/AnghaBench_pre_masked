
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int* tn_member; struct TYPE_4__** tn_next; } ;
typedef TYPE_1__ txg_node_t ;
struct TYPE_5__ {int tl_offset; int tl_lock; TYPE_1__** tl_head; int tl_spa; } ;
typedef TYPE_2__ txg_list_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;

boolean_t
FUNC_3(txg_list_t *VAR_1, void *VAR_2, uint64_t VAR_3)
{
 int VAR_4 = VAR_3 & VAR_0;
 txg_node_t *VAR_5 = (txg_node_t *)((char *)VAR_2 + VAR_1->tl_offset);
 boolean_t VAR_6;

 FUNC_2(VAR_1->tl_spa, VAR_3);
 FUNC_0(&VAR_1->tl_lock);
 VAR_6 = (VAR_5->tn_member[VAR_4] == 0);
 if (VAR_6) {
  txg_node_t **VAR_7;

  for (VAR_7 = &VAR_1->tl_head[VAR_4]; *VAR_7 != ((void*)0); VAR_7 = &(*VAR_7)->tn_next[VAR_4])
   continue;

  VAR_5->tn_member[VAR_4] = 1;
  VAR_5->tn_next[VAR_4] = ((void*)0);
  *VAR_7 = VAR_5;
 }
 FUNC_1(&VAR_1->tl_lock);

 return (VAR_6);
}
