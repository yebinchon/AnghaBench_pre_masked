
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zpool_handle_t ;
struct TYPE_2__ {scalar_t__ cb_version; int cb_poolname; void* cb_first; void* cb_unavail; } ;
typedef TYPE_1__ upgrade_cbdata_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef void* boolean_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_5 ;
 char* FUNC_3 (char*) ;
 int VAR_6 ;
 void* VAR_7 ;
 scalar_t__ FUNC_4 (int *,int ,scalar_t__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int ,int) ;
 int VAR_8 ;
 int FUNC_7 (int *,int*) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int) ;
 int * FUNC_10 (int *,int *) ;
 char* FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static int
FUNC_14(zpool_handle_t *VAR_9, void *VAR_10)
{
 upgrade_cbdata_t *VAR_11 = VAR_10;
 nvlist_t *VAR_12;
 uint64_t VAR_13;
 boolean_t VAR_14 = VAR_0;
 int VAR_15;

 if (FUNC_12(VAR_9) == VAR_2) {
  (void) FUNC_2(VAR_8, FUNC_3("cannot upgrade '%s': pool is "
      "currently unavailable.\n\n"), FUNC_11(VAR_9));
  VAR_11->cb_unavail = VAR_1;

  return (0);
 }

 VAR_12 = FUNC_10(VAR_9, ((void*)0));
 FUNC_9(FUNC_4(VAR_12, VAR_4,
     &VAR_13) == 0);

 FUNC_1(FUNC_0(VAR_13));

 if (VAR_13 < VAR_11->cb_version) {
  VAR_11->cb_first = VAR_0;
  VAR_15 = FUNC_8(VAR_9, VAR_11->cb_version);
  if (VAR_15 != 0)
   return (VAR_15);




  VAR_14 = VAR_1;
 }

 if (VAR_11->cb_version >= VAR_3) {
  int VAR_16;
  VAR_15 = FUNC_7(VAR_9, &VAR_16);
  if (VAR_15 != 0)
   return (VAR_15);

  if (VAR_16 > 0) {
   VAR_11->cb_first = VAR_0;
   VAR_14 = VAR_1;
   (void) FUNC_13(VAR_5, VAR_6);
   VAR_7 = VAR_0;
  }
 }

 if (VAR_14) {
  (void) FUNC_5(FUNC_3("\n"));
 }

 return (0);
}
