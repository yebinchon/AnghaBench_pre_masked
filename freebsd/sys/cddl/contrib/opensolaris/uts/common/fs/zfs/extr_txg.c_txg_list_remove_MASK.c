
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int* tn_member; struct TYPE_4__** tn_next; } ;
typedef TYPE_1__ txg_node_t ;
struct TYPE_5__ {char* tl_offset; int tl_lock; TYPE_1__** tl_head; int tl_spa; } ;
typedef TYPE_2__ txg_list_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;

void *
FUNC_4(txg_list_t *VAR_1, uint64_t VAR_2)
{
 int VAR_3 = VAR_2 & VAR_0;
 txg_node_t *VAR_4;
 void *VAR_5 = ((void*)0);

 FUNC_3(VAR_1->tl_spa, VAR_2);
 FUNC_1(&VAR_1->tl_lock);
 if ((VAR_4 = VAR_1->tl_head[VAR_3]) != ((void*)0)) {
  FUNC_0(VAR_4->tn_member[VAR_3]);
  FUNC_0(VAR_4->tn_next[VAR_3] == ((void*)0) || VAR_4->tn_next[VAR_3]->tn_member[VAR_3]);
  VAR_5 = (char *)VAR_4 - VAR_1->tl_offset;
  VAR_1->tl_head[VAR_3] = VAR_4->tn_next[VAR_3];
  VAR_4->tn_next[VAR_3] = ((void*)0);
  VAR_4->tn_member[VAR_3] = 0;
 }
 FUNC_2(&VAR_1->tl_lock);

 return (VAR_5);
}
