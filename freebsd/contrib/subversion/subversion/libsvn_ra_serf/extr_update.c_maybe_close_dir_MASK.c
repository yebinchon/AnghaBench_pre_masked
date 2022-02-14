
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_7__ {TYPE_1__* editor; } ;
typedef TYPE_2__ report_context_t ;
struct TYPE_8__ {int * pool; int dir_baton; TYPE_2__* ctx; int remove_props; scalar_t__ ref_count; struct TYPE_8__* parent_dir; } ;
typedef TYPE_3__ dir_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;
struct TYPE_6__ {int (* close_directory ) (int ,int *) ;int (* change_file_prop ) (int ,int ,int *,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (int ,int ,int *,int *) ;
 int FUNC_6 (int ,int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(dir_baton_t *VAR_1)
{
  apr_pool_t *VAR_2 = VAR_1->pool;
  dir_baton_t *VAR_3 = VAR_1->parent_dir;
  report_context_t *VAR_4 = VAR_1->ctx;

  if (--VAR_1->ref_count)
    {
      return VAR_0;
    }

  FUNC_0(FUNC_4(VAR_1, VAR_1->pool));

  if (VAR_1->remove_props)
    {
      apr_hash_index_t *VAR_5;

      for (VAR_5 = FUNC_1(VAR_2, VAR_1->remove_props);
           VAR_5;
           VAR_5 = FUNC_2(VAR_5))
        {
          FUNC_0(VAR_4->editor->change_file_prop(VAR_1->dir_baton,
                                                FUNC_3(VAR_5),
                                                ((void*)0) ,
                                                VAR_2));
        }
    }

  FUNC_0(VAR_1->ctx->editor->close_directory(VAR_1->dir_baton, VAR_2));

  FUNC_8(VAR_1->pool );

  if (VAR_3)
    return FUNC_7(FUNC_9(VAR_3));
  else
    return VAR_0;
}
