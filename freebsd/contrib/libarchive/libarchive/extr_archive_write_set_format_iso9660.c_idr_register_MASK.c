
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isoent {int dummy; } ;
struct idrent {int weight; int noff; struct idrent* wnext; struct idrent* avail; struct isoent* isoent; int rbnode; scalar_t__ rename_num; } ;
struct TYPE_2__ {struct idrent** last; } ;
struct idr {TYPE_1__ wait_list; int rbtree; int pool_idx; struct idrent* idrent_pool; } ;


 scalar_t__ FUNC_0 (int *,struct isoent*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(struct idr *VAR_0, struct isoent *VAR_1, int VAR_2, int VAR_3)
{
 struct idrent *VAR_4, *VAR_5;

 VAR_4 = &(VAR_0->idrent_pool[VAR_0->pool_idx++]);
 VAR_4->wnext = VAR_4->avail = ((void*)0);
 VAR_4->isoent = VAR_1;
 VAR_4->weight = VAR_2;
 VAR_4->noff = VAR_3;
 VAR_4->rename_num = 0;

 if (!FUNC_1(&(VAR_0->rbtree), &(VAR_4->rbnode))) {
  VAR_5 = (struct idrent *)FUNC_0(
      &(VAR_0->rbtree), VAR_4->isoent);
  if (VAR_5 != ((void*)0)) {

   VAR_4->avail = VAR_5;
   *VAR_0->wait_list.last = VAR_4;
   VAR_0->wait_list.last = &(VAR_4->wnext);
  }
 }
}
