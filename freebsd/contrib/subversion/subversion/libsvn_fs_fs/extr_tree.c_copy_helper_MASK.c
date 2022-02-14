
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_20__ {int txn_flags; int rev; TYPE_3__* fs; scalar_t__ is_txn_root; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef scalar_t__ svn_fs_path_change_kind_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_21__ {TYPE_10__* parent; int entry; int * node; } ;
typedef TYPE_2__ parent_path_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;
struct TYPE_22__ {int path; } ;
struct TYPE_19__ {int node; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_3__*,int const*,char const*,int ,scalar_t__,int ,int ,int ,int ,int ,char const*,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int *) ;
 int FUNC_5 (int *,TYPE_3__*,TYPE_3__*,int *) ;
 int FUNC_6 (int **,TYPE_1__*,char const*,int *) ;
 int FUNC_7 (TYPE_10__*,scalar_t__,int *) ;
 int FUNC_8 (TYPE_1__*,TYPE_10__*,char const*,int *) ;
 int FUNC_9 (TYPE_2__**,TYPE_1__*,char const*,int ,int ,int *) ;
 int VAR_5 ;
 int FUNC_10 (TYPE_2__*,int *) ;
 int * FUNC_11 (TYPE_1__*) ;
 int * FUNC_12 (int ,int *,int ) ;
 int * FUNC_13 (int ,int *,int ,int ,int ) ;
 char* FUNC_14 (char const*,int *) ;
 int FUNC_15 (char const*,TYPE_3__*,int ,int ,int *) ;
 int FUNC_16 (int ,int ,int *,int ,int ,char const*,int const*,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (scalar_t__*,int *) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (TYPE_3__*) ;
 scalar_t__ FUNC_21 (int ,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static svn_error_t *
FUNC_22(svn_fs_root_t *VAR_8,
            const char *VAR_9,
            svn_fs_root_t *VAR_10,
            const char *VAR_11,
            svn_boolean_t VAR_12,
            apr_pool_t *VAR_13)
{
  dag_node_t *VAR_14;
  parent_path_t *VAR_15;
  const svn_fs_fs__id_part_t *VAR_16 = FUNC_11(VAR_10);
  svn_boolean_t VAR_17;



  FUNC_0(FUNC_5(&VAR_17, VAR_8->fs, VAR_10->fs, VAR_13));
  if (! VAR_17)
    return FUNC_13
      (VAR_1, ((void*)0),
       FUNC_2("Cannot copy between two different filesystems ('%s' and '%s')"),
       VAR_8->fs->path, VAR_10->fs->path);


  if (VAR_8->is_txn_root)
    return FUNC_12
      (VAR_1, ((void*)0),
       FUNC_2("Copy from mutable tree not currently supported"));

  if (! VAR_10->is_txn_root)
    return FUNC_12
      (VAR_1, ((void*)0),
       FUNC_2("Copy immutable tree not supported"));


  FUNC_0(FUNC_6(&VAR_14, VAR_8, VAR_9, VAR_13));




  FUNC_0(FUNC_9(&VAR_15, VAR_10, VAR_11,
                    VAR_5, VAR_4, VAR_13));



  if (VAR_10->txn_flags & VAR_2)
    FUNC_0(FUNC_15(VAR_11, VAR_10->fs,
                                              VAR_4, VAR_0, VAR_13));





  if (VAR_15->node &&
      FUNC_21(FUNC_17(VAR_14),
                       FUNC_17(VAR_15->node)))
    return VAR_3;

  if (! VAR_8->is_txn_root)
    {
      svn_fs_path_change_kind_t VAR_18;
      dag_node_t *VAR_19;
      const char *VAR_20;
      apr_int64_t VAR_21;
      apr_int64_t VAR_22;



      if (VAR_15->node)
        {
          VAR_18 = VAR_7;
          if (FUNC_20(VAR_10->fs))
            FUNC_0(FUNC_18(&VAR_21,
                                                       VAR_15->node));
        }
      else
        {
          VAR_18 = VAR_6;
          VAR_21 = 0;
        }

      if (FUNC_20(VAR_10->fs))
        FUNC_0(FUNC_18(&VAR_22,
                                                   VAR_14));


      FUNC_0(FUNC_8(VAR_10, VAR_15->parent,
                                VAR_11, VAR_13));


      VAR_20 = FUNC_14(VAR_9, VAR_13);

      FUNC_0(FUNC_16(VAR_15->parent->node,
                                  VAR_15->entry,
                                  VAR_14,
                                  VAR_12,
                                  VAR_8->rev,
                                  VAR_20,
                                  VAR_16, VAR_13));

      if (VAR_18 != VAR_6)
        FUNC_0(FUNC_4(VAR_10,
                                          FUNC_10(VAR_15,
                                                           VAR_13), VAR_13));

      if (FUNC_20(VAR_10->fs)
          && VAR_21 != VAR_22)
        FUNC_0(FUNC_7(VAR_15->parent,
                                            VAR_22 - VAR_21,
                                            VAR_13));


      FUNC_0(FUNC_6(&VAR_19, VAR_10, VAR_11, VAR_13));
      FUNC_0(FUNC_3(VAR_10->fs, VAR_16, VAR_11,
                         FUNC_17(VAR_19), VAR_18, VAR_0,
                         VAR_0, VAR_0, FUNC_19(VAR_14),
                         VAR_8->rev, VAR_20, VAR_13));
    }
  else
    {
      FUNC_1();
    }

  return VAR_3;
}
