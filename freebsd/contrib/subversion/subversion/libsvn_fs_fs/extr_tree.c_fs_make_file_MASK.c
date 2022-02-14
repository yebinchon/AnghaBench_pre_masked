
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int txn_flags; int fs; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
struct TYPE_13__ {int entry; struct TYPE_13__* parent; scalar_t__ node; } ;
typedef TYPE_2__ parent_path_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_1__*,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (int ,int const*,char const*,int ,int ,int ,int ,int ,int ,int ,int *,int *) ;
 int FUNC_3 (char const*,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int *,int *) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*,char const*,int *) ;
 int FUNC_6 (TYPE_2__**,TYPE_1__*,char const*,int ,int ,int *) ;
 int VAR_4 ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int * FUNC_8 (TYPE_1__*) ;
 char* FUNC_9 (char const*,int *) ;
 int FUNC_10 (char const*,int ,int ,int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,scalar_t__,int ,int ,int const*,int *) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_13(svn_fs_root_t *VAR_7,
             const char *VAR_8,
             apr_pool_t *VAR_9)
{
  parent_path_t *VAR_10;
  dag_node_t *VAR_11;
  const svn_fs_fs__id_part_t *VAR_12 = FUNC_8(VAR_7);

  FUNC_0(FUNC_3(VAR_8, VAR_9));

  VAR_8 = FUNC_9(VAR_8, VAR_9);
  FUNC_0(FUNC_6(&VAR_10, VAR_7, VAR_8, VAR_4,
                    VAR_3, VAR_9));



  if (VAR_10->node)
    return FUNC_1(VAR_7, VAR_8);



  if (VAR_7->txn_flags & VAR_1)
    FUNC_0(FUNC_10(VAR_8, VAR_7->fs, VAR_0, VAR_0,
                                              VAR_9));


  FUNC_0(FUNC_5(VAR_7, VAR_10->parent, VAR_8, VAR_9));
  FUNC_0(FUNC_12(&VAR_11,
                                   VAR_10->parent->node,
                                   FUNC_7(VAR_10->parent,
                                                    VAR_9),
                                   VAR_10->entry,
                                   VAR_12,
                                   VAR_9));


  FUNC_0(FUNC_4(VAR_7, FUNC_7(VAR_10, VAR_9), VAR_11,
                             VAR_9));


  return FUNC_2(VAR_7->fs, VAR_12, VAR_8, FUNC_11(VAR_11),
                    VAR_5, VAR_3, VAR_0, VAR_0,
                    VAR_6, VAR_2, ((void*)0), VAR_9);
}
