
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_x__representation_t ;
struct TYPE_10__ {int rep_cache_db; scalar_t__ rep_sharing_allowed; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
typedef int svn_fs_txn_t ;
struct TYPE_11__ {TYPE_1__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_12__ {int * reps_to_cache; int * reps_pool; int * reps_hash; int * txn; TYPE_2__* fs; int * new_rev_p; } ;
typedef TYPE_3__ commit_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_1 (int *,int,int) ;
 int * FUNC_2 (int *) ;
 int VAR_2 ;
 int * FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,int ,TYPE_3__*,int *) ;
 int FUNC_9 (int ) ;
 int * FUNC_10 (int ,int *) ;
 int * FUNC_11 (TYPE_2__*,int *,int *) ;

svn_error_t *
FUNC_12(svn_revnum_t *VAR_3,
                 svn_fs_t *VAR_4,
                 svn_fs_txn_t *VAR_5,
                 apr_pool_t *VAR_6)
{
  commit_baton_t VAR_7;
  svn_fs_x__data_t *VAR_8 = VAR_4->fsap_data;

  VAR_7.new_rev_p = VAR_3;
  VAR_7.fs = VAR_4;
  VAR_7.txn = VAR_5;

  if (VAR_8->rep_sharing_allowed)
    {
      VAR_7.reps_to_cache = FUNC_1(VAR_6, 5,
                                        sizeof(svn_fs_x__representation_t *));
      VAR_7.reps_hash = FUNC_2(VAR_6);
      VAR_7.reps_pool = VAR_6;
    }
  else
    {
      VAR_7.reps_to_cache = ((void*)0);
      VAR_7.reps_hash = ((void*)0);
      VAR_7.reps_pool = ((void*)0);
    }

  FUNC_0(FUNC_8(VAR_4, VAR_2, &VAR_7, VAR_6));




  if (VAR_8->rep_sharing_allowed)
    {
      svn_error_t *VAR_9;

      FUNC_0(FUNC_7(VAR_4, VAR_6));
      FUNC_0(FUNC_9(VAR_8->rep_cache_db));
      VAR_9 = FUNC_11(VAR_4, VAR_7.reps_to_cache, VAR_6);
      VAR_9 = FUNC_10(VAR_8->rep_cache_db, VAR_9);

      if (FUNC_4(VAR_9, VAR_0))
        {



          return FUNC_5(
              FUNC_3(VAR_9,
                                       FUNC_6(VAR_4)));
        }
      else if (VAR_9)
        return FUNC_5(VAR_9);
    }

  return VAR_1;
}
