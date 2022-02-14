
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int pool; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_17__ {char* txn; int txn_flags; int fs; } ;
typedef TYPE_2__ svn_fs_root_t ;
typedef int svn_error_t ;
struct make_file_args {char* path; TYPE_2__* root; } ;
struct TYPE_18__ {int entry; TYPE_7__* parent; scalar_t__ node; } ;
typedef TYPE_3__ parent_path_t ;
typedef int dag_node_t ;
struct TYPE_19__ {int node; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_2__*,char const*) ;
 int VAR_2 ;
 int * FUNC_2 (int ,char const*,char const*,int ,int ,int ,int ,TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_7__*,char const*,TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_3__**,TYPE_2__*,char const*,int ,char const*,TYPE_1__*,int ) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_7__*,int ) ;
 int FUNC_6 (char const*,int ,TYPE_1__*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int ,int ,char const*,TYPE_1__*,int ) ;
 int VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_9(void *VAR_5,
                   trail_t *VAR_6)
{
  struct make_file_args *VAR_7 = VAR_5;
  svn_fs_root_t *VAR_8 = VAR_7->root;
  const char *VAR_9 = VAR_7->path;
  parent_path_t *VAR_10;
  dag_node_t *VAR_11;
  const char *VAR_12 = VAR_8->txn;

  FUNC_0(FUNC_4(&VAR_10, VAR_8, VAR_9, VAR_3,
                    VAR_12, VAR_6, VAR_6->pool));



  if (VAR_10->node)
    return FUNC_1(VAR_8, VAR_9);




  if (VAR_7->root->txn_flags & VAR_1)
    {
      FUNC_0(FUNC_6(VAR_9, VAR_2,
                                                  VAR_6, VAR_6->pool));
    }


  FUNC_0(FUNC_3(VAR_8, VAR_10->parent, VAR_9,
                            VAR_6, VAR_6->pool));
  FUNC_0(FUNC_8(&VAR_11,
                                     VAR_10->parent->node,
                                     FUNC_5(VAR_10->parent,
                                                      VAR_6->pool),
                                     VAR_10->entry,
                                     VAR_12,
                                     VAR_6, VAR_6->pool));


  return FUNC_2(VAR_8->fs, VAR_12, VAR_9,
                    FUNC_7(VAR_11),
                    VAR_4, VAR_2, VAR_0,
                    VAR_6, VAR_6->pool);
}
