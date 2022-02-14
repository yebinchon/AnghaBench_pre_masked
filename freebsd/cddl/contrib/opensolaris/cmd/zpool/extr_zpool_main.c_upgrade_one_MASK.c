
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zpool_handle_t ;
struct TYPE_2__ {scalar_t__ cb_version; int cb_poolname; void* cb_unavail; } ;
typedef TYPE_1__ upgrade_cbdata_t ;
typedef scalar_t__ uint64_t ;
typedef void* boolean_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *,int ,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (int *,scalar_t__) ;
 char* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ,int *) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(zpool_handle_t *VAR_7, void *VAR_8)
{
 boolean_t VAR_9 = VAR_0;
 upgrade_cbdata_t *VAR_10 = VAR_8;
 uint64_t VAR_11;
 int VAR_12;

 if (FUNC_9(VAR_7) == VAR_2) {
  (void) FUNC_0(VAR_6, FUNC_1("cannot upgrade '%s': pool is "
      "is currently unavailable.\n\n"), FUNC_7(VAR_7));
  VAR_10->cb_unavail = VAR_1;
  return (1);
 }

 if (FUNC_4("log", FUNC_7(VAR_7)) == 0) {
  (void) FUNC_2(FUNC_1("'log' is now a reserved word\n"
      "Pool 'log' must be renamed using export and import"
      " to upgrade.\n\n"));
  return (1);
 }

 VAR_11 = FUNC_8(VAR_7, VAR_5, ((void*)0));
 if (VAR_11 > VAR_10->cb_version) {
  (void) FUNC_2(FUNC_1("Pool '%s' is already formatted "
      "using more current version '%llu'.\n\n"),
      FUNC_7(VAR_7), VAR_11);
  return (0);
 }

 if (VAR_10->cb_version != VAR_3 && VAR_11 == VAR_10->cb_version) {
  (void) FUNC_2(FUNC_1("Pool '%s' is already formatted "
      "using version %llu.\n\n"), FUNC_7(VAR_7),
      VAR_10->cb_version);
  return (0);
 }

 if (VAR_11 != VAR_10->cb_version) {
  VAR_9 = VAR_1;
  VAR_12 = FUNC_6(VAR_7, VAR_10->cb_version);
  if (VAR_12 != 0)
   return (VAR_12);




 }

 if (VAR_10->cb_version >= VAR_4) {
  int VAR_13 = 0;
  VAR_12 = FUNC_5(VAR_7, &VAR_13);
  if (VAR_12 != 0)
   return (VAR_12);

  if (VAR_13 != 0) {
   VAR_9 = VAR_1;




  } else if (VAR_11 == VAR_3) {
   (void) FUNC_2(FUNC_1("Pool '%s' already has all "
       "supported features enabled.\n\n"),
       FUNC_7(VAR_7));
  }
 }

 if (VAR_9) {
  (void) FUNC_2(FUNC_1("\n"));
 }

 return (0);
}
