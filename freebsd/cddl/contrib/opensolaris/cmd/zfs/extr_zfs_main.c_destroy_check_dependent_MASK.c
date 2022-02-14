
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_2__ {void* cb_dryrun; void* cb_error; void* cb_first; int * cb_target; scalar_t__ cb_recurse; } ;
typedef TYPE_1__ destroy_cbdata_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 char* FUNC_1 (char*) ;
 int VAR_3 ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*,size_t) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 char* FUNC_7 (scalar_t__) ;

__attribute__((used)) static int
FUNC_8(zfs_handle_t *VAR_4, void *VAR_5)
{
 destroy_cbdata_t *VAR_6 = VAR_5;
 const char *VAR_7 = FUNC_5(VAR_6->cb_target);
 const char *VAR_8 = FUNC_5(VAR_4);

 if (FUNC_3(VAR_7, VAR_8, FUNC_2(VAR_7)) == 0 &&
     (VAR_8[FUNC_2(VAR_7)] == '/' || VAR_8[FUNC_2(VAR_7)] == '@')) {




  if (VAR_6->cb_recurse)
   goto out;

  if (VAR_6->cb_first) {
   (void) FUNC_0(VAR_3, FUNC_1("cannot destroy '%s': "
       "%s has children\n"),
       FUNC_5(VAR_6->cb_target),
       FUNC_7(FUNC_6(VAR_6->cb_target)));
   (void) FUNC_0(VAR_3, "%s", FUNC_1("use '-r' to destroy "
       "the following datasets:\n"));
   VAR_6->cb_first = VAR_0;
   VAR_6->cb_error = VAR_1;
  }

  (void) FUNC_0(VAR_3, "%s\n", FUNC_5(VAR_4));
 } else {




  if (!VAR_6->cb_recurse &&
      FUNC_6(VAR_6->cb_target) != VAR_2)
   goto out;

  if (VAR_6->cb_first) {
   (void) FUNC_0(VAR_3, FUNC_1("cannot destroy '%s': "
       "%s has dependent clones\n"),
       FUNC_5(VAR_6->cb_target),
       FUNC_7(FUNC_6(VAR_6->cb_target)));
   (void) FUNC_0(VAR_3, "%s", FUNC_1("use '-R' to destroy "
       "the following datasets:\n"));
   VAR_6->cb_first = VAR_0;
   VAR_6->cb_error = VAR_1;
   VAR_6->cb_dryrun = VAR_1;
  }

  (void) FUNC_0(VAR_3, "%s\n", FUNC_5(VAR_4));
 }

out:
 FUNC_4(VAR_4);
 return (0);
}
