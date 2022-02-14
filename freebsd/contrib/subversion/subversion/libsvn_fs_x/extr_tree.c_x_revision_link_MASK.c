
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
 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_1__*) ;
 int * VAR_1 ;
 int FUNC_2 (TYPE_1__*,char const*,TYPE_1__*,char const*,int ,int *) ;
 char* FUNC_3 (char const*,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_fs_root_t *VAR_2,
                svn_fs_root_t *VAR_3,
                const char *VAR_4,
                apr_pool_t *VAR_5)
{
  apr_pool_t *VAR_6;

  if (! VAR_3->is_txn_root)
    return FUNC_1(VAR_3);

  VAR_6 = FUNC_4(VAR_5);

  VAR_4 = FUNC_3(VAR_4, VAR_6);
  FUNC_0(FUNC_2(VAR_2, VAR_4, VAR_3, VAR_4, VAR_0, VAR_6));

  FUNC_5(VAR_6);

  return VAR_1;
}
