
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct edit_baton {TYPE_1__* repos; int commit_callback_baton; int commit_callback; int * txn; int txn_aborted; int * txn_root; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int fs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ,char const*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int ,int *,char*) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (int *,int *) ;
 int * FUNC_9 (char const**,TYPE_1__*,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(void *VAR_3,
           apr_pool_t *VAR_4)
{
  struct edit_baton *VAR_5 = VAR_3;
  svn_revnum_t VAR_6 = VAR_1;
  svn_error_t *VAR_7;
  const char *VAR_8;
  const char *VAR_9 = ((void*)0);




  if (! VAR_5->txn)
    return FUNC_4(VAR_0, ((void*)0),
                            "No valid transaction supplied to close_edit");


  VAR_7 = FUNC_9(&VAR_8, VAR_5->repos,
                                &VAR_6, VAR_5->txn, VAR_4);

  if (FUNC_0(VAR_6))
    {




      if (VAR_5->txn_root)
        FUNC_7(VAR_5->txn_root);

      if (VAR_7)
        {




          VAR_9 = FUNC_8(VAR_7, VAR_4);
          FUNC_2(VAR_7);
        }





      VAR_5->txn = ((void*)0);
      VAR_5->txn_root = ((void*)0);
    }
  else
    {
      VAR_5->txn_aborted = VAR_2;

      return FUNC_5(
                FUNC_3(VAR_7,
                                         FUNC_6(VAR_5->txn, VAR_4)));
    }
  return FUNC_5(FUNC_1(VAR_5->commit_callback,
                                          VAR_5->commit_callback_baton,
                                          VAR_5->repos->fs,
                                          VAR_6,
                                          VAR_9,
                                          VAR_4));
}
