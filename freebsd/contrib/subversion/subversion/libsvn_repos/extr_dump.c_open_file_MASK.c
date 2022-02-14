
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct edit_baton {int dummy; } ;
struct dir_baton {int cmp_rev; int cmp_path; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (struct edit_baton*,char const*,int ,int ,int ,char const*,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char const*,int *) ;
 char* FUNC_4 (int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char *VAR_5,
          void *VAR_6,
          svn_revnum_t VAR_7,
          apr_pool_t *VAR_8,
          void **VAR_9)
{
  struct dir_baton *VAR_10 = VAR_6;
  struct edit_baton *VAR_11 = VAR_10->edit_baton;
  const char *VAR_12 = ((void*)0);
  svn_revnum_t VAR_13 = VAR_1;



  if (FUNC_0(VAR_10->cmp_path, VAR_10->cmp_rev))
    {
      VAR_12 = FUNC_4(VAR_10->cmp_path,
                                  FUNC_3(VAR_5, VAR_8), VAR_8);
      VAR_13 = VAR_10->cmp_rev;
    }

  FUNC_1(FUNC_2(VAR_11, VAR_5,
                    VAR_4, VAR_3,
                    VAR_0, VAR_12, VAR_13, VAR_8));

  *VAR_9 = ((void*)0);
  return VAR_2;
}
