
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_9__ {int fss; int fsavl; int replicate; } ;
typedef TYPE_2__ send_dump_data_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int * FUNC_3 (int ,scalar_t__,char**) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int *,char*,int **) ;
 scalar_t__ FUNC_8 (int *,char*,char**) ;
 int FUNC_9 (int *,char*,scalar_t__*) ;
 int * FUNC_10 (int ,int *) ;
 int FUNC_11 (int *,char*) ;
 scalar_t__ FUNC_12 (int *,int **) ;
 int FUNC_13 (TYPE_1__*) ;
 TYPE_1__* FUNC_14 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_15(zfs_handle_t *VAR_3, void *VAR_4)
{
 send_dump_data_t *VAR_5 = VAR_4;
 nvpair_t *VAR_6;
 boolean_t VAR_7, VAR_8;

 if (!VAR_5->replicate)
  return (FUNC_2(VAR_3, VAR_5));


 for (VAR_6 = FUNC_10(VAR_5->fss, ((void*)0)); VAR_6;
     VAR_6 = FUNC_10(VAR_5->fss, VAR_6)) {
  nvlist_t *VAR_9;
  uint64_t VAR_10 = 0;

  FUNC_0(0 == FUNC_12(VAR_6, &VAR_9));
  (void) FUNC_9(VAR_9, "origin", &VAR_10);
  if (VAR_10 != 0) {
   char *VAR_11;
   nvlist_t *VAR_12 = FUNC_3(VAR_5->fsavl,
       VAR_10, &VAR_11);
   if (VAR_12 != ((void*)0)) {
    nvlist_t *VAR_13;
    FUNC_0(0 == FUNC_7(VAR_12,
        "snapprops", &VAR_13));
    FUNC_0(0 == FUNC_7(VAR_13,
        VAR_11, &VAR_13));
    FUNC_0(0 == FUNC_4(
        VAR_13, "is_clone_origin"));
   }
  }
 }
again:
 VAR_7 = VAR_8 = VAR_0;
 for (VAR_6 = FUNC_10(VAR_5->fss, ((void*)0)); VAR_6;
     VAR_6 = FUNC_10(VAR_5->fss, VAR_6)) {
  nvlist_t *VAR_14, *VAR_15;
  char *VAR_16;
  zfs_handle_t *VAR_17;
  int VAR_18;
  uint64_t VAR_19 = 0;
  uint64_t VAR_20 = 0;

  FUNC_0(FUNC_12(VAR_6, &VAR_14) == 0);
  if (FUNC_6(VAR_14, "sent") == 0)
   continue;

  FUNC_0(FUNC_8(VAR_14, "name", &VAR_16) == 0);
  (void) FUNC_9(VAR_14, "origin", &VAR_19);
  (void) FUNC_9(VAR_14, "parentfromsnap",
      &VAR_20);

  if (VAR_20 != 0) {
   VAR_15 = FUNC_3(VAR_5->fsavl, VAR_20, ((void*)0));
   if (!FUNC_5(VAR_15, "sent")) {

    VAR_7 = VAR_1;
    continue;
   }
  }

  if (VAR_19 != 0) {
   nvlist_t *VAR_21 = FUNC_3(VAR_5->fsavl,
       VAR_19, ((void*)0));
   if (VAR_21 != ((void*)0) &&
       !FUNC_5(VAR_21, "sent")) {




    VAR_7 = VAR_1;
    continue;
   }
  }

  VAR_17 = FUNC_14(VAR_3->zfs_hdl, VAR_16, VAR_2);
  if (VAR_17 == ((void*)0))
   return (-1);
  VAR_18 = FUNC_2(VAR_17, VAR_5);
  FUNC_0(FUNC_4(VAR_14, "sent") == 0);
  VAR_8 = VAR_1;
  FUNC_13(VAR_17);
  if (VAR_18)
   return (VAR_18);
 }
 if (VAR_7) {
  FUNC_1(VAR_8);
  goto again;
 }


 for (VAR_6 = FUNC_10(VAR_5->fss, ((void*)0)); VAR_6;
     VAR_6 = FUNC_10(VAR_5->fss, VAR_6)) {
  nvlist_t *VAR_22;

  FUNC_0(FUNC_12(VAR_6, &VAR_22) == 0);
  (void) FUNC_11(VAR_22, "sent");
 }

 return (0);
}
