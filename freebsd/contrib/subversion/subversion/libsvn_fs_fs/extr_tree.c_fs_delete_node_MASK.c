
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int svn_node_kind_t ;
struct TYPE_13__ {int txn_flags; int fs; int is_txn_root; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
struct TYPE_14__ {int node; TYPE_8__* parent; int entry; } ;
typedef TYPE_2__ parent_path_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
struct TYPE_15__ {int node; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int ,int const*,char const*,int ,int ,int ,int ,int ,int ,int ,int *,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int *) ;
 int FUNC_5 (TYPE_8__*,int ,int *) ;
 int FUNC_6 (TYPE_1__*,TYPE_8__*,char const*,int *) ;
 int FUNC_7 (TYPE_2__**,TYPE_1__*,char const*,int ,int ,int *) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int * FUNC_9 (TYPE_1__*) ;
 int * FUNC_10 (int ,int *,int ) ;
 char* FUNC_11 (char const*,int *) ;
 int FUNC_12 (char const*,int ,int ,int ,int *) ;
 int FUNC_13 (int ,int ,int const*,int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int VAR_5 ;

__attribute__((used)) static svn_error_t *
FUNC_18(svn_fs_root_t *VAR_6,
               const char *VAR_7,
               apr_pool_t *VAR_8)
{
  parent_path_t *VAR_9;
  const svn_fs_fs__id_part_t *VAR_10;
  apr_int64_t VAR_11 = 0;
  svn_node_kind_t VAR_12;

  if (! VAR_6->is_txn_root)
    return FUNC_1(VAR_6);

  VAR_10 = FUNC_9(VAR_6);
  VAR_7 = FUNC_11(VAR_7, VAR_8);
  FUNC_0(FUNC_7(&VAR_9, VAR_6, VAR_7, 0, VAR_4, VAR_8));
  VAR_12 = FUNC_16(VAR_9->node);


  if (! VAR_9->parent)
    return FUNC_10(VAR_1, ((void*)0),
                            FUNC_2("The root directory cannot be deleted"));



  if (VAR_6->txn_flags & VAR_2)
    FUNC_0(FUNC_12(VAR_7, VAR_6->fs, VAR_4, VAR_0,
                                              VAR_8));


  FUNC_0(FUNC_6(VAR_6, VAR_9->parent, VAR_7, VAR_8));
  if (FUNC_17(VAR_6->fs))
    FUNC_0(FUNC_15(&VAR_11,
                                               VAR_9->node));
  FUNC_0(FUNC_13(VAR_9->parent->node,
                                VAR_9->entry,
                                VAR_10, VAR_8));


  FUNC_0(FUNC_4(VAR_6, FUNC_8(VAR_9, VAR_8),
                                    VAR_8));


  if (VAR_11 > 0)
    FUNC_0(FUNC_5(VAR_9->parent,
                                        -VAR_11,
                                        VAR_8));


  return FUNC_3(VAR_6->fs, VAR_10, VAR_7,
                    FUNC_14(VAR_9->node),
                    VAR_5, VAR_0, VAR_0, VAR_0, VAR_12,
                    VAR_3, ((void*)0), VAR_8);
}
