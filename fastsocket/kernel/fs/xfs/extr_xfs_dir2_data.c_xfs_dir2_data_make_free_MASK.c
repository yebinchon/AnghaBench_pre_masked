
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_24__ {TYPE_3__* t_mountp; } ;
typedef TYPE_2__ xfs_trans_t ;
struct TYPE_25__ {int m_dirblksize; } ;
typedef TYPE_3__ xfs_mount_t ;
struct TYPE_26__ {scalar_t__ freetag; scalar_t__ length; } ;
typedef TYPE_4__ xfs_dir2_data_unused_t ;
struct TYPE_23__ {TYPE_6__* bestfree; int magic; } ;
struct TYPE_27__ {TYPE_1__ hdr; } ;
typedef TYPE_5__ xfs_dir2_data_t ;
struct TYPE_28__ {scalar_t__ length; } ;
typedef TYPE_6__ xfs_dir2_data_free_t ;
typedef int xfs_dir2_data_aoff_t ;
typedef int xfs_dir2_block_tail_t ;
typedef int xfs_dir2_block_t ;
struct TYPE_29__ {TYPE_5__* data; } ;
typedef TYPE_7__ xfs_dabuf_t ;
typedef scalar_t__ __be16 ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 void* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (TYPE_3__*,int *) ;
 TYPE_6__* FUNC_7 (TYPE_5__*,TYPE_4__*) ;
 TYPE_6__* FUNC_8 (TYPE_5__*,TYPE_4__*,int*) ;
 int FUNC_9 (TYPE_5__*,TYPE_6__*,int*) ;
 int FUNC_10 (TYPE_2__*,TYPE_7__*,TYPE_4__*) ;
 void** FUNC_11 (TYPE_4__*) ;

void
FUNC_12(
 xfs_trans_t *VAR_3,
 xfs_dabuf_t *VAR_4,
 xfs_dir2_data_aoff_t VAR_5,
 xfs_dir2_data_aoff_t VAR_6,
 int *VAR_7,
 int *VAR_8)
{
 xfs_dir2_data_t *VAR_9;
 xfs_dir2_data_free_t *VAR_10;
 char *VAR_11;
 xfs_mount_t *VAR_12;
 int VAR_13;
 xfs_dir2_data_unused_t *VAR_14;
 xfs_dir2_data_unused_t *VAR_15;
 xfs_dir2_data_unused_t *VAR_16;

 VAR_12 = VAR_3->t_mountp;
 VAR_9 = VAR_4->data;



 if (FUNC_3(VAR_9->hdr.magic) == VAR_2)
  VAR_11 = (char *)VAR_9 + VAR_12->m_dirblksize;
 else {
  xfs_dir2_block_tail_t *VAR_17;

  FUNC_0(FUNC_3(VAR_9->hdr.magic) == VAR_0);
  VAR_17 = FUNC_6(VAR_12, (xfs_dir2_block_t *)VAR_9);
  VAR_11 = (char *)FUNC_5(VAR_17);
 }




 if (VAR_5 > sizeof(VAR_9->hdr)) {
  __be16 *VAR_18;

  VAR_18 = (__be16 *)((char *)VAR_9 + VAR_5) - 1;
  VAR_16 = (xfs_dir2_data_unused_t *)((char *)VAR_9 + FUNC_2(*VAR_18));
  if (FUNC_2(VAR_16->freetag) != VAR_1)
   VAR_16 = ((void*)0);
 } else
  VAR_16 = ((void*)0);




 if ((char *)VAR_9 + VAR_5 + VAR_6 < VAR_11) {
  VAR_15 =
   (xfs_dir2_data_unused_t *)((char *)VAR_9 + VAR_5 + VAR_6);
  if (FUNC_2(VAR_15->freetag) != VAR_1)
   VAR_15 = ((void*)0);
 } else
  VAR_15 = ((void*)0);
 FUNC_0(*VAR_8 == 0);
 VAR_13 = 0;




 if (VAR_16 && VAR_15) {
  xfs_dir2_data_free_t *VAR_19;




  VAR_10 = FUNC_7(VAR_9, VAR_16);
  VAR_19 = FUNC_7(VAR_9, VAR_15);






  VAR_13 = (VAR_9->hdr.bestfree[2].length != 0);



  FUNC_1(&VAR_16->length, VAR_6 + FUNC_2(VAR_15->length));
  *FUNC_11(VAR_16) =
   FUNC_4((char *)VAR_16 - (char *)VAR_9);
  FUNC_10(VAR_3, VAR_4, VAR_16);
  if (!VAR_13) {






   FUNC_0(VAR_10 && VAR_19);
   if (VAR_10 == &VAR_9->hdr.bestfree[1]) {
    VAR_10 = &VAR_9->hdr.bestfree[0];
    FUNC_0(VAR_19 == VAR_10);
    VAR_19 = &VAR_9->hdr.bestfree[1];
   }
   FUNC_9(VAR_9, VAR_19, VAR_7);
   FUNC_9(VAR_9, VAR_10, VAR_7);



   VAR_10 = FUNC_8(VAR_9, VAR_16, VAR_7);
   FUNC_0(VAR_10 == &VAR_9->hdr.bestfree[0]);
   FUNC_0(VAR_10->length == VAR_16->length);
   FUNC_0(!VAR_10[1].length);
   FUNC_0(!VAR_10[2].length);
  }
 }



 else if (VAR_16) {
  VAR_10 = FUNC_7(VAR_9, VAR_16);
  FUNC_1(&VAR_16->length, VAR_6);
  *FUNC_11(VAR_16) =
   FUNC_4((char *)VAR_16 - (char *)VAR_9);
  FUNC_10(VAR_3, VAR_4, VAR_16);





  if (VAR_10) {
   FUNC_9(VAR_9, VAR_10, VAR_7);
   (void)FUNC_8(VAR_9, VAR_16, VAR_7);
  }



  else {
   VAR_13 = FUNC_2(VAR_16->length) >
       FUNC_2(VAR_9->hdr.bestfree[2].length);
  }
 }



 else if (VAR_15) {
  VAR_10 = FUNC_7(VAR_9, VAR_15);
  VAR_14 = (xfs_dir2_data_unused_t *)((char *)VAR_9 + VAR_5);
  VAR_14->freetag = FUNC_4(VAR_1);
  VAR_14->length = FUNC_4(VAR_6 + FUNC_2(VAR_15->length));
  *FUNC_11(VAR_14) =
   FUNC_4((char *)VAR_14 - (char *)VAR_9);
  FUNC_10(VAR_3, VAR_4, VAR_14);





  if (VAR_10) {
   FUNC_9(VAR_9, VAR_10, VAR_7);
   (void)FUNC_8(VAR_9, VAR_14, VAR_7);
  }



  else {
   VAR_13 = FUNC_2(VAR_14->length) >
       FUNC_2(VAR_9->hdr.bestfree[2].length);
  }
 }



 else {
  VAR_14 = (xfs_dir2_data_unused_t *)((char *)VAR_9 + VAR_5);
  VAR_14->freetag = FUNC_4(VAR_1);
  VAR_14->length = FUNC_4(VAR_6);
  *FUNC_11(VAR_14) =
   FUNC_4((char *)VAR_14 - (char *)VAR_9);
  FUNC_10(VAR_3, VAR_4, VAR_14);
  (void)FUNC_8(VAR_9, VAR_14, VAR_7);
 }
 *VAR_8 = VAR_13;
}
