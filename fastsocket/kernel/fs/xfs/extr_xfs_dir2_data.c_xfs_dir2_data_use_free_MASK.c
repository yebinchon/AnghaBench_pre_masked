
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_20__ {scalar_t__ freetag; scalar_t__ length; } ;
typedef TYPE_2__ xfs_dir2_data_unused_t ;
struct TYPE_19__ {TYPE_4__* bestfree; int magic; } ;
struct TYPE_21__ {TYPE_1__ hdr; } ;
typedef TYPE_3__ xfs_dir2_data_t ;
struct TYPE_22__ {scalar_t__ length; scalar_t__ offset; } ;
typedef TYPE_4__ xfs_dir2_data_free_t ;
typedef int xfs_dir2_data_aoff_t ;
struct TYPE_23__ {TYPE_3__* data; } ;
typedef TYPE_5__ xfs_dabuf_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 TYPE_4__* FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 TYPE_4__* FUNC_5 (TYPE_3__*,TYPE_2__*,int*) ;
 int FUNC_6 (TYPE_3__*,TYPE_4__*,int*) ;
 int FUNC_7 (int *,TYPE_5__*,TYPE_2__*) ;
 scalar_t__* FUNC_8 (TYPE_2__*) ;

void
FUNC_9(
 xfs_trans_t *VAR_3,
 xfs_dabuf_t *VAR_4,
 xfs_dir2_data_unused_t *VAR_5,
 xfs_dir2_data_aoff_t VAR_6,
 xfs_dir2_data_aoff_t VAR_7,
 int *VAR_8,
 int *VAR_9)
{
 xfs_dir2_data_t *VAR_10;
 xfs_dir2_data_free_t *VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 xfs_dir2_data_unused_t *VAR_15;
 xfs_dir2_data_unused_t *VAR_16;
 int VAR_17;

 VAR_10 = VAR_4->data;
 FUNC_0(FUNC_2(VAR_10->hdr.magic) == VAR_2 ||
        FUNC_2(VAR_10->hdr.magic) == VAR_0);
 FUNC_0(FUNC_1(VAR_5->freetag) == VAR_1);
 FUNC_0(VAR_6 >= (char *)VAR_5 - (char *)VAR_10);
 FUNC_0(VAR_6 + VAR_7 <= (char *)VAR_5 + FUNC_1(VAR_5->length) - (char *)VAR_10);
 FUNC_0((char *)VAR_5 - (char *)VAR_10 == FUNC_1(*FUNC_8(VAR_5)));



 VAR_11 = FUNC_4(VAR_10, VAR_5);
 VAR_17 = FUNC_1(VAR_5->length);
 FUNC_0(VAR_11 || VAR_17 <= FUNC_1(VAR_10->hdr.bestfree[2].length));



 VAR_13 = (char *)VAR_5 - (char *)VAR_10 == VAR_6;
 VAR_12 = (char *)VAR_5 + VAR_17 - (char *)VAR_10 == VAR_6 + VAR_7;
 FUNC_0(*VAR_9 == 0);
 VAR_14 = 0;




 if (VAR_13 && VAR_12) {
  if (VAR_11) {
   VAR_14 = (VAR_10->hdr.bestfree[2].offset != 0);
   if (!VAR_14)
    FUNC_6(VAR_10, VAR_11, VAR_8);
  }
 }




 else if (VAR_13) {
  VAR_15 = (xfs_dir2_data_unused_t *)((char *)VAR_10 + VAR_6 + VAR_7);
  VAR_15->freetag = FUNC_3(VAR_1);
  VAR_15->length = FUNC_3(VAR_17 - VAR_7);
  *FUNC_8(VAR_15) =
   FUNC_3((char *)VAR_15 - (char *)VAR_10);
  FUNC_7(VAR_3, VAR_4, VAR_15);



  if (VAR_11) {
   FUNC_6(VAR_10, VAR_11, VAR_8);
   VAR_11 = FUNC_5(VAR_10, VAR_15, VAR_8);
   FUNC_0(VAR_11 != ((void*)0));
   FUNC_0(VAR_11->length == VAR_15->length);
   FUNC_0(FUNC_1(VAR_11->offset) == (char *)VAR_15 - (char *)VAR_10);





   VAR_14 = VAR_11 == &VAR_10->hdr.bestfree[2];
  }
 }




 else if (VAR_12) {
  VAR_15 = VAR_5;
  VAR_15->length = FUNC_3(((char *)VAR_10 + VAR_6) - (char *)VAR_15);
  *FUNC_8(VAR_15) =
   FUNC_3((char *)VAR_15 - (char *)VAR_10);
  FUNC_7(VAR_3, VAR_4, VAR_15);



  if (VAR_11) {
   FUNC_6(VAR_10, VAR_11, VAR_8);
   VAR_11 = FUNC_5(VAR_10, VAR_15, VAR_8);
   FUNC_0(VAR_11 != ((void*)0));
   FUNC_0(VAR_11->length == VAR_15->length);
   FUNC_0(FUNC_1(VAR_11->offset) == (char *)VAR_15 - (char *)VAR_10);





   VAR_14 = VAR_11 == &VAR_10->hdr.bestfree[2];
  }
 }




 else {
  VAR_15 = VAR_5;
  VAR_15->length = FUNC_3(((char *)VAR_10 + VAR_6) - (char *)VAR_15);
  *FUNC_8(VAR_15) =
   FUNC_3((char *)VAR_15 - (char *)VAR_10);
  FUNC_7(VAR_3, VAR_4, VAR_15);
  VAR_16 = (xfs_dir2_data_unused_t *)((char *)VAR_10 + VAR_6 + VAR_7);
  VAR_16->freetag = FUNC_3(VAR_1);
  VAR_16->length = FUNC_3(VAR_17 - VAR_7 - FUNC_1(VAR_15->length));
  *FUNC_8(VAR_16) =
   FUNC_3((char *)VAR_16 - (char *)VAR_10);
  FUNC_7(VAR_3, VAR_4, VAR_16);
  if (VAR_11) {
   VAR_14 = (VAR_10->hdr.bestfree[2].length != 0);
   if (!VAR_14) {
    FUNC_6(VAR_10, VAR_11, VAR_8);
    (void)FUNC_5(VAR_10, VAR_15,
     VAR_8);
    (void)FUNC_5(VAR_10, VAR_16,
     VAR_8);
   }
  }
 }
 *VAR_9 = VAR_14;
}
