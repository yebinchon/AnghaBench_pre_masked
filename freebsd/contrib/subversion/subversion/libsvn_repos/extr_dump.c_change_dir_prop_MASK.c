
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_error_t ;
struct edit_baton {int dummy; } ;
struct dir_baton {scalar_t__ written_out; int cmp_rev; int cmp_path; int path; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct edit_baton*,int ,int ,int ,int ,int ,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_5,
                const char *VAR_6,
                const svn_string_t *VAR_7,
                apr_pool_t *VAR_8)
{
  struct dir_baton *VAR_9 = VAR_5;
  struct edit_baton *VAR_10 = VAR_9->edit_baton;







  if (! VAR_9->written_out)
    {
      FUNC_0(FUNC_1(VAR_10, VAR_9->path,
                        VAR_4, VAR_3,


                        VAR_0, VAR_9->cmp_path, VAR_9->cmp_rev, VAR_8));
      VAR_9->written_out = VAR_2;
    }
  return VAR_1;
}
