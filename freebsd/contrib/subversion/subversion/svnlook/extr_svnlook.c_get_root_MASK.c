
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int txn; int rev_id; int fs; scalar_t__ is_revision; } ;
typedef TYPE_1__ svnlook_ctxt_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int **,int ,int ,int *) ;
 int FUNC_3 (int **,int ,int *) ;
 int FUNC_4 (int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_fs_root_t **VAR_1,
         svnlook_ctxt_t *VAR_2,
         apr_pool_t *VAR_3)
{

  if (VAR_2->is_revision)
    {


      if (! FUNC_1(VAR_2->rev_id))
        FUNC_0(FUNC_4(&(VAR_2->rev_id), VAR_2->fs, VAR_3));

      FUNC_0(FUNC_2(VAR_1, VAR_2->fs, VAR_2->rev_id, VAR_3));
    }
  else
    {
      FUNC_0(FUNC_3(VAR_1, VAR_2->txn, VAR_3));
    }

  return VAR_0;
}
