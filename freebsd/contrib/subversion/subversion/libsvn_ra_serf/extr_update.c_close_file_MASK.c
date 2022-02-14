
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_9__ {TYPE_1__* editor; int add_props_included; } ;
typedef TYPE_2__ report_context_t ;
struct TYPE_10__ {int pool; int final_md5_checksum; int file_baton; scalar_t__ url; int base_rev; int found_lock_prop; scalar_t__ lock_token; scalar_t__ remove_props; TYPE_4__* parent_dir; } ;
typedef TYPE_3__ file_baton_t ;
struct TYPE_11__ {TYPE_2__* ctx; } ;
typedef TYPE_4__ dir_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;
struct TYPE_8__ {int (* close_file ) (int ,int ,int *) ;int (* change_file_prop ) (int ,int ,int *,int *) ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int *,scalar_t__) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ,int ,int *,int *) ;
 int FUNC_8 (int ,int ,int *,int *) ;
 int FUNC_9 (int ,int ,int *,int *) ;
 int FUNC_10 (int ,int ,int *) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ) ;
 int * FUNC_13 (scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_14(file_baton_t *VAR_3,
           apr_pool_t *VAR_4)
{
  dir_baton_t *VAR_5 = VAR_3->parent_dir;
  report_context_t *VAR_6 = VAR_5->ctx;

  FUNC_0(FUNC_5(VAR_3, VAR_4));


  if (VAR_3->remove_props)
    {
      apr_hash_index_t *VAR_7;

      for (VAR_7 = FUNC_2(VAR_4, VAR_3->remove_props);
           VAR_7;
           VAR_7 = FUNC_3(VAR_7))
        {
          FUNC_0(VAR_6->editor->change_file_prop(VAR_3->file_baton,
                                                FUNC_4(VAR_7),
                                                ((void*)0) ,
                                                VAR_4));
        }
    }
  if (!VAR_6->add_props_included
      && VAR_3->lock_token && !VAR_3->found_lock_prop
      && FUNC_1(VAR_3->base_rev) )
    {
      FUNC_0(VAR_6->editor->change_file_prop(VAR_3->file_baton,
                                            VAR_1,
                                            ((void*)0),
                                            VAR_4));
    }

  if (VAR_3->url)
    {
      FUNC_0(VAR_6->editor->change_file_prop(VAR_3->file_baton,
                                            VAR_2,
                                            FUNC_13(VAR_3->url,
                                                              VAR_4),
                                            VAR_4));
    }


  FUNC_0(VAR_6->editor->close_file(VAR_3->file_baton,
                                  FUNC_11(
                                        VAR_3->final_md5_checksum,
                                        VAR_4),
                                  VAR_4));

  FUNC_12(VAR_3->pool);

  FUNC_0(FUNC_6(VAR_5));

  return VAR_0;
}
