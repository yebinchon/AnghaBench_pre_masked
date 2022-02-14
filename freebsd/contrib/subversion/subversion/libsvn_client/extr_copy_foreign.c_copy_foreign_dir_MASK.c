
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_wc_notify_func2_t ;
typedef int svn_wc_context_t ;
typedef int svn_ra_session_t ;
struct TYPE_10__ {int (* finish_report ) (void*,int *) ;int (* set_path ) (void*,char*,int ,int ,int ,int *,int *) ;} ;
typedef TYPE_1__ svn_ra_reporter3_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
struct TYPE_11__ {int close_file; int apply_textdelta; int change_file_prop; int add_file; int close_directory; int change_dir_prop; int add_directory; int close_edit; int open_root; } ;
typedef TYPE_2__ svn_delta_editor_t ;
struct TYPE_12__ {int rev; } ;
typedef TYPE_3__ svn_client__pathrev_t ;
typedef int svn_cancel_func_t ;
struct edit_baton_t {char const* anchor_abspath; void* notify_baton; int notify_func; int * wc_ctx; int * pool; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (void*,char*,int ,int ,int ,int *,int *) ;
 int FUNC_2 (void*,int *) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int ,void*,TYPE_2__*,struct edit_baton_t*,TYPE_2__ const**,void**,int *) ;
 int VAR_12 ;
 int FUNC_5 (int *,TYPE_1__ const**,void**,int ,char*,int ,int ,int ,TYPE_2__ const*,void*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_ra_session_t *VAR_13,
                 svn_client__pathrev_t *VAR_14,
                 svn_wc_context_t *VAR_15,
                 const char *VAR_16,
                 svn_depth_t VAR_17,
                 svn_wc_notify_func2_t VAR_18,
                 void *VAR_19,
                 svn_cancel_func_t VAR_20,
                 void *VAR_21,
                 apr_pool_t *VAR_22)
{
  struct edit_baton_t VAR_23;
  svn_delta_editor_t *VAR_24 = FUNC_3(VAR_22);
  const svn_delta_editor_t *VAR_25;
  void *VAR_26;
  const svn_ra_reporter3_t *VAR_27;
  void *VAR_28;

  VAR_23.pool = VAR_22;
  VAR_23.anchor_abspath = VAR_16;

  VAR_23.wc_ctx = VAR_15;
  VAR_23.notify_func = VAR_18;
  VAR_23.notify_baton = VAR_19;

  VAR_24->open_root = VAR_7;
  VAR_24->close_edit = VAR_6;

  VAR_24->add_directory = VAR_3;
  VAR_24->change_dir_prop = VAR_4;
  VAR_24->close_directory = VAR_5;

  VAR_24->add_file = VAR_8;
  VAR_24->change_file_prop = VAR_9;
  VAR_24->apply_textdelta = VAR_11;
  VAR_24->close_file = VAR_10;

  FUNC_0(FUNC_4(VAR_20, VAR_21,
                                            VAR_24, &VAR_23,
                                            &VAR_25, &VAR_26,
                                            VAR_22));

  FUNC_0(FUNC_5(VAR_13, &VAR_27, &VAR_28,
                            VAR_14->rev, "", VAR_12,
                            VAR_0, VAR_0, VAR_25, VAR_26,
                            VAR_22, VAR_22));

  FUNC_0(VAR_27->set_path(VAR_28, "", VAR_14->rev, VAR_17,
                             VAR_2 ,
                             ((void*)0), VAR_22));

  FUNC_0(VAR_27->finish_report(VAR_28, VAR_22));

  return VAR_1;
}
