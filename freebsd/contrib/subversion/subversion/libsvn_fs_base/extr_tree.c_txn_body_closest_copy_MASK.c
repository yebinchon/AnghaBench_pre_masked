
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;


struct TYPE_29__ {int pool; } ;
typedef TYPE_1__ trail_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_fs_t ;
struct TYPE_30__ {char* txn; int rev; scalar_t__ is_txn_root; int * fs; } ;
typedef TYPE_2__ svn_fs_root_t ;
typedef int svn_fs_id_t ;
struct TYPE_31__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
struct closest_copy_args {char* path; TYPE_2__** root_p; int pool; int ** path_p; TYPE_2__* root; } ;
struct TYPE_32__ {int * node; } ;
typedef TYPE_4__ parent_path_t ;
typedef int dag_node_t ;
struct TYPE_33__ {int dst_noderev_id; } ;
typedef TYPE_5__ copy_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int * FUNC_1 (int ,char const*) ;
 int FUNC_2 (char const**,TYPE_5__**,int *,TYPE_4__*,TYPE_1__*,int ) ;
 TYPE_3__* FUNC_3 (int **,TYPE_2__*,char const*,TYPE_1__*,int ) ;
 TYPE_2__* FUNC_4 (int *,scalar_t__,int *,int ) ;
 int FUNC_5 (TYPE_4__**,TYPE_2__*,char const*,int ,char const*,TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 TYPE_3__* FUNC_7 (TYPE_3__*) ;
 char* FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int **,int *,int ,TYPE_1__*,int ) ;
 int FUNC_11 (int const**,int *,TYPE_1__*,int ) ;
 int FUNC_12 (scalar_t__*,int *,TYPE_1__*,int ) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int **,int *,scalar_t__,TYPE_1__*,int ) ;
 int FUNC_15 (int const*,int *) ;
 int FUNC_16 (char const**,int *,int ,TYPE_1__*,int ) ;
 int FUNC_17 (TYPE_5__**,int *,char const*,TYPE_1__*,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_18(void *VAR_4, trail_t *VAR_5)
{
  struct closest_copy_args *VAR_6 = VAR_4;
  svn_fs_root_t *VAR_7 = VAR_6->root;
  const char *VAR_8 = VAR_6->path;
  svn_fs_t *VAR_9 = VAR_7->fs;
  parent_path_t *VAR_10;
  const svn_fs_id_t *VAR_11;
  const char *VAR_12, *VAR_13;
  copy_t *VAR_14 = ((void*)0);
  svn_fs_root_t *VAR_15;
  dag_node_t *VAR_16, *VAR_17, *VAR_18;
  const char *VAR_19;
  svn_revnum_t VAR_20, VAR_21;
  svn_error_t *VAR_22;

  *(VAR_6->path_p) = ((void*)0);
  *(VAR_6->root_p) = ((void*)0);


  if (VAR_7->is_txn_root)
    VAR_12 = VAR_7->txn;
  else
    FUNC_0(FUNC_16(&VAR_12, VAR_9, VAR_7->rev,
                                        VAR_5, VAR_5->pool));


  FUNC_0(FUNC_5(&VAR_10, VAR_7, VAR_8, 0, VAR_12,
                    VAR_5, VAR_5->pool));
  VAR_11 = FUNC_9(VAR_10->node);




  FUNC_0(FUNC_2(&VAR_13, &VAR_14, VAR_9, VAR_10,
                                   VAR_5, VAR_5->pool));


  if (((VAR_13)[0] == '0') && ((VAR_13)[1] == '\0'))
    return VAR_2;


  if (! VAR_14)
    FUNC_0(FUNC_17(&VAR_14, VAR_9, VAR_13, VAR_5, VAR_5->pool));


  FUNC_0(FUNC_10(&VAR_17, VAR_9, VAR_14->dst_noderev_id,
                                    VAR_5, VAR_5->pool));
  VAR_19 = FUNC_8(VAR_17);
  FUNC_0(FUNC_12(&VAR_20, VAR_17,
                                        VAR_5, VAR_5->pool));


  FUNC_0(FUNC_14(&VAR_18, VAR_9,
                                         VAR_20, VAR_5, VAR_6->pool));
  VAR_15 = FUNC_4(VAR_9, VAR_20,
                                     VAR_18, VAR_6->pool);





  VAR_22 = FUNC_3(&VAR_16, VAR_15, VAR_8,
                VAR_5, VAR_5->pool);
  if (VAR_22)
    {
      if ((VAR_22->apr_err == VAR_1)
          || (VAR_22->apr_err == VAR_0))
        {
          FUNC_6(VAR_22);
          return VAR_2;
        }
      return FUNC_7(VAR_22);
    }
  if ((FUNC_13(VAR_16) == VAR_3)
      || (! (FUNC_15
             (VAR_11, FUNC_9(VAR_16)))))
    {
      return VAR_2;
    }
  FUNC_0(FUNC_12(&VAR_21, VAR_16,
                                        VAR_5, VAR_5->pool));
  if (VAR_21 == VAR_20)
    {
      const svn_fs_id_t *VAR_23;
      FUNC_0(FUNC_11(&VAR_23,
                                                  VAR_16,
                                                  VAR_5, VAR_5->pool));
      if (! VAR_23)
        return VAR_2;
    }

  *(VAR_6->path_p) = FUNC_1(VAR_6->pool, VAR_19);
  *(VAR_6->root_p) = VAR_15;

  return VAR_2;
}
