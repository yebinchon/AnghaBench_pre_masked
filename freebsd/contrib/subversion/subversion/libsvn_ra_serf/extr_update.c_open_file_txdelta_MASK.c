
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_9__ {int (* apply_textdelta ) (int ,int ,int ,int **,int *) ;} ;
typedef TYPE_3__ svn_delta_editor_t ;
struct TYPE_10__ {int txdelta_baton; int * txdelta; int pool; int base_md5_checksum; int file_baton; TYPE_2__* parent_dir; } ;
typedef TYPE_4__ file_baton_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {TYPE_1__* ctx; } ;
struct TYPE_7__ {TYPE_3__* editor; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (int ,int ,int ,int **,int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(file_baton_t *VAR_1,
                  apr_pool_t *VAR_2)
{
  const svn_delta_editor_t *VAR_3 = VAR_1->parent_dir->ctx->editor;

  FUNC_1(VAR_1->txdelta == ((void*)0));

  FUNC_0(FUNC_2(VAR_1, VAR_2));



  FUNC_0(VAR_3->apply_textdelta(VAR_1->file_baton,
                                  FUNC_4(
                                                  VAR_1->base_md5_checksum,
                                                  VAR_2),
                                  VAR_1->pool,
                                  &VAR_1->txdelta,
                                  &VAR_1->txdelta_baton));

  return VAR_0;
}
