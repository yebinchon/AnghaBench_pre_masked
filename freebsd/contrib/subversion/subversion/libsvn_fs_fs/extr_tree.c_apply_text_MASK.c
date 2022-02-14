
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
struct text_baton_t {int node; int path; TYPE_2__* root; int stream; int pool; int file_stream; } ;
struct TYPE_7__ {int node; } ;
typedef TYPE_1__ parent_path_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {int txn_flags; int fs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int ,int const*,int ,int ,int ,int ,int ,int ,int ,int ,int *,int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int ,int *) ;
 int FUNC_3 (TYPE_1__**,TYPE_2__*,int ,int ,int ,int *) ;
 int * FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ,int ,int ,int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct text_baton_t*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static svn_error_t *
FUNC_11(void *VAR_8, apr_pool_t *VAR_9)
{
  struct text_baton_t *VAR_10 = VAR_8;
  parent_path_t *VAR_11;
  const svn_fs_fs__id_part_t *VAR_12 = FUNC_4(VAR_10->root);



  FUNC_0(FUNC_3(&VAR_11, VAR_10->root, VAR_10->path, 0, VAR_3, VAR_9));



  if (VAR_10->root->txn_flags & VAR_1)
    FUNC_0(FUNC_5(VAR_10->path, VAR_10->root->fs,
                                              VAR_0, VAR_0, VAR_9));


  FUNC_0(FUNC_2(VAR_10->root, VAR_11, VAR_10->path, VAR_9));
  VAR_10->node = VAR_11->node;


  FUNC_0(FUNC_6(&(VAR_10->file_stream), VAR_10->node,
                                         VAR_10->pool));


  VAR_10->stream = FUNC_8(VAR_10, VAR_10->pool);
  FUNC_10(VAR_10->stream, VAR_7);
  FUNC_9(VAR_10->stream, VAR_6);


  return FUNC_1(VAR_10->root->fs, VAR_12, VAR_10->path,
                    FUNC_7(VAR_10->node),
                    VAR_4, VAR_3, VAR_0, VAR_0,
                    VAR_5, VAR_2, ((void*)0), VAR_9);
}
