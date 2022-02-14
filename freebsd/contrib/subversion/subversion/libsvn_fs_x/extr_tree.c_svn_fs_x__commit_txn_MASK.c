
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_25__ {char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef scalar_t__ svn_revnum_t ;
struct TYPE_26__ {scalar_t__ pack_after_commit; } ;
typedef TYPE_2__ svn_fs_x__data_t ;
struct TYPE_27__ {scalar_t__ base_rev; TYPE_4__* fs; } ;
typedef TYPE_3__ svn_fs_txn_t ;
struct TYPE_28__ {TYPE_2__* fsap_data; } ;
typedef TYPE_4__ svn_fs_t ;
typedef int svn_fs_root_t ;
struct TYPE_29__ {scalar_t__ apr_err; } ;
typedef TYPE_5__ svn_error_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_5__* VAR_3 ;
 TYPE_5__* FUNC_1 (int **,int *,int *,int *) ;
 TYPE_5__* FUNC_2 (int *,int *,TYPE_3__*,TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_5__*) ;
 TYPE_5__* FUNC_4 (scalar_t__*,TYPE_4__*,TYPE_3__*,int *) ;
 TYPE_5__* FUNC_5 (TYPE_4__*,int ,int *,int *,int *,int *,int *) ;
 TYPE_5__* FUNC_6 (int **,TYPE_4__*,scalar_t__,int *) ;
 TYPE_5__* FUNC_7 (scalar_t__*,TYPE_4__*,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 TYPE_1__* FUNC_11 (int *) ;

svn_error_t *
FUNC_12(const char **VAR_4,
                     svn_revnum_t *VAR_5,
                     svn_fs_txn_t *VAR_6,
                     apr_pool_t *VAR_7)
{
  svn_error_t *VAR_8 = VAR_3;
  svn_stringbuf_t *VAR_9 = FUNC_11(VAR_7);
  svn_fs_t *VAR_10 = VAR_6->fs;
  svn_fs_x__data_t *VAR_11 = VAR_10->fsap_data;





  apr_pool_t *VAR_12 = FUNC_9(VAR_7);


  *VAR_5 = VAR_2;
  if (VAR_4)
    *VAR_4 = ((void*)0);

  while (1729)
    {
      svn_revnum_t VAR_13;
      svn_fs_root_t *VAR_14;
      dag_node_t *VAR_15;

      FUNC_8(VAR_12);





      FUNC_0(FUNC_7(&VAR_13, VAR_10, VAR_12));
      FUNC_0(FUNC_6(&VAR_14, VAR_10, VAR_13,
                                      VAR_12));
      FUNC_0(FUNC_1(&VAR_15, VAR_14, VAR_12,
                       VAR_12));





      VAR_8 = FUNC_2(((void*)0), VAR_15, VAR_6, VAR_9, VAR_12);
      if (VAR_8)
        {
          if ((VAR_8->apr_err == VAR_0) && VAR_4)
            *VAR_4 = VAR_9->data;
          goto cleanup;
        }
      VAR_6->base_rev = VAR_13;


      VAR_8 = FUNC_4(VAR_5, VAR_10, VAR_6, VAR_12);
      if (VAR_8 && (VAR_8->apr_err == VAR_1))
        {





          svn_revnum_t VAR_16;
          FUNC_0(FUNC_7(&VAR_16, VAR_10, VAR_12));
          if (VAR_16 == VAR_13)
            goto cleanup;
          else
            FUNC_3(VAR_8);
        }
      else if (VAR_8)
        {
          goto cleanup;
        }
      else
        {
          VAR_8 = VAR_3;
          goto cleanup;
        }
    }

 cleanup:

  FUNC_10(VAR_12);

  FUNC_0(VAR_8);

  if (VAR_11->pack_after_commit)
    {
      FUNC_0(FUNC_5(VAR_10, 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_7));
    }

  return VAR_3;
}
