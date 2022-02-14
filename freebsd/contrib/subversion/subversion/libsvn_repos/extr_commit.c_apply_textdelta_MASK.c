
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_txdelta_window_handler_t ;
typedef int svn_error_t ;
struct file_baton {int path; scalar_t__ checked_write; struct edit_baton* edit_baton; } ;
struct edit_baton {int txn_root; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct edit_baton*,int ,int ,int ,int *) ;
 int VAR_1 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,void**,int ,int ,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_2,
                const char *VAR_3,
                apr_pool_t *VAR_4,
                svn_txdelta_window_handler_t *VAR_5,
                void **VAR_6)
{
  struct file_baton *VAR_7 = VAR_2;
  struct edit_baton *VAR_8 = VAR_7->edit_baton;

  if (!VAR_7->checked_write)
    {

      FUNC_0(FUNC_1(VAR_8, VAR_7->path, VAR_8->txn_root,
                          VAR_1, VAR_4));
      VAR_7->checked_write = VAR_0;
    }

  return FUNC_2(
          FUNC_3(VAR_5, VAR_6,
                                 VAR_8->txn_root,
                                 VAR_7->path,
                                 VAR_3,
                                 ((void*)0),
                                 VAR_4));
}
