
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_14__ ;


struct TYPE_23__ {int pool; TYPE_1__* fs; } ;
typedef TYPE_2__ trail_t ;
struct TYPE_24__ {char* txn; int txn_flags; int fs; int rev; int is_txn_root; } ;
typedef TYPE_3__ svn_fs_root_t ;
typedef int svn_fs_path_change_kind_t ;
typedef int svn_error_t ;
struct copy_args {char* from_path; char* to_path; int preserve_history; TYPE_3__* to_root; TYPE_3__* from_root; } ;
struct TYPE_25__ {TYPE_14__* parent; int entry; int * node; } ;
typedef TYPE_4__ parent_path_t ;
typedef int dag_node_t ;
struct TYPE_26__ {scalar_t__ format; } ;
typedef TYPE_5__ base_fs_data_t ;
typedef scalar_t__ apr_int64_t ;
struct TYPE_22__ {TYPE_5__* fsap_data; } ;
struct TYPE_21__ {int node; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char const*,char const*,int ,int ,int ,int ,TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_14__*,scalar_t__,char const*,TYPE_2__*,int ) ;
 int FUNC_4 (int **,TYPE_3__*,char const*,TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_14__*,char const*,TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_4__**,TYPE_3__*,char const*,int ,char const*,TYPE_2__*,int ) ;
 int VAR_5 ;
 int FUNC_7 (char const*,int ,TYPE_2__*,int ) ;
 int FUNC_8 (int ,int ,int *,int ,int ,char const*,char const*,TYPE_2__*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,scalar_t__*,int *,TYPE_2__*,int ) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static svn_error_t *
FUNC_12(void *VAR_9,
              trail_t *VAR_10)
{
  struct copy_args *VAR_11 = VAR_9;
  svn_fs_root_t *VAR_12 = VAR_11->from_root;
  const char *VAR_13 = VAR_11->from_path;
  svn_fs_root_t *VAR_14 = VAR_11->to_root;
  const char *VAR_15 = VAR_11->to_path;
  dag_node_t *VAR_16;
  parent_path_t *VAR_17;
  const char *VAR_18 = VAR_14->txn;


  FUNC_0(FUNC_4(&VAR_16, VAR_12, VAR_13, VAR_10, VAR_10->pool));




  FUNC_0(FUNC_6(&VAR_17, VAR_14, VAR_15,
                    VAR_5, VAR_18, VAR_10, VAR_10->pool));




  if (VAR_14->txn_flags & VAR_2)
    {
      FUNC_0(FUNC_7(VAR_15, VAR_4,
                                                  VAR_10, VAR_10->pool));
    }





  if ((VAR_17->node)
      && (FUNC_11(FUNC_9(VAR_16),
                                  FUNC_9
                                  (VAR_17->node))
          == VAR_6))
    return VAR_3;

  if (! VAR_12->is_txn_root)
    {
      svn_fs_path_change_kind_t VAR_19;
      dag_node_t *VAR_20;
      apr_int64_t VAR_21 = 0, VAR_22;
      base_fs_data_t *VAR_23 = VAR_10->fs->fsap_data;



      if (VAR_17->node)
        VAR_19 = VAR_8;
      else
        VAR_19 = VAR_7;


      FUNC_0(FUNC_5(VAR_14, VAR_17->parent,
                                VAR_15, VAR_10, VAR_10->pool));



      if (VAR_17->node)
        FUNC_0(FUNC_10(((void*)0),
                                                     &VAR_21,
                                                     VAR_17->node,
                                                     VAR_10, VAR_10->pool));

      FUNC_0(FUNC_8(VAR_17->parent->node,
                                    VAR_17->entry,
                                    VAR_16,
                                    VAR_11->preserve_history,
                                    VAR_12->rev,
                                    VAR_13, VAR_18, VAR_10, VAR_10->pool));



      if (VAR_23->format >= VAR_1)
        {
          FUNC_0(FUNC_10(((void*)0),
                                                       &VAR_22,
                                                       VAR_16, VAR_10,
                                                       VAR_10->pool));
          FUNC_0(FUNC_3
                  (VAR_17->parent,
                   VAR_22 - VAR_21,
                   VAR_18, VAR_10, VAR_10->pool));
        }


      FUNC_0(FUNC_4(&VAR_20, VAR_14, VAR_15, VAR_10, VAR_10->pool));
      FUNC_0(FUNC_2(VAR_14->fs, VAR_18, VAR_15,
                         FUNC_9(VAR_20),
                         VAR_19, VAR_0, VAR_0, VAR_10, VAR_10->pool));
    }
  else
    {
      FUNC_1();
    }

  return VAR_3;
}
