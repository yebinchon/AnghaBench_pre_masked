
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_fs_x__revision_file_t ;
struct TYPE_28__ {int second; int revision; } ;
typedef TYPE_1__ svn_fs_x__pair_cache_key_t ;
typedef int svn_fs_x__noderev_t ;
struct TYPE_29__ {int number; int change_set; } ;
typedef TYPE_2__ svn_fs_x__id_t ;
struct TYPE_30__ {int node_revision_cache; scalar_t__ noderevs_container_cache; } ;
typedef TYPE_3__ svn_fs_x__data_t ;
struct TYPE_31__ {TYPE_3__* fsap_data; } ;
typedef TYPE_4__ svn_fs_t ;
struct TYPE_32__ {int apr_err; } ;
typedef TYPE_5__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 TYPE_5__* VAR_4 ;
 int FUNC_2 (void**,TYPE_4__*,TYPE_2__ const*,int *,int *,int *,int *) ;
 TYPE_5__* FUNC_3 (TYPE_4__*,TYPE_2__ const*) ;
 int FUNC_4 (void**,scalar_t__*,int ,TYPE_1__*,int *) ;
 int FUNC_5 (void**,scalar_t__*,scalar_t__,TYPE_1__*,int ,int *,int *) ;
 int FUNC_6 (TYPE_5__*) ;
 TYPE_5__* FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *,int *,TYPE_4__*,int *,TYPE_2__ const*,int *) ;
 int VAR_5 ;
 int FUNC_13 (TYPE_4__*,int ) ;
 int FUNC_14 (TYPE_4__*,TYPE_2__ const*,int *,int *) ;
 int FUNC_15 (int **,int *,int *,int *) ;
 int FUNC_16 (int **,TYPE_4__*,int ,int *) ;
 TYPE_5__* FUNC_17 (int **,int ,int,int ,int *) ;
 int * FUNC_18 (int *,scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_19(svn_fs_x__noderev_t **VAR_6,
                       svn_fs_t *VAR_7,
                       const svn_fs_x__id_t *VAR_8,
                       apr_pool_t *VAR_9,
                       apr_pool_t *VAR_10)
{
  svn_error_t *VAR_11;
  svn_boolean_t VAR_12 = VAR_3;
  svn_fs_x__data_t *VAR_13 = VAR_7->fsap_data;

  if (FUNC_11(VAR_8->change_set))
    {
      apr_file_t *VAR_14;
      svn_stream_t *VAR_15;



      VAR_11 = FUNC_17(&VAR_14,
                             FUNC_14(VAR_7, VAR_8,
                                                         VAR_10,
                                                         VAR_10),
                             VAR_2 | VAR_0, VAR_1,
                             VAR_10);
      if (VAR_11 && FUNC_0(VAR_11->apr_err))
        {
          FUNC_6(VAR_11);
          return FUNC_7(FUNC_3(VAR_7, VAR_8));
        }
      else if (VAR_11)
        {
          return FUNC_7(VAR_11);
        }


      VAR_15 = FUNC_18(VAR_14, VAR_3, VAR_10);
      FUNC_1(FUNC_15(VAR_6, VAR_15,
                                     VAR_9, VAR_10));
    }
  else
    {
      svn_fs_x__revision_file_t *VAR_16;


      svn_revnum_t VAR_17 = FUNC_9(VAR_8->change_set);
      svn_fs_x__pair_cache_key_t VAR_18;

      FUNC_1(FUNC_16(&VAR_16, VAR_7, VAR_17,
                                      VAR_10));


      if ( FUNC_10(VAR_7, VAR_17)
          && VAR_13->noderevs_container_cache)
        {
          apr_off_t VAR_19;
          apr_uint32_t VAR_20;
          FUNC_1(FUNC_12(&VAR_19, &VAR_20, VAR_7, VAR_16,
                                        VAR_8, VAR_10));
          VAR_18.revision = FUNC_13(VAR_7, VAR_17);
          VAR_18.second = VAR_19;

          FUNC_1(FUNC_5((void **)VAR_6, &VAR_12,
                                         VAR_13->noderevs_container_cache, &VAR_18,
                                         VAR_5,
                                         &VAR_20, VAR_9));
          if (VAR_12)
            return VAR_4;
        }

      VAR_18.revision = VAR_17;
      VAR_18.second = VAR_8->number;



      FUNC_1(FUNC_4((void **) VAR_6,
                             &VAR_12,
                             VAR_13->node_revision_cache,
                             &VAR_18,
                             VAR_9));
      if (VAR_12)
        return VAR_4;



      FUNC_1(FUNC_2((void **)VAR_6, VAR_7,
                         VAR_8,
                         VAR_16,
                         ((void*)0),
                         VAR_9,
                         VAR_10));
      FUNC_1(FUNC_8(VAR_16));
    }

  return VAR_4;
}
