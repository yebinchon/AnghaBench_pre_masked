
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {int pool; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_22__ {int data; } ;
typedef TYPE_2__ svn_string_t ;
typedef int svn_mergeinfo_t ;
struct TYPE_23__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct get_mergeinfo_for_path_baton {scalar_t__ inherit; int pool; int ** mergeinfo; scalar_t__ adjust_inherited_mergeinfo; int path; int root; } ;
struct TYPE_24__ {struct TYPE_24__* parent; int * node; } ;
typedef TYPE_4__ parent_path_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_4__**,int ,int ,int ,int *,TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_4__*,TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (int ,int *,int ,int ) ;
 TYPE_3__* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int **,int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__*,int *,int *,TYPE_1__*,int *) ;
 int FUNC_10 (int **,int *,TYPE_1__*,int ) ;
 TYPE_2__* FUNC_11 (int ,int ) ;
 TYPE_2__* FUNC_12 (int *,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_13 (int *,int *,int *,int ,int ,scalar_t__,int ,int ) ;
 scalar_t__ VAR_7 ;
 TYPE_3__* FUNC_14 (int **,int ,int ) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (int ) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_18(void *VAR_8, trail_t *VAR_9)
{
  struct get_mergeinfo_for_path_baton *VAR_10 = VAR_8;
  parent_path_t *VAR_11, *VAR_12;
  apr_hash_t *VAR_13;
  svn_string_t *VAR_14;
  apr_pool_t *VAR_15;
  dag_node_t *VAR_16 = ((void*)0);

  *(VAR_10->mergeinfo) = ((void*)0);

  FUNC_0(FUNC_2(&VAR_11, VAR_10->root, VAR_10->path, 0,
                    ((void*)0), VAR_9, VAR_9->pool));


  VAR_12 = VAR_11;
  if (VAR_10->inherit == VAR_7)
    {
      if (! VAR_11->parent)
        return VAR_3;
      VAR_12 = VAR_11->parent;
    }

  VAR_15 = FUNC_16(VAR_9->pool);
  while (VAR_5)
    {
      svn_boolean_t VAR_17;
      apr_int64_t VAR_18;

      FUNC_15(VAR_15);

      VAR_16 = VAR_12->node;
      FUNC_0(FUNC_9(&VAR_17, &VAR_18,
                                                   VAR_16, VAR_9, VAR_15));
      if (VAR_17)
        break;


      if (VAR_10->inherit == VAR_6)
        {
          FUNC_17(VAR_15);
          return VAR_3;
        }

      VAR_12 = VAR_12->parent;


      if (! VAR_12)
        {
          FUNC_17(VAR_15);
          return VAR_3;
        }
    }
  FUNC_17(VAR_15);

  FUNC_0(FUNC_10(&VAR_13, VAR_16, VAR_9, VAR_9->pool));
  VAR_14 = FUNC_12(VAR_13, VAR_4);
  if (! VAR_14)
    {
      svn_string_t *VAR_19 =
        FUNC_11(FUNC_8(VAR_16), VAR_9->pool);
      return FUNC_5(VAR_0, ((void*)0),
                               FUNC_1("Node-revision '%s' claims to have "
                                 "mergeinfo but doesn't"), VAR_19->data);
    }


  {



    svn_error_t *VAR_20 = FUNC_14(VAR_10->mergeinfo,
                                           VAR_14->data,
                                           VAR_10->pool);
    if (VAR_20)
      {
        if (VAR_20->apr_err == VAR_1)
          {
            FUNC_4(VAR_20);
            VAR_20 = ((void*)0);
            VAR_10->mergeinfo = ((void*)0);
          }
        return FUNC_6(VAR_20);
      }
  }





  if (VAR_10->adjust_inherited_mergeinfo && (VAR_12 != VAR_11))
    {
      svn_mergeinfo_t VAR_21;

      FUNC_0(FUNC_13(&VAR_21, *VAR_10->mergeinfo,
                                         ((void*)0), VAR_2,
                                         VAR_2, VAR_5,
                                         VAR_9->pool, VAR_9->pool));
      FUNC_0(FUNC_7(VAR_10->mergeinfo, VAR_21,
                                             FUNC_3(
                                               VAR_11, VAR_12,
                                               VAR_9->pool),
                                             VAR_10->pool));
    }

  return VAR_3;
}
