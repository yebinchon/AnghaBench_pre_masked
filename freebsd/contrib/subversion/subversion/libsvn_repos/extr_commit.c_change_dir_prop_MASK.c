
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct edit_baton {int txn_root; } ;
struct dir_baton {int path; scalar_t__ checked_write; int base_rev; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct edit_baton*,int ,int ,int ,int *) ;
 int FUNC_3 (struct edit_baton*,int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (int *,int ,int ,int *) ;
 int VAR_2 ;
 int * FUNC_5 (int ,int ,char const*,int const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(void *VAR_3,
                const char *VAR_4,
                const svn_string_t *VAR_5,
                apr_pool_t *VAR_6)
{
  struct dir_baton *VAR_7 = VAR_3;
  struct edit_baton *VAR_8 = VAR_7->edit_baton;


  if (!VAR_7->checked_write)
    {
      FUNC_0(FUNC_2(VAR_8, VAR_7->path, VAR_8->txn_root,
                          VAR_1, VAR_6));

      if (FUNC_1(VAR_7->base_rev))
        {


          svn_revnum_t VAR_9;
          FUNC_0(FUNC_4(&VAR_9,
                                          VAR_8->txn_root, VAR_7->path, VAR_6));

          FUNC_0(FUNC_3(VAR_8, VAR_7->path, VAR_2,
                                    VAR_7->base_rev, VAR_9));
        }

      VAR_7->checked_write = VAR_0;
    }

  return FUNC_5(VAR_8->txn_root, VAR_7->path,
                                       VAR_4, VAR_5, VAR_6);
}
