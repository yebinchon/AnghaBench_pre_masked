
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {TYPE_4__* data; } ;
typedef TYPE_1__ xfs_dabuf_t ;
struct TYPE_21__ {TYPE_5__* args; } ;
typedef TYPE_2__ xfs_da_state_t ;
struct TYPE_22__ {scalar_t__ magic; scalar_t__ blkno; TYPE_1__* bp; } ;
typedef TYPE_3__ xfs_da_state_blk_t ;
struct TYPE_23__ {scalar_t__ magic; void* forw; void* back; } ;
typedef TYPE_4__ xfs_da_blkinfo_t ;
struct TYPE_24__ {int trans; int whichfork; int dp; } ;
typedef TYPE_5__ xfs_da_args_t ;


 int FUNC_0 (int) ;



 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (void*) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,TYPE_1__*,int ,int) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_10 (int ,int ,scalar_t__,int,TYPE_1__**,int ) ;
 int FUNC_11 (TYPE_1__*,TYPE_1__*) ;

int
FUNC_12(xfs_da_state_t *VAR_0, xfs_da_state_blk_t *VAR_1,
          xfs_da_state_blk_t *VAR_2)
{
 xfs_da_blkinfo_t *VAR_3, *VAR_4, *VAR_5;
 xfs_da_args_t *VAR_6;
 int VAR_7=0, VAR_8;
 xfs_dabuf_t *VAR_9;




 VAR_6 = VAR_0->args;
 FUNC_0(VAR_6 != ((void*)0));
 VAR_3 = VAR_1->bp->data;
 VAR_4 = VAR_2->bp->data;
 FUNC_0(VAR_1->magic == 129 ||
        VAR_1->magic == 128 ||
        VAR_1->magic == 130);
 FUNC_0(VAR_1->magic == FUNC_1(VAR_3->magic));
 FUNC_0(VAR_2->magic == FUNC_1(VAR_4->magic));
 FUNC_0(VAR_1->magic == VAR_2->magic);

 switch (VAR_1->magic) {
 case 130:
  VAR_7 = FUNC_6(VAR_1->bp, VAR_2->bp);
  break;
 case 128:
  VAR_7 = FUNC_11(VAR_1->bp, VAR_2->bp);
  break;
 case 129:
  VAR_7 = FUNC_9(VAR_1->bp, VAR_2->bp);
  break;
 }




 if (VAR_7) {



  FUNC_5(VAR_6);
  VAR_4->forw = FUNC_3(VAR_1->blkno);
  VAR_4->back = VAR_3->back;
  if (VAR_3->back) {
   VAR_8 = FUNC_10(VAR_6->trans, VAR_6->dp,
      FUNC_2(VAR_3->back),
      -1, &VAR_9, VAR_6->whichfork);
   if (VAR_8)
    return(VAR_8);
   FUNC_0(VAR_9 != ((void*)0));
   VAR_5 = VAR_9->data;
   FUNC_0(FUNC_1(VAR_5->magic) == FUNC_1(VAR_3->magic));
   FUNC_0(FUNC_2(VAR_5->forw) == VAR_1->blkno);
   VAR_5->forw = FUNC_3(VAR_2->blkno);
   FUNC_8(VAR_6->trans, VAR_9, 0, sizeof(*VAR_5)-1);
   FUNC_7(VAR_9);
  }
  VAR_3->back = FUNC_3(VAR_2->blkno);
 } else {



  FUNC_4(VAR_6);
  VAR_4->forw = VAR_3->forw;
  VAR_4->back = FUNC_3(VAR_1->blkno);
  if (VAR_3->forw) {
   VAR_8 = FUNC_10(VAR_6->trans, VAR_6->dp,
      FUNC_2(VAR_3->forw),
      -1, &VAR_9, VAR_6->whichfork);
   if (VAR_8)
    return(VAR_8);
   FUNC_0(VAR_9 != ((void*)0));
   VAR_5 = VAR_9->data;
   FUNC_0(VAR_5->magic == VAR_3->magic);
   FUNC_0(FUNC_2(VAR_5->back) == VAR_1->blkno);
   VAR_5->back = FUNC_3(VAR_2->blkno);
   FUNC_8(VAR_6->trans, VAR_9, 0, sizeof(*VAR_5)-1);
   FUNC_7(VAR_9);
  }
  VAR_3->forw = FUNC_3(VAR_2->blkno);
 }

 FUNC_8(VAR_6->trans, VAR_1->bp, 0, sizeof(*VAR_5) - 1);
 FUNC_8(VAR_6->trans, VAR_2->bp, 0, sizeof(*VAR_5) - 1);
 return(0);
}
