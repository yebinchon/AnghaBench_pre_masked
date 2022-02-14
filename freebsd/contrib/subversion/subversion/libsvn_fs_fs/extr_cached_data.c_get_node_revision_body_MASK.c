
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_27__ {TYPE_6__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_fs_id_t ;
struct TYPE_28__ {int stream; } ;
typedef TYPE_2__ svn_fs_fs__revision_file_t ;
struct TYPE_29__ {int number; int revision; } ;
typedef TYPE_3__ svn_fs_fs__id_part_t ;
struct TYPE_30__ {int apr_err; } ;
typedef TYPE_4__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_31__ {int second; int revision; int member_0; } ;
typedef TYPE_5__ pair_cache_key_t ;
typedef int node_revision_t ;
struct TYPE_32__ {scalar_t__ node_revision_cache; } ;
typedef TYPE_6__ fs_fs_data_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 TYPE_4__* VAR_4 ;
 int FUNC_2 (void**,TYPE_1__*,int ,int ,TYPE_2__*,int *,int *) ;
 TYPE_4__* FUNC_3 (TYPE_1__*,int const*) ;
 int FUNC_4 (TYPE_1__*,int *,int *) ;
 int FUNC_5 (TYPE_2__**,TYPE_1__*,int ,int ,int *) ;
 int FUNC_6 (void**,scalar_t__*,scalar_t__,TYPE_5__*,int *) ;
 int FUNC_7 (scalar_t__,TYPE_5__*,int *,int *) ;
 int FUNC_8 (TYPE_4__*) ;
 TYPE_4__* FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (int const*) ;
 TYPE_3__* FUNC_12 (int const*) ;
 int FUNC_13 (TYPE_1__*,int const*,int *) ;
 int FUNC_14 (int **,int ,int *,int *) ;
 TYPE_4__* FUNC_15 (int **,int ,int,int ,int *) ;
 int FUNC_16 (int *,scalar_t__,int *) ;
 scalar_t__ FUNC_17 (TYPE_1__*) ;

__attribute__((used)) static svn_error_t *
FUNC_18(node_revision_t **VAR_5,
                       svn_fs_t *VAR_6,
                       const svn_fs_id_t *VAR_7,
                       apr_pool_t *VAR_8,
                       apr_pool_t *VAR_9)
{
  svn_error_t *VAR_10;
  svn_boolean_t VAR_11 = VAR_3;
  fs_fs_data_t *VAR_12 = VAR_6->fsap_data;

  if (FUNC_11(VAR_7))
    {
      apr_file_t *VAR_13;



      VAR_10 = FUNC_15(&VAR_13,
                             FUNC_13(VAR_6, VAR_7,
                             VAR_9),
                             VAR_2 | VAR_0, VAR_1,
                             VAR_9);
      if (VAR_10 && FUNC_0(VAR_10->apr_err))
        {
          FUNC_8(VAR_10);
          return FUNC_9(FUNC_3(VAR_6, VAR_7));
        }
      else if (VAR_10)
        {
          return FUNC_9(VAR_10);
        }

      FUNC_1(FUNC_14(VAR_5,
                                      FUNC_16(VAR_13,
                                                               VAR_3,
                                                               VAR_9),
                                      VAR_8, VAR_9));
    }
  else
    {
      svn_fs_fs__revision_file_t *VAR_14;


      const svn_fs_fs__id_part_t *VAR_15 = FUNC_12(VAR_7);
      pair_cache_key_t VAR_16 = { 0 };
      VAR_16.revision = VAR_15->revision;
      VAR_16.second = VAR_15->number;



      if (VAR_12->node_revision_cache)
        {
          FUNC_1(FUNC_6((void **) VAR_5,
                                 &VAR_11,
                                 VAR_12->node_revision_cache,
                                 &VAR_16,
                                 VAR_8));
          if (VAR_11)
            return VAR_4;
        }


      FUNC_1(FUNC_5(&VAR_14, VAR_6,
                                     VAR_15->revision,
                                     VAR_15->number,
                                     VAR_9));

      if (FUNC_17(VAR_6))
        {


          FUNC_1(FUNC_2((void **)VAR_5, VAR_6,
                             VAR_15->revision,
                             VAR_15->number,
                             VAR_14,
                             VAR_8,
                             VAR_9));
        }
      else
        {

          FUNC_1(FUNC_14(VAR_5,
                                          VAR_14->stream,
                                          VAR_8,
                                          VAR_9));
          FUNC_1(FUNC_4(VAR_6, *VAR_5, VAR_9));


          if (VAR_12->node_revision_cache)
            FUNC_1(FUNC_7(VAR_12->node_revision_cache,
                                   &VAR_16,
                                   *VAR_5,
                                   VAR_9));
        }

      FUNC_1(FUNC_10(VAR_14));
    }

  return VAR_4;
}
