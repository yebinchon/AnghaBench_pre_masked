
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct _hqh {int dummy; } ;
struct TYPE_7__ {int flags; int pgno; } ;
struct TYPE_6__ {int curcache; struct _hqh lqh; struct _hqh* hqh; } ;
typedef TYPE_1__ MPOOL ;
typedef TYPE_2__ BKT ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct _hqh*,TYPE_2__*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_5(MPOOL *VAR_5, void *VAR_6)
{
 struct _hqh *VAR_7;
 BKT *VAR_8;

 VAR_8 = (BKT *)((char *)VAR_6 - sizeof(BKT));
 VAR_7 = &VAR_5->hqh[FUNC_0(VAR_8->pgno)];
 FUNC_1(VAR_7, VAR_8, VAR_2);
 FUNC_1(&VAR_5->lqh, VAR_8, VAR_3);

 FUNC_4(VAR_8);
 VAR_5->curcache--;
 return (VAR_1);
}
