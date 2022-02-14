
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int z_vfs; int z_os; } ;
typedef TYPE_1__ zfsvfs_t ;
struct TYPE_18__ {char* zc_value; scalar_t__ zc_nvlist_src; int zc_cookie; char* zc_string; int zc_obj; int zc_nvlist_dst_size; int zc_action_handle; int zc_cleanup_fd; int zc_resumable; int zc_begin_record; int zc_iflags; int zc_nvlist_src_size; int zc_guid; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef scalar_t__ offset_t ;
typedef int nvlist_t ;
struct TYPE_19__ {scalar_t__ f_offset; } ;
typedef TYPE_3__ file_t ;
typedef int dsl_dataset_t ;
struct TYPE_20__ {int drc_newfs; int drc_ds; } ;
typedef TYPE_4__ dmu_recv_cookie_t ;
typedef void* boolean_t ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (char*,int *,int *) ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (char*,int *,int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (char*,char*,int *,void*,int ,char*,TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*,scalar_t__*,int ,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,int **) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (int ,int,int *,TYPE_3__**) ;
 int * FUNC_16 () ;
 int FUNC_17 (scalar_t__,int ,int ,int **) ;
 TYPE_3__* FUNC_18 (int) ;
 scalar_t__ FUNC_19 (char*,TYPE_1__**) ;
 int FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int *,int *,int ) ;
 scalar_t__ FUNC_22 (int *,int ) ;
 int FUNC_23 (int *,int *) ;
 scalar_t__ FUNC_24 (TYPE_2__*,int *) ;
 int FUNC_25 (int) ;
 scalar_t__ FUNC_26 (int ) ;
 char* FUNC_27 (char*,char) ;
 int FUNC_28 (char*,char*) ;
 int FUNC_29 (int ) ;
 scalar_t__ FUNC_30 (char*,int *,int **) ;
 void* VAR_13 ;
 int FUNC_31 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_32 (char*,int ,int *,int *) ;
 int FUNC_33 (TYPE_1__*) ;
 int FUNC_34 (char*) ;

__attribute__((used)) static int
FUNC_35(zfs_cmd_t *VAR_14)
{
 file_t *VAR_15;
 dmu_recv_cookie_t VAR_16;
 boolean_t VAR_17 = (boolean_t)VAR_14->zc_guid;
 int VAR_18;
 int VAR_19 = 0;
 int VAR_20 = 0;
 nvlist_t *VAR_21;
 offset_t VAR_22;
 nvlist_t *VAR_23 = ((void*)0);
 nvlist_t *VAR_24 = ((void*)0);
 nvlist_t *VAR_25 = ((void*)0);
 char *VAR_26 = ((void*)0);
 char *VAR_27;
 char VAR_28[VAR_6];
 boolean_t VAR_29 = VAR_0;

 if (FUNC_4(VAR_14->zc_value, ((void*)0), ((void*)0)) != 0 ||
     FUNC_27(VAR_14->zc_value, '@') == ((void*)0) ||
     FUNC_27(VAR_14->zc_value, '%'))
  return (FUNC_1(VAR_3));

 (void) FUNC_28(VAR_28, VAR_14->zc_value);
 VAR_27 = FUNC_27(VAR_28, '@');
 *VAR_27++ = '\0';

 if (VAR_14->zc_nvlist_src != 0 &&
     (VAR_19 = FUNC_17(VAR_14->zc_nvlist_src, VAR_14->zc_nvlist_src_size,
     VAR_14->zc_iflags, &VAR_23)) != 0)
  return (VAR_19);

 VAR_18 = VAR_14->zc_cookie;



 FUNC_15(VAR_12, VAR_18, &VAR_11, &VAR_15);

 if (VAR_15 == ((void*)0)) {
  FUNC_20(VAR_23);
  return (FUNC_1(VAR_2));
 }

 VAR_21 = FUNC_16();

 if (VAR_14->zc_string[0])
  VAR_26 = VAR_14->zc_string;

 VAR_19 = FUNC_6(VAR_28, VAR_27,
     &VAR_14->zc_begin_record, VAR_17, VAR_14->zc_resumable, VAR_26, &VAR_16);
 if (VAR_19 != 0)
  goto out;






 if (VAR_23 != ((void*)0) && !VAR_16.drc_newfs) {
  if (FUNC_26(FUNC_9(VAR_16.drc_ds)) >=
      VAR_5 &&
      !FUNC_10(VAR_28))
   VAR_29 = VAR_1;






  if (FUNC_11(VAR_28, &VAR_24) == 0) {
   nvlist_t *VAR_30 = ((void*)0);
   if (!VAR_29)
    FUNC_23(VAR_23, VAR_24);
   if (FUNC_30(VAR_28, VAR_24, &VAR_30) != 0)
    (void) FUNC_21(VAR_21, VAR_30, 0);
   FUNC_20(VAR_30);

   if (FUNC_3(VAR_28, VAR_24,
       VAR_29 ? ((void*)0) : VAR_23) != 0)
    VAR_14->zc_obj |= VAR_7;
  } else {
   VAR_14->zc_obj |= VAR_7;
  }
 }

 if (VAR_23 != ((void*)0)) {
  VAR_20 = FUNC_12(VAR_28);

  if (VAR_20 == 0) {
   VAR_25 = FUNC_14(VAR_23);
   (void) FUNC_32(VAR_28, VAR_10,
       VAR_23, VAR_21);
  }
 }

 VAR_22 = VAR_15->f_offset;
 VAR_19 = FUNC_8(&VAR_16, VAR_15, &VAR_22, VAR_14->zc_cleanup_fd,
     &VAR_14->zc_action_handle);

 if (VAR_19 == 0) {
  zfsvfs_t *VAR_31 = ((void*)0);

  if (FUNC_19(VAR_28, &VAR_31) == 0) {

   dsl_dataset_t *VAR_32;
   int VAR_33;

   VAR_32 = FUNC_5(VAR_31->z_os);
   VAR_19 = FUNC_33(VAR_31);




   VAR_33 = FUNC_7(&VAR_16, VAR_31);
   if (VAR_19 == 0)
    VAR_19 = FUNC_31(VAR_31, VAR_32);
   VAR_19 = VAR_19 ? VAR_19 : VAR_33;



   FUNC_29(VAR_31->z_vfs);

  } else {
   VAR_19 = FUNC_7(&VAR_16, ((void*)0));
  }


  if (VAR_25 != ((void*)0) && VAR_19 == 0) {
   (void) FUNC_32(VAR_28, VAR_10,
       VAR_25, VAR_21);
  }
 }

 if (VAR_25 != ((void*)0)) {
  FUNC_0(FUNC_21(VAR_23, VAR_25, 0) == 0);
  FUNC_20(VAR_25);
 }





 if (VAR_14->zc_nvlist_dst_size != 0 &&
     (FUNC_22(VAR_21, VAR_14->zc_nvlist_dst_size) != 0 ||
     FUNC_24(VAR_14, VAR_21) != 0)) {




  VAR_20 = FUNC_1(VAR_3);
 }

 VAR_14->zc_cookie = VAR_22 - VAR_15->f_offset;
 if (VAR_22 >= 0 && VAR_22 <= VAR_4)
  VAR_15->f_offset = VAR_22;
 if (VAR_19 != 0 && VAR_23 != ((void*)0) && !VAR_16.drc_newfs) {
  if (FUNC_3(VAR_28, VAR_23, ((void*)0)) != 0) {





   VAR_14->zc_obj |= VAR_8;
  } else if (VAR_29) {
   FUNC_13(VAR_28);
  }

  if (VAR_24 == ((void*)0) && !VAR_16.drc_newfs) {

   VAR_14->zc_obj |= VAR_8;
  }







  if (VAR_24 != ((void*)0) &&
      FUNC_32(VAR_28, (VAR_29 ?
      VAR_9 : VAR_10),
      VAR_24, ((void*)0)) != 0) {




   VAR_14->zc_obj |= VAR_8;
  }
 }
out:
 FUNC_20(VAR_23);
 FUNC_20(VAR_24);
 FUNC_20(VAR_21);
 FUNC_25(VAR_18);

 if (VAR_19 == 0)
  VAR_19 = VAR_20;

 return (VAR_19);
}
