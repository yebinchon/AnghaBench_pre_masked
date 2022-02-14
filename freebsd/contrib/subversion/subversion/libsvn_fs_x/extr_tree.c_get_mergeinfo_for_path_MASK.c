
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int * svn_mergeinfo_t ;
typedef scalar_t__ svn_mergeinfo_inheritance_t ;
struct TYPE_20__ {int node; struct TYPE_20__* parent; } ;
typedef TYPE_2__ svn_fs_x__dag_path_t ;
struct TYPE_21__ {int rev; } ;
typedef TYPE_3__ svn_fs_root_t ;
struct TYPE_22__ {scalar_t__ apr_err; } ;
typedef TYPE_4__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_4__* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_4__*) ;
 TYPE_4__* FUNC_5 (int ,int *,int ,int ,int ) ;
 TYPE_4__* FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int **,int *,int ,int *) ;
 int FUNC_8 (int **,int ,int *,int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (TYPE_2__**,TYPE_3__*,char const*,int ,int ,int *,int *) ;
 TYPE_1__* FUNC_11 (int *,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_12 (int **,int *,int *,int ,int ,scalar_t__,int *,int *) ;
 scalar_t__ VAR_8 ;
 TYPE_4__* FUNC_13 (int **,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_14(svn_mergeinfo_t *VAR_9,
                       svn_fs_root_t *VAR_10,
                       const char *VAR_11,
                       svn_mergeinfo_inheritance_t VAR_12,
                       svn_boolean_t VAR_13,
                       apr_pool_t *VAR_14,
                       apr_pool_t *VAR_15)
{
  svn_fs_x__dag_path_t *VAR_16, *VAR_17;
  apr_hash_t *VAR_18;
  svn_string_t *VAR_19;

  *VAR_9 = ((void*)0);
  FUNC_0(FUNC_10(&VAR_16, VAR_10, VAR_11, 0, VAR_0,
                                 VAR_15, VAR_15));

  if (VAR_12 == VAR_8 && ! VAR_16->parent)
    return VAR_4;

  if (VAR_12 == VAR_8)
    VAR_17 = VAR_16->parent;
  else
    VAR_17 = VAR_16;

  while (VAR_6)
    {
      if (FUNC_9(VAR_17->node))
        break;


      if (VAR_12 == VAR_7)
        {
          return VAR_4;
        }

      VAR_17 = VAR_17->parent;


      if (!VAR_17)
        {
          return VAR_4;
        }
    }

  FUNC_0(FUNC_8(&VAR_18, VAR_17->node,
                                     VAR_15, VAR_15));
  VAR_19 = FUNC_11(VAR_18, VAR_5);
  if (!VAR_19)
    return FUNC_5
      (VAR_1, ((void*)0),
       FUNC_1("Node-revision '%s@%ld' claims to have mergeinfo but doesn't"),
       FUNC_2(VAR_17, VAR_15), VAR_10->rev);


  {



    svn_error_t *VAR_20 = FUNC_13(VAR_9,
                                           VAR_19->data,
                                           VAR_14);
    if (VAR_20)
      {
        if (VAR_20->apr_err == VAR_2)
          {
            FUNC_4(VAR_20);
            VAR_20 = ((void*)0);
            *VAR_9 = ((void*)0);
          }
        return FUNC_6(VAR_20);
      }
  }





  if (VAR_13 && (VAR_17 != VAR_16))
    {
      svn_mergeinfo_t VAR_21;

      FUNC_0(FUNC_12(&VAR_21, *VAR_9,
                                         ((void*)0), VAR_3,
                                         VAR_3, VAR_6,
                                         VAR_15, VAR_15));
      FUNC_0(FUNC_7(VAR_9, VAR_21,
                                             FUNC_3(
                                               VAR_16, VAR_17,
                                               VAR_15),
                                             VAR_14));
    }

  return VAR_4;
}
