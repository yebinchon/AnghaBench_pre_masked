
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int txn_name; int txn; scalar_t__ rev_id; scalar_t__ is_revision; } ;
typedef TYPE_1__ svnlook_ctxt_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_revnum_t *VAR_2, svnlook_ctxt_t *VAR_3, apr_pool_t *VAR_4)
{
  if (VAR_3->is_revision)
    {
      *VAR_2 = VAR_3->rev_id - 1;
    }
  else
    {
      *VAR_2 = FUNC_3(VAR_3->txn);

      if (! FUNC_0(*VAR_2))
        return FUNC_2
          (VAR_0, ((void*)0),
           FUNC_1("Transaction '%s' is not based on a revision; how odd"),
           VAR_3->txn_name);
    }
  return VAR_1;
}
