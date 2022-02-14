
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_8__ {int change_dir_prop; int change_file_prop; int close_file; int apply_textdelta; int add_file; int add_directory; int open_root; int set_target_revision; } ;
typedef TYPE_1__ svn_delta_editor_t ;
struct TYPE_9__ {int cancel_baton; int cancel_func; } ;
typedef TYPE_2__ svn_client_ctx_t ;
struct edit_baton {int dummy; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,TYPE_1__*,struct edit_baton*,TYPE_1__ const**,void**,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const svn_delta_editor_t **VAR_9,
               void **VAR_10,
               struct edit_baton *VAR_11,
               svn_client_ctx_t *VAR_12,
               apr_pool_t *VAR_13,
               apr_pool_t *VAR_14)
{
  svn_delta_editor_t *VAR_15 = FUNC_1(VAR_13);

  VAR_15->set_target_revision = VAR_8;
  VAR_15->open_root = VAR_7;
  VAR_15->add_directory = VAR_1;
  VAR_15->add_file = VAR_2;
  VAR_15->apply_textdelta = VAR_3;
  VAR_15->close_file = VAR_6;
  VAR_15->change_file_prop = VAR_5;
  VAR_15->change_dir_prop = VAR_4;

  FUNC_0(FUNC_2(VAR_12->cancel_func,
                                            VAR_12->cancel_baton,
                                            VAR_15,
                                            VAR_11,
                                            VAR_9,
                                            VAR_10,
                                            VAR_13));

  return VAR_0;
}
