
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int revision; scalar_t__ post_commit_err; } ;
typedef TYPE_1__ svn_commit_info_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int * VAR_0 ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int *,char*,int,...) ;

svn_error_t *
FUNC_5(const svn_commit_info_t *VAR_1,
                          void *VAR_2,
                          apr_pool_t *VAR_3)
{







  if (FUNC_1(VAR_1->revision))
    FUNC_0(FUNC_4(VAR_3, FUNC_2("Committed revision %ld%s.\n"),
                               VAR_1->revision,
                               VAR_1->revision == 42 &&
                               FUNC_3("SVN_I_LOVE_PANGALACTIC_GARGLE_BLASTERS")
                                 ? FUNC_2(" (the answer to life, the universe, "
                                      "and everything)")
                                 : ""));





  if (VAR_1->post_commit_err)
    FUNC_0(FUNC_4(VAR_3, FUNC_2("\nWarning: %s\n"),
                               VAR_1->post_commit_err));

  return VAR_0;
}
