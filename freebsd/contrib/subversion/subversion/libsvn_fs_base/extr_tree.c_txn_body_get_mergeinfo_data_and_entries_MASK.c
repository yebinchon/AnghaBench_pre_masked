
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int fs; int pool; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_20__ {int data; } ;
typedef TYPE_2__ svn_string_t ;
typedef int svn_mergeinfo_t ;
typedef int svn_fs_id_t ;
struct TYPE_21__ {int name; int * id; } ;
typedef TYPE_3__ svn_fs_dirent_t ;
struct TYPE_22__ {scalar_t__ apr_err; } ;
typedef TYPE_4__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct get_mergeinfo_data_and_entries_baton {int children_atop_mergeinfo_trees; int receiver_baton; int node_path; int (* receiver ) (int ,int ,int ,int *) ;int * node; } ;
typedef int dag_node_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int ,int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,int *,int *,void**) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,int ,int ,int *) ;
 int FUNC_9 (TYPE_4__*) ;
 TYPE_4__* FUNC_10 (int ,int *,int ,int ) ;
 TYPE_4__* FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (int **,int *,TYPE_1__*,int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (scalar_t__*,int*,int *,TYPE_1__*,int *) ;
 int FUNC_15 (int **,int ,int const*,TYPE_1__*,int *) ;
 int FUNC_16 (int **,int *,TYPE_1__*,int *) ;
 scalar_t__ FUNC_17 (int *) ;
 TYPE_2__* FUNC_18 (int const*,int *) ;
 int FUNC_19 (int ,int ,int *) ;
 TYPE_2__* FUNC_20 (int *,int ) ;
 int FUNC_21 (int ,int ,int ) ;
 TYPE_4__* FUNC_22 (int *,int ,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_23 (int *) ;
 int * FUNC_24 (int ) ;
 int FUNC_25 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_26(void *VAR_5, trail_t *VAR_6)
{
  struct get_mergeinfo_data_and_entries_baton *VAR_7 = VAR_5;
  dag_node_t *VAR_8 = VAR_7->node;
  apr_hash_t *VAR_9;
  apr_hash_index_t *VAR_10;
  apr_pool_t *VAR_11 = FUNC_24(VAR_6->pool);
  apr_pool_t *VAR_12 =
    FUNC_5(VAR_7->children_atop_mergeinfo_trees);

  FUNC_1(FUNC_17(VAR_8) == VAR_4);

  FUNC_0(FUNC_12(&VAR_9, VAR_8, VAR_6, VAR_6->pool));
  for (VAR_10 = FUNC_3(VAR_6->pool, VAR_9); VAR_10; VAR_10 = FUNC_4(VAR_10))
    {
      void *VAR_13;
      svn_fs_dirent_t *VAR_14;
      const svn_fs_id_t *VAR_15;
      dag_node_t *VAR_16;
      svn_boolean_t VAR_17;
      apr_int64_t VAR_18;

      FUNC_23(VAR_11);
      FUNC_6(VAR_10, ((void*)0), ((void*)0), &VAR_13);
      VAR_14 = VAR_13;
      VAR_15 = VAR_14->id;


      FUNC_0(FUNC_15(&VAR_16, VAR_6->fs, VAR_15,
                                        VAR_6, VAR_11));


      FUNC_0(FUNC_14(&VAR_17, &VAR_18,
                                                   VAR_16, VAR_6,
                                                   VAR_11));


      if (VAR_17)
        {
          apr_hash_t *VAR_19;
          svn_mergeinfo_t VAR_20;
          svn_string_t *VAR_21;
          svn_error_t *VAR_22;

          FUNC_0(FUNC_16(&VAR_19, VAR_16,
                                                VAR_6, VAR_11));
          VAR_21 = FUNC_20(VAR_19, VAR_3);
          if (! VAR_21)
            {
              svn_string_t *VAR_23 = FUNC_18(VAR_15,
                                                             VAR_11);
              return FUNC_10(VAR_0, ((void*)0),
                                       FUNC_2("Node-revision '%s' claims to have "
                                         "mergeinfo but doesn't"),
                                       VAR_23->data);
            }



          VAR_22 = FUNC_22(&VAR_20, VAR_21->data,
                                    VAR_11);
          if (VAR_22)
            {
              if (VAR_22->apr_err == VAR_1)
                FUNC_9(VAR_22);
              else
                return FUNC_11(VAR_22);
            }
          else
            {
              FUNC_0(VAR_7->receiver(FUNC_19(VAR_7->node_path,
                                                      VAR_14->name,
                                                      VAR_11),
                                     VAR_20,
                                     VAR_7->receiver_baton,
                                     VAR_11));
            }
        }





      if ((VAR_18 - (VAR_17 ? 1 : 0)) > 0)
        {
          if (FUNC_17(VAR_16) != VAR_4)
            {
              svn_string_t *VAR_24 = FUNC_18(VAR_15,
                                                             VAR_11);
              return FUNC_10(VAR_0, ((void*)0),
                                       FUNC_2("Node-revision '%s' claims to sit "
                                         "atop a tree containing mergeinfo "
                                         "but is not a directory"),
                                       VAR_24->data);
            }
          FUNC_21(VAR_7->children_atop_mergeinfo_trees,
                        FUNC_7(VAR_12, VAR_14->name),
                        FUNC_13(VAR_16, VAR_12));
        }
    }

  FUNC_25(VAR_11);
  return VAR_2;
}
