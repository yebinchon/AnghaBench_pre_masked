
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_18__ ;


struct TYPE_26__ {size_t active; TYPE_2__* blk; } ;
struct TYPE_27__ {TYPE_18__ path; int args; TYPE_18__ altpath; } ;
typedef TYPE_1__ xfs_da_state_t ;
struct TYPE_28__ {scalar_t__ magic; int * bp; int blkno; } ;
typedef TYPE_2__ xfs_da_state_blk_t ;


 int FUNC_0 (int) ;



 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_18__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,int*) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_10 (int ,int ,int *) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int*) ;
 int FUNC_13 (TYPE_1__*,TYPE_2__*,TYPE_2__*) ;

int
FUNC_14(xfs_da_state_t *VAR_0)
{
 xfs_da_state_blk_t *VAR_1, *VAR_2;
 int VAR_3, VAR_4;

 FUNC_1(VAR_0->args);

 VAR_3 = 0;
 VAR_1 = &VAR_0->path.blk[ VAR_0->path.active-1 ];
 VAR_2 = &VAR_0->altpath.blk[ VAR_0->path.active-1 ];
 FUNC_0(VAR_0->path.blk[0].magic == 129);
 FUNC_0(VAR_1->magic == 130 ||
        VAR_1->magic == 128);





 for ( ; VAR_0->path.active >= 2; VAR_1--, VAR_2--,
   VAR_0->path.active--) {






  switch (VAR_1->magic) {
  case 130:
   VAR_4 = FUNC_2(VAR_0, &VAR_3);
   if (VAR_4)
    return(VAR_4);
   if (VAR_3 == 0)
    return(0);
   FUNC_3(VAR_0, VAR_1, VAR_2);
   break;
  case 128:
   VAR_4 = FUNC_12(VAR_0, &VAR_3);
   if (VAR_4)
    return VAR_4;
   if (VAR_3 == 0)
    return 0;
   FUNC_13(VAR_0, VAR_1, VAR_2);
   break;
  case 129:




   FUNC_6(VAR_0, VAR_1);
   FUNC_5(VAR_0, &VAR_0->path);
   VAR_4 = FUNC_7(VAR_0, &VAR_3);
   if (VAR_4)
    return(VAR_4);
   if (VAR_3 == 0)
    return 0;
   FUNC_8(VAR_0, VAR_1, VAR_2);
   break;
  }
  FUNC_5(VAR_0, &VAR_0->altpath);
  VAR_4 = FUNC_4(VAR_0, VAR_1, VAR_2);
  FUNC_11(VAR_0);
  if (VAR_4)
   return(VAR_4);
  VAR_4 = FUNC_10(VAR_0->args, VAR_1->blkno,
        VAR_1->bp);
  VAR_1->bp = ((void*)0);
  if (VAR_4)
   return(VAR_4);
 }





 FUNC_6(VAR_0, VAR_1);
 FUNC_5(VAR_0, &VAR_0->path);
 VAR_4 = FUNC_9(VAR_0, &VAR_0->path.blk[0]);
 return(VAR_4);
}
