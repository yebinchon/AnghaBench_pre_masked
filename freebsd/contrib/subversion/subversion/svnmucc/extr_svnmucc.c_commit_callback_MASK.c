
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {char* author; scalar_t__ post_commit_err; int date; int revision; } ;
typedef TYPE_1__ svn_commit_info_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,scalar_t__,...) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const svn_commit_info_t *VAR_1,
                void *VAR_2,
                apr_pool_t *VAR_3)
{
  FUNC_0(FUNC_2(VAR_3, "r%ld committed by %s at %s\n",
                             VAR_1->revision,
                             (VAR_1->author
                              ? VAR_1->author : "(no author)"),
                             VAR_1->date));





  if (VAR_1->post_commit_err)
    FUNC_0(FUNC_2(VAR_3, FUNC_1("\nWarning: %s\n"),
                               VAR_1->post_commit_err));

  return VAR_0;
}
