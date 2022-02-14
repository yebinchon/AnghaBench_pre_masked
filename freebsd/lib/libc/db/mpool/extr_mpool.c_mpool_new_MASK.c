
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct _hqh {int dummy; } ;
typedef void* pgno_t ;
struct TYPE_9__ {int flags; void* page; void* pgno; } ;
struct TYPE_8__ {scalar_t__ npages; int lqh; struct _hqh* hqh; int pagenew; } ;
typedef TYPE_1__ MPOOL ;
typedef TYPE_2__ BKT ;


 size_t FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct _hqh*,TYPE_2__*,int ) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 int VAR_4 ;
 TYPE_2__* FUNC_5 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;

void *
FUNC_6(MPOOL *VAR_7, pgno_t *VAR_8, u_int VAR_9)
{
 struct _hqh *VAR_10;
 BKT *VAR_11;

 if (VAR_7->npages == VAR_0) {
  (void)FUNC_4(VAR_6, "mpool_new: page allocation overflow.\n");
  FUNC_3();
 }
 if ((VAR_11 = FUNC_5(VAR_7)) == ((void*)0))
  return (((void*)0));
 if (VAR_9 == VAR_2) {
  VAR_7->npages++;
  VAR_11->pgno = *VAR_8;
 } else
  VAR_11->pgno = *VAR_8 = VAR_7->npages++;

 VAR_11->flags = VAR_3 | VAR_1;

 VAR_10 = &VAR_7->hqh[FUNC_0(VAR_11->pgno)];
 FUNC_1(VAR_10, VAR_11, VAR_4);
 FUNC_2(&VAR_7->lqh, VAR_11, VAR_5);
 return (VAR_11->page);
}
