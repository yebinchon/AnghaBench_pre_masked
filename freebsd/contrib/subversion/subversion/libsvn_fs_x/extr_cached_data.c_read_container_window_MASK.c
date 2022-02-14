
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef int svn_stringbuf_t ;
typedef int svn_revnum_t ;
struct TYPE_16__ {int idx; TYPE_4__* fs; } ;
typedef TYPE_1__ svn_fs_x__reps_baton_t ;
typedef int svn_fs_x__rep_extractor_t ;
struct TYPE_17__ {int second; int revision; } ;
typedef TYPE_2__ svn_fs_x__pair_cache_key_t ;
struct TYPE_18__ {int reps_container_cache; } ;
typedef TYPE_3__ svn_fs_x__data_t ;
struct TYPE_19__ {TYPE_3__* fsap_data; } ;
typedef TYPE_4__ svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_14__ {int change_set; } ;
struct TYPE_20__ {int current; TYPE_13__* sfile; TYPE_11__ rep_id; int sub_item; int start; } ;
typedef TYPE_5__ rep_state_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;
struct TYPE_15__ {int rfile; TYPE_4__* fs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_13__*) ;
 int FUNC_2 (TYPE_5__*,int *) ;
 int FUNC_3 (void**,TYPE_4__*,TYPE_11__*,int ,int *,int *,int *) ;
 int FUNC_4 (void**,int *,int ,TYPE_2__*,int ,TYPE_1__*,int *) ;
 int FUNC_5 (int **,int *,int ,scalar_t__,int *,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_stringbuf_t **VAR_3,
                      rep_state_t *VAR_4,
                      apr_size_t VAR_5,
                      apr_pool_t *VAR_6,
                      apr_pool_t *VAR_7)
{
  svn_fs_x__rep_extractor_t *VAR_8 = ((void*)0);
  svn_fs_t *VAR_9 = VAR_4->sfile->fs;
  svn_fs_x__data_t *VAR_10 = VAR_9->fsap_data;
  svn_fs_x__pair_cache_key_t VAR_11;
  svn_revnum_t VAR_12 = FUNC_6(VAR_4->rep_id.change_set);
  svn_boolean_t VAR_13 = VAR_0;
  svn_fs_x__reps_baton_t VAR_14;

  FUNC_0(FUNC_2(VAR_4, VAR_7));
  VAR_11.revision = FUNC_7(VAR_9, VAR_12);
  VAR_11.second = VAR_4->start;


  VAR_14.fs = VAR_9;
  VAR_14.idx = VAR_4->sub_item;

  FUNC_0(FUNC_4((void**)&VAR_8, &VAR_13,
                                 VAR_10->reps_container_cache, &VAR_11,
                                 VAR_2, &VAR_14,
                                 VAR_6));


  if (VAR_8 == ((void*)0))
    {
      FUNC_0(FUNC_1(VAR_4->sfile));
      FUNC_0(FUNC_3((void **)&VAR_8, VAR_9, &VAR_4->rep_id,
                         VAR_4->sfile->rfile, ((void*)0),
                         VAR_6, VAR_7));
    }

  FUNC_0(FUNC_5(VAR_3, VAR_8, VAR_4->current, VAR_5,
                                    VAR_6, VAR_7));


  VAR_4->current += (apr_off_t)VAR_5;

  return VAR_1;
}
