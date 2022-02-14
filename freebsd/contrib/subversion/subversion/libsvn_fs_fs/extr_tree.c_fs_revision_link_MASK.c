
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int is_txn_root; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char const*,TYPE_1__*,char const*,int ,int *) ;
 int * FUNC_2 (int ) ;
 char* FUNC_3 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_fs_root_t *VAR_1,
                 svn_fs_root_t *VAR_2,
                 const char *VAR_3,
                 apr_pool_t *VAR_4)
{
  if (! VAR_2->is_txn_root)
    return FUNC_0(VAR_2);

  VAR_3 = FUNC_3(VAR_3, VAR_4);
  return FUNC_2(FUNC_1(VAR_1, VAR_3, VAR_2, VAR_3,
                                     VAR_0, VAR_4));
}
