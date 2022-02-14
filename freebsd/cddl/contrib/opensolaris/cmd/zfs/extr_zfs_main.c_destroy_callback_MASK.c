
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_2__ {int cb_defer_destroy; scalar_t__ cb_force; int cb_batchedsnaps; scalar_t__ cb_dryrun; scalar_t__ cb_parsable; scalar_t__ cb_verbose; } ;
typedef TYPE_1__ destroy_cbdata_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*) ;
 int * FUNC_5 (char*,char) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 char* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int *,int ) ;

__attribute__((used)) static int
FUNC_12(zfs_handle_t *VAR_5, void *VAR_6)
{
 destroy_cbdata_t *VAR_7 = VAR_6;
 const char *VAR_8 = FUNC_9(VAR_5);

 if (VAR_7->cb_verbose) {
  if (VAR_7->cb_parsable) {
   (void) FUNC_4("destroy\t%s\n", VAR_8);
  } else if (VAR_7->cb_dryrun) {
   (void) FUNC_4(FUNC_3("would destroy %s\n"),
       VAR_8);
  } else {
   (void) FUNC_4(FUNC_3("will destroy %s\n"),
       VAR_8);
  }
 }





 if (FUNC_5(FUNC_9(VAR_5), '/') == ((void*)0) &&
     FUNC_10(VAR_5) == VAR_2) {
  FUNC_6(VAR_5);
  return (0);
 }
 if (VAR_7->cb_dryrun) {
  FUNC_6(VAR_5);
  return (0);
 }







 if (FUNC_10(VAR_5) == VAR_3) {
  FUNC_0(VAR_7->cb_batchedsnaps, VAR_8);
 } else {
  int VAR_9 = FUNC_8(VAR_4,
      VAR_7->cb_batchedsnaps, VAR_0);
  FUNC_2(VAR_7->cb_batchedsnaps);
  VAR_7->cb_batchedsnaps = FUNC_1();

  if (VAR_9 != 0 ||
      FUNC_11(VAR_5, ((void*)0), VAR_7->cb_force ? VAR_1 : 0) != 0 ||
      FUNC_7(VAR_5, VAR_7->cb_defer_destroy) != 0) {
   FUNC_6(VAR_5);
   return (-1);
  }
 }

 FUNC_6(VAR_5);
 return (0);
}
