
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int dds_guid; } ;
struct TYPE_15__ {char* zfs_name; TYPE_1__ zfs_dmustats; } ;
typedef TYPE_2__ zfs_handle_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_16__ {char* prevsnap; scalar_t__ (* filter_cb ) (TYPE_2__*,int ) ;void* prevsnap_obj; scalar_t__ progress; int debugnv; int outfd; int progressastitle; int size; int parsable; int dryrun; scalar_t__ verbose; scalar_t__ replicate; scalar_t__ fromorigin; int filter_cb_arg; int fsavl; int doall; scalar_t__ compress; scalar_t__ embed_data; scalar_t__ large_block; void* seento; int * tosnap; void* seenfrom; int * fromsnap; scalar_t__ std_out; } ;
typedef TYPE_3__ send_dump_data_t ;
typedef int pthread_t ;
struct TYPE_17__ {int pa_astitle; int pa_size; int pa_parsable; int pa_fd; TYPE_2__* pa_zhp; int member_0; } ;
typedef TYPE_4__ progress_arg_t ;
typedef int nvlist_t ;
typedef int fromds ;
typedef enum lzc_send_flags { ____Placeholder_lzc_send_flags } lzc_send_flags ;
typedef int boolean_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*,char*,void*,int,int ,int,int ) ;
 int * FUNC_2 (int ,int ,char**) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int *,char*,int **) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *,int ,TYPE_4__*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *,char*,char*,scalar_t__,int ) ;
 int VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 char* FUNC_10 (char*,char) ;
 scalar_t__ FUNC_11 (int *,char*) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (char*,char*,int) ;
 scalar_t__ FUNC_15 (TYPE_2__*,int ) ;
 int FUNC_16 (TYPE_2__*) ;
 void* FUNC_17 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_18 (TYPE_2__*,char*,char*,int,scalar_t__*) ;

__attribute__((used)) static int
FUNC_19(zfs_handle_t *VAR_10, void *VAR_11)
{
 send_dump_data_t *VAR_12 = VAR_11;
 progress_arg_t VAR_13 = { 0 };
 pthread_t VAR_14;
 char *VAR_15;
 enum lzc_send_flags VAR_16 = 0;
 int VAR_17;
 boolean_t VAR_18, VAR_19, VAR_20;
 boolean_t VAR_21 = VAR_0;
 FILE *VAR_22 = VAR_12->std_out ? VAR_9 : VAR_8;

 VAR_17 = 0;
 VAR_15 = FUNC_10(VAR_10->zfs_name, '@') + 1;
 VAR_18 = (VAR_12->fromsnap != ((void*)0) &&
     FUNC_11(VAR_12->fromsnap, VAR_15) == 0);

 if (!VAR_12->seenfrom && VAR_18) {
  FUNC_3(VAR_10, VAR_12);
  VAR_12->seenfrom = VAR_1;
  (void) FUNC_12(VAR_12->prevsnap, VAR_15);
  VAR_12->prevsnap_obj = FUNC_17(VAR_10, VAR_6);
  FUNC_16(VAR_10);
  return (0);
 }

 if (VAR_12->seento || !VAR_12->seenfrom) {
  FUNC_16(VAR_10);
  return (0);
 }

 VAR_19 = (FUNC_11(VAR_12->tosnap, VAR_15) == 0);
 if (VAR_19)
  VAR_12->seento = VAR_1;

 if (VAR_12->large_block)
  VAR_16 |= VAR_4;
 if (VAR_12->embed_data)
  VAR_16 |= VAR_3;
 if (VAR_12->compress)
  VAR_16 |= VAR_2;

 if (!VAR_12->doall && !VAR_18 && !VAR_19) {
  if (VAR_12->replicate) {
   char *VAR_23;
   nvlist_t *VAR_24;




   nvlist_t *VAR_25 = FUNC_2(VAR_12->fsavl,
       VAR_10->zfs_dmustats.dds_guid, &VAR_23);

   FUNC_0(0 == FUNC_5(VAR_25,
       "snapprops", &VAR_24));
   FUNC_0(0 == FUNC_5(VAR_24,
       VAR_15, &VAR_24));
   VAR_21 = !FUNC_4(VAR_24, "is_clone_origin");
  } else {
   VAR_21 = VAR_1;
  }
 }





 if (VAR_21 || (VAR_12->filter_cb != ((void*)0) &&
     VAR_12->filter_cb(VAR_10, VAR_12->filter_cb_arg) == VAR_0)) {
  FUNC_16(VAR_10);
  return (0);
 }

 FUNC_3(VAR_10, VAR_12);
 VAR_20 = VAR_12->prevsnap[0] == '\0' &&
     (VAR_12->fromorigin || VAR_12->replicate);

 if (VAR_12->verbose || VAR_12->progress) {
  uint64_t VAR_26 = 0;
  char VAR_27[VAR_5];

  if (VAR_12->prevsnap[0] != '\0') {
   (void) FUNC_14(VAR_27, VAR_10->zfs_name, sizeof (VAR_27));
   *(FUNC_10(VAR_27, '@') + 1) = '\0';
   (void) FUNC_13(VAR_27, VAR_12->prevsnap, sizeof (VAR_27));
  }
  if (FUNC_18(VAR_10, VAR_10->zfs_name,
      VAR_12->prevsnap[0] ? VAR_27 : ((void*)0), VAR_16, &VAR_26) != 0) {
   VAR_26 = 0;
  } else {
   FUNC_9(VAR_22, VAR_10->zfs_name,
       VAR_12->prevsnap[0] ? VAR_12->prevsnap : ((void*)0),
       VAR_26, VAR_12->parsable);
  }
  VAR_12->size += VAR_26;
 }

 if (!VAR_12->dryrun) {




  if (VAR_12->progress) {
   VAR_13.pa_zhp = VAR_10;
   VAR_13.pa_fd = VAR_12->outfd;
   VAR_13.pa_parsable = VAR_12->parsable;
   VAR_13.pa_size = VAR_12->size;
   VAR_13.pa_astitle = VAR_12->progressastitle;

   if ((VAR_17 = FUNC_7(&VAR_14, ((void*)0),
       VAR_7, &VAR_13)) != 0) {
    FUNC_16(VAR_10);
    return (VAR_17);
   }
  }

  VAR_17 = FUNC_1(VAR_10, VAR_12->prevsnap, VAR_12->prevsnap_obj,
      VAR_20, VAR_12->outfd, VAR_16, VAR_12->debugnv);

  if (VAR_12->progress) {
   (void) FUNC_6(VAR_14);
   (void) FUNC_8(VAR_14, ((void*)0));
  }
 }

 (void) FUNC_12(VAR_12->prevsnap, VAR_15);
 VAR_12->prevsnap_obj = FUNC_17(VAR_10, VAR_6);
 FUNC_16(VAR_10);
 return (VAR_17);
}
