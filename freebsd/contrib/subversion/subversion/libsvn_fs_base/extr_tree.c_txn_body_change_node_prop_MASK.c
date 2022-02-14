
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;


struct TYPE_20__ {int pool; TYPE_1__* fs; } ;
typedef TYPE_2__ trail_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct change_node_prop_args {int path; TYPE_11__* root; int * value; int name; } ;
struct TYPE_21__ {int node; scalar_t__ parent; } ;
typedef TYPE_3__ parent_path_t ;
struct TYPE_22__ {scalar_t__ format; } ;
typedef TYPE_4__ base_fs_data_t ;
typedef int apr_hash_t ;
struct TYPE_19__ {TYPE_4__* fsap_data; } ;
struct TYPE_18__ {char* txn; int txn_flags; int fs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int ,char const*,int ,int ,int ,int ,int ,TYPE_2__*,int ) ;
 int FUNC_2 (scalar_t__,int,char const*,TYPE_2__*,int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (TYPE_11__*,TYPE_3__*,int ,TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_3__**,TYPE_11__*,int ,int ,char const*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,TYPE_2__*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int **,int ,TYPE_2__*,int ) ;
 int FUNC_10 (int ,scalar_t__,scalar_t__*,char const*,TYPE_2__*,int ) ;
 int FUNC_11 (int ,int *,char const*,TYPE_2__*,int ) ;
 int VAR_6 ;
 int FUNC_12 (int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_13(void *VAR_7,
                          trail_t *VAR_8)
{
  struct change_node_prop_args *VAR_9 = VAR_7;
  parent_path_t *VAR_10;
  apr_hash_t *VAR_11;
  const char *VAR_12 = VAR_9->root->txn;
  base_fs_data_t *VAR_13 = VAR_8->fs->fsap_data;

  FUNC_0(FUNC_5(&VAR_10, VAR_9->root, VAR_9->path, 0, VAR_12,
                    VAR_8, VAR_8->pool));



  if (VAR_9->root->txn_flags & VAR_2)
    FUNC_0(FUNC_7
            (VAR_9->path, VAR_0, VAR_8, VAR_8->pool));

  FUNC_0(FUNC_4(VAR_9->root, VAR_10, VAR_9->path,
                            VAR_8, VAR_8->pool));
  FUNC_0(FUNC_9(&VAR_11, VAR_10->node,
                                        VAR_8, VAR_8->pool));


  if ((! VAR_11) && (! VAR_9->value))
    return VAR_3;


  if (! VAR_11)
    VAR_11 = FUNC_3(VAR_8->pool);


  FUNC_12(VAR_11, VAR_9->name, VAR_9->value);


  FUNC_0(FUNC_11(VAR_10->node, VAR_11,
                                        VAR_12, VAR_8, VAR_8->pool));







  if ((VAR_13->format >= VAR_1)
      && (FUNC_6(VAR_9->name, VAR_4) == 0))
    {
      svn_boolean_t VAR_14, VAR_15 = VAR_9->value != ((void*)0);


      FUNC_0(FUNC_10(VAR_10->node,
                                                 VAR_15,
                                                 &VAR_14, VAR_12,
                                                 VAR_8, VAR_8->pool));



      if (VAR_10->parent && ((! VAR_14) != (! VAR_15)))
        FUNC_0(FUNC_2(VAR_10->parent,
                                               VAR_15 ? 1 : -1,
                                               VAR_12, VAR_8, VAR_8->pool));
    }


  return FUNC_1(VAR_9->root->fs, VAR_12,
                    VAR_9->path, FUNC_8(VAR_10->node),
                    VAR_6, VAR_0, VAR_5, VAR_8,
                    VAR_8->pool);
}
