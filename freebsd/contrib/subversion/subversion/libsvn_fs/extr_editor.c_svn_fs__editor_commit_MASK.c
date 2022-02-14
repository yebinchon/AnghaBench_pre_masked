
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_txn_t ;
struct TYPE_13__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_editor_t ;
struct edit_baton {int * txn; scalar_t__ completed; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* VAR_3 ;
 char* FUNC_2 (int *,char const*) ;
 TYPE_1__* FUNC_3 (int *) ;
 struct edit_baton* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_7 (int ,int *,int *) ;
 TYPE_1__* FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *,int *) ;
 TYPE_1__* FUNC_10 (char const**,int *,int *,int *) ;

svn_error_t *
FUNC_11(svn_revnum_t *VAR_4,
                      svn_error_t **VAR_5,
                      const char **VAR_6,
                      svn_editor_t *VAR_7,
                      apr_pool_t *VAR_8,
                      apr_pool_t *VAR_9)
{
  struct edit_baton *VAR_10 = FUNC_4(VAR_7);
  const char *VAR_11;
  svn_error_t *VAR_12 = ((void*)0);


  if (VAR_10->completed)
    return FUNC_7(VAR_1,
                            ((void*)0), ((void*)0));

  *VAR_4 = VAR_2;
  *VAR_5 = ((void*)0);
  *VAR_6 = ((void*)0);



  VAR_12 = FUNC_3(VAR_7);
  if (VAR_12)
    {
      svn_fs_txn_t *VAR_13 = VAR_10->txn;

      VAR_10->txn = ((void*)0);
      return FUNC_8(FUNC_6(
                  VAR_12,
                  FUNC_9(VAR_13, VAR_9)));
    }





  VAR_12 = FUNC_10(&VAR_11,
                          VAR_4,
                          VAR_10->txn,
                          VAR_9);
  if (FUNC_1(*VAR_4))
    {
      if (VAR_12)
        {



          *VAR_5 = VAR_12;
          VAR_12 = VAR_3;
        }

    }
  else
    {
      FUNC_0(VAR_12 != ((void*)0));
      if (VAR_12->apr_err == VAR_0)
        {



          *VAR_6 = FUNC_2(VAR_8, VAR_11);



          FUNC_5(VAR_12);
          VAR_12 = VAR_3;
        }




      VAR_12 = FUNC_6(
        VAR_12,
        FUNC_9(VAR_10->txn, VAR_9));
    }


  VAR_10->txn = ((void*)0);

  return FUNC_8(VAR_12);
}
