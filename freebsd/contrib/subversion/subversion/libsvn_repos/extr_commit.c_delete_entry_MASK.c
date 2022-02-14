
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_repos_authz_access_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct edit_baton {int txn_root; int base_path; } ;
struct dir_baton {char const* path; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct edit_baton*,char const*,int ,int ,int *) ;
 int FUNC_3 (struct edit_baton*,char const*,scalar_t__,int ,int ) ;
 int FUNC_4 (char const*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__*,int ,char const*,int *) ;
 int FUNC_7 (int ,char const*,int *) ;
 int FUNC_8 (int *,int ,char const*,int *) ;
 char* FUNC_9 (int ,int ,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_10 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(const char *VAR_4,
             svn_revnum_t VAR_5,
             void *VAR_6,
             apr_pool_t *VAR_7)
{
  struct dir_baton *VAR_8 = VAR_6;
  struct edit_baton *VAR_9 = VAR_8->edit_baton;
  svn_node_kind_t VAR_10;
  svn_repos_authz_access_t VAR_11 = VAR_1;
  const char *VAR_12;

  VAR_12 = FUNC_9(VAR_9->base_path,
                               FUNC_10(VAR_4, VAR_7), VAR_7);


  FUNC_0(FUNC_6(&VAR_10, VAR_9->txn_root, VAR_12, VAR_7));



  if (VAR_10 == VAR_2)
    VAR_11 |= VAR_0;
  FUNC_0(FUNC_2(VAR_9, VAR_12, VAR_9->txn_root,
                      VAR_11, VAR_7));
  FUNC_0(FUNC_2(VAR_9, VAR_8->path, VAR_9->txn_root,
                      VAR_1, VAR_7));


  if (VAR_10 == VAR_3)
    return FUNC_5(FUNC_4(VAR_12, VAR_10));



  if (FUNC_1(VAR_5))
    {
      svn_revnum_t VAR_13;

      FUNC_0(FUNC_8(&VAR_13, VAR_9->txn_root, VAR_12, VAR_7));
      FUNC_0(FUNC_3(VAR_9, VAR_12, VAR_10, VAR_5, VAR_13));
    }




  return FUNC_5(FUNC_7(VAR_9->txn_root, VAR_12, VAR_7));
}
