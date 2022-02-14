
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rev_id; int fs; int txn; int is_revision; } ;
typedef TYPE_1__ svnlook_ctxt_t ;
typedef int svn_string_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int **,int ,int ,char const*,int ,int *,int *) ;
 int FUNC_2 (int **,int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_string_t **VAR_2,
             svnlook_ctxt_t *VAR_3,
             const char *VAR_4,
             apr_pool_t *VAR_5)
{
  svn_string_t *VAR_6;


  if (! VAR_3->is_revision)
    FUNC_0(FUNC_2(&VAR_6, VAR_3->txn, VAR_4, VAR_5));


  else
    FUNC_0(FUNC_1(&VAR_6, VAR_3->fs, VAR_3->rev_id,
                                  VAR_4, VAR_1, VAR_5, VAR_5));

  *VAR_2 = VAR_6;

  return VAR_0;
}
