
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct file_baton_t {int * pool; int local_abspath; struct dir_baton_t* pb; struct edit_baton_t* eb; } ;
struct edit_baton_t {int anchor_abspath; } ;
struct dir_baton_t {int users; int pool; struct edit_baton_t* eb; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 struct file_baton_t* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *,int ,char const*,int *) ;
 int FUNC_4 (char const*,int *) ;
 int * FUNC_5 (int ,int *,int ,int ) ;
 int * FUNC_6 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_7(const char *VAR_2,
         void *VAR_3,
         const char *VAR_4,
         svn_revnum_t VAR_5,
         apr_pool_t *VAR_6,
         void **VAR_7)
{
  struct dir_baton_t *VAR_8 = VAR_3;
  struct edit_baton_t *VAR_9 = VAR_8->eb;
  apr_pool_t *VAR_10 = FUNC_6(VAR_8->pool);
  struct file_baton_t *VAR_11 = FUNC_2(VAR_10, sizeof(*VAR_11));
  svn_boolean_t VAR_12;

  VAR_8->users++;

  VAR_11->pool = VAR_10;
  VAR_11->eb = VAR_9;
  VAR_11->pb = VAR_8;

  FUNC_0(FUNC_3(&VAR_12, &VAR_11->local_abspath,
                                   VAR_9->anchor_abspath, VAR_2, VAR_11->pool));
  if (! VAR_12)
    {
      return FUNC_5(
                    VAR_0, ((void*)0),
                    FUNC_1("Path '%s' is not in the working copy"),
                    FUNC_4(VAR_2, VAR_11->pool));
    }

  *VAR_7 = VAR_11;
  return VAR_1;
}
