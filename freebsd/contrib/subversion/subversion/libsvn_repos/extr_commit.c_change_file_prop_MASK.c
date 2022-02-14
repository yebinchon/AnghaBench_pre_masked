
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_error_t ;
struct file_baton {int path; scalar_t__ checked_write; struct edit_baton* edit_baton; } ;
struct edit_baton {int txn_root; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct edit_baton*,int ,int ,int ,int *) ;
 int VAR_1 ;
 int * FUNC_2 (int ,int ,char const*,int const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_2,
                 const char *VAR_3,
                 const svn_string_t *VAR_4,
                 apr_pool_t *VAR_5)
{
  struct file_baton *VAR_6 = VAR_2;
  struct edit_baton *VAR_7 = VAR_6->edit_baton;

  if (!VAR_6->checked_write)
    {

      FUNC_0(FUNC_1(VAR_7, VAR_6->path, VAR_7->txn_root,
                          VAR_1, VAR_5));
      VAR_6->checked_write = VAR_0;
    }

  return FUNC_2(VAR_7->txn_root, VAR_6->path,
                                       VAR_3, VAR_4, VAR_5);
}
