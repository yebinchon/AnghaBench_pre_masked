
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_6__ ;
typedef struct TYPE_37__ TYPE_5__ ;
typedef struct TYPE_36__ TYPE_4__ ;
typedef struct TYPE_35__ TYPE_3__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_29__ ;
typedef struct TYPE_32__ TYPE_25__ ;
typedef struct TYPE_31__ TYPE_20__ ;
typedef struct TYPE_30__ TYPE_1__ ;


struct TYPE_35__ {TYPE_6__* data; } ;
typedef TYPE_3__ xfs_dabuf_t ;
struct TYPE_37__ {scalar_t__ magic; scalar_t__ blkno; TYPE_3__* bp; } ;
struct TYPE_31__ {int active; TYPE_5__* blk; } ;
struct TYPE_30__ {TYPE_5__* blk; } ;
struct TYPE_36__ {int extravalid; int extraafter; TYPE_25__* args; TYPE_5__ extrablk; TYPE_20__ path; int inleaf; TYPE_1__ altpath; } ;
typedef TYPE_4__ xfs_da_state_t ;
typedef TYPE_5__ xfs_da_state_blk_t ;
struct TYPE_33__ {void* forw; void* back; } ;
struct TYPE_34__ {TYPE_29__ info; } ;
struct TYPE_38__ {TYPE_2__ hdr; } ;
typedef TYPE_6__ xfs_da_intnode_t ;
struct TYPE_32__ {int trans; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

 int FUNC_1 (TYPE_6__*,TYPE_29__*,int) ;

 int VAR_1 ;

 scalar_t__ FUNC_2 (void*) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_25__*) ;
 int FUNC_5 (TYPE_25__*) ;
 int FUNC_6 (TYPE_25__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_5__*,TYPE_5__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_4__*,TYPE_20__*) ;
 int FUNC_10 (int ,TYPE_3__*,int ) ;
 int FUNC_11 (TYPE_4__*,TYPE_5__*,TYPE_5__*,TYPE_5__*,int,int*) ;
 int FUNC_12 (TYPE_4__*,TYPE_5__*,TYPE_5__*) ;
 int FUNC_13 (TYPE_4__*,TYPE_5__*,TYPE_5__*) ;

int
FUNC_14(xfs_da_state_t *VAR_2)
{
 xfs_da_state_blk_t *VAR_3, *VAR_4, *VAR_5;
 xfs_da_intnode_t *VAR_6;
 xfs_dabuf_t *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;

 FUNC_6(VAR_2->args);







 VAR_8 = VAR_2->path.active - 1;
 FUNC_0((VAR_8 >= 0) && (VAR_8 < VAR_1));
 FUNC_0(VAR_2->path.blk[VAR_8].magic == 130 ||
        VAR_2->path.blk[VAR_8].magic == 128);

 VAR_5 = &VAR_2->path.blk[VAR_8];
 for (VAR_11 = VAR_8; (VAR_11 >= 0) && VAR_5; VAR_2->path.active--, VAR_11--) {
  VAR_3 = &VAR_2->path.blk[VAR_11];
  VAR_4 = &VAR_2->altpath.blk[VAR_11];







  switch (VAR_3->magic) {
  case 130:
   VAR_10 = FUNC_7(VAR_2, VAR_3, VAR_4);
   if ((VAR_10 != 0) && (VAR_10 != VAR_0)) {
    return(VAR_10);
   }
   if (!VAR_10) {
    VAR_5 = VAR_4;
    break;
   }



   VAR_2->extravalid = 1;
   if (VAR_2->inleaf) {
    VAR_2->extraafter = 0;
    FUNC_5(VAR_2->args);
    VAR_10 = FUNC_7(VAR_2, VAR_3,
           &VAR_2->extrablk);
   } else {
    VAR_2->extraafter = 1;
    FUNC_4(VAR_2->args);
    VAR_10 = FUNC_7(VAR_2, VAR_4,
           &VAR_2->extrablk);
   }
   if (VAR_10)
    return(VAR_10);
   VAR_5 = VAR_4;
   break;
  case 128:
   VAR_10 = FUNC_13(VAR_2, VAR_3, VAR_4);
   if (VAR_10)
    return VAR_10;
   VAR_5 = VAR_4;
   break;
  case 129:
   VAR_10 = FUNC_11(VAR_2, VAR_3, VAR_4, VAR_5,
        VAR_8 - VAR_11, &VAR_9);
   FUNC_8(VAR_5->bp);
   VAR_5->bp = ((void*)0);
   if (VAR_10)
    return(VAR_10);



   if (VAR_9)
    VAR_5 = VAR_4;
   else
    VAR_5 = ((void*)0);
   break;
  }




  FUNC_9(VAR_2, &VAR_2->path);





  if (VAR_11 > 0 || !VAR_5)
   FUNC_8(VAR_3->bp);
 }
 if (!VAR_5)
  return(0);




 FUNC_0(VAR_2->path.active == 0);
 VAR_3 = &VAR_2->path.blk[0];
 VAR_10 = FUNC_12(VAR_2, VAR_3, VAR_5);
 if (VAR_10) {
  FUNC_8(VAR_3->bp);
  FUNC_8(VAR_5->bp);
  VAR_5->bp = ((void*)0);
  return(VAR_10);
 }
 VAR_6 = VAR_3->bp->data;
 if (VAR_6->hdr.info.forw) {
  if (FUNC_2(VAR_6->hdr.info.forw) == VAR_5->blkno) {
   VAR_7 = VAR_5->bp;
  } else {
   FUNC_0(VAR_2->extravalid);
   VAR_7 = VAR_2->extrablk.bp;
  }
  VAR_6 = VAR_7->data;
  VAR_6->hdr.info.back = FUNC_3(VAR_3->blkno);
  FUNC_10(VAR_2->args->trans, VAR_7,
      FUNC_1(VAR_6, &VAR_6->hdr.info,
      sizeof(VAR_6->hdr.info)));
 }
 VAR_6 = VAR_3->bp->data;
 if (VAR_6->hdr.info.back) {
  if (FUNC_2(VAR_6->hdr.info.back) == VAR_5->blkno) {
   VAR_7 = VAR_5->bp;
  } else {
   FUNC_0(VAR_2->extravalid);
   VAR_7 = VAR_2->extrablk.bp;
  }
  VAR_6 = VAR_7->data;
  VAR_6->hdr.info.forw = FUNC_3(VAR_3->blkno);
  FUNC_10(VAR_2->args->trans, VAR_7,
      FUNC_1(VAR_6, &VAR_6->hdr.info,
      sizeof(VAR_6->hdr.info)));
 }
 FUNC_8(VAR_3->bp);
 FUNC_8(VAR_5->bp);
 VAR_5->bp = ((void*)0);
 return(0);
}
