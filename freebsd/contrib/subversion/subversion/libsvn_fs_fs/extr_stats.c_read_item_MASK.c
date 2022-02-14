
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t len; scalar_t__* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
struct TYPE_9__ {int file; int block_size; } ;
typedef TYPE_2__ svn_fs_fs__revision_file_t ;
struct TYPE_10__ {size_t size; int offset; } ;
typedef TYPE_3__ svn_fs_fs__p2l_entry_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ,int *,int ,int *) ;
 int FUNC_2 (int ,scalar_t__*,size_t,int *,int *,int *) ;
 TYPE_1__* FUNC_3 (size_t,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_stringbuf_t **VAR_1,
          svn_fs_fs__revision_file_t *VAR_2,
          svn_fs_fs__p2l_entry_t *VAR_3,
          apr_pool_t *VAR_4,
          apr_pool_t *VAR_5)
{
  svn_stringbuf_t *VAR_6 = FUNC_3(VAR_3->size,
                                                      VAR_4);
  VAR_6->len = VAR_3->size;
  VAR_6->data[VAR_6->len] = 0;

  FUNC_0(FUNC_1(VAR_2->file, VAR_2->block_size,
                                   ((void*)0), VAR_3->offset, VAR_5));
  FUNC_0(FUNC_2(VAR_2->file, VAR_6->data, VAR_6->len,
                                 ((void*)0), ((void*)0), VAR_5));

  *VAR_1 = VAR_6;

  return VAR_0;
}
