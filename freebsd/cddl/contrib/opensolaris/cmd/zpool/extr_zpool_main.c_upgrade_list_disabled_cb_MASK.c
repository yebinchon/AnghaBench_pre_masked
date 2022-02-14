
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zpool_handle_t ;
struct TYPE_3__ {void* cb_first; void* cb_unavail; } ;
typedef TYPE_1__ upgrade_cbdata_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef void* boolean_t ;
struct TYPE_4__ {char* fi_guid; char* fi_uname; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int *,char const*) ;
 scalar_t__ FUNC_2 (int *,int ,scalar_t__*) ;
 int FUNC_3 (char*,...) ;
 TYPE_2__* VAR_6 ;
 int FUNC_4 (int) ;
 int * FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(zpool_handle_t *VAR_7, void *VAR_8)
{
 upgrade_cbdata_t *VAR_9 = VAR_8;
 nvlist_t *VAR_10;
 uint64_t VAR_11;

 if (FUNC_8(VAR_7) == VAR_2) {




  VAR_9->cb_unavail = VAR_1;
  return (0);
 }

 VAR_10 = FUNC_5(VAR_7, ((void*)0));
 FUNC_4(FUNC_2(VAR_10, VAR_5,
     &VAR_11) == 0);

 if (VAR_11 >= VAR_4) {
  int VAR_12;
  boolean_t VAR_13 = VAR_1;
  nvlist_t *VAR_14 = FUNC_6(VAR_7);

  for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
   const char *VAR_15 = VAR_6[VAR_12].fi_guid;
   const char *VAR_16 = VAR_6[VAR_12].fi_uname;
   if (!FUNC_1(VAR_14, VAR_15)) {
    if (VAR_9->cb_first) {
     (void) FUNC_3(FUNC_0("\nSome "
         "supported features are not "
         "enabled on the following pools. "
         "Once a\nfeature is enabled the "
         "pool may become incompatible with "
         "software\nthat does not support "
         "the feature. See "
         "zpool-features(7) for "
         "details.\n\n"));
     (void) FUNC_3(FUNC_0("POOL  "
         "FEATURE\n"));
     (void) FUNC_3(FUNC_0("------"
         "---------\n"));
     VAR_9->cb_first = VAR_0;
    }

    if (VAR_13) {
     (void) FUNC_3(FUNC_0("%s\n"),
         FUNC_7(VAR_7));
     VAR_13 = VAR_0;
    }

    (void) FUNC_3(FUNC_0("      %s\n"), VAR_16);
   }
  }
 }

 return (0);
}
