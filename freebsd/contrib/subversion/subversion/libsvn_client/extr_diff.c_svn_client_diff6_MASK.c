
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int svn_stream_t ;
struct TYPE_18__ {int kind; } ;
typedef TYPE_1__ svn_opt_revision_t ;
typedef int svn_error_t ;
struct TYPE_19__ {int file_deleted; int file_changed; int file_added; int dir_deleted; int dir_changed; int dir_added; } ;
typedef TYPE_2__ svn_diff_tree_processor_t ;
typedef int svn_depth_t ;
struct TYPE_20__ {int wc_ctx; int cancel_baton; int cancel_func; int config; } ;
typedef TYPE_3__ svn_client_ctx_t ;
typedef void* svn_boolean_t ;
struct TYPE_17__ {char const* orig_path_1; char const* orig_path_2; int * anchor; int * session_relpath; } ;
struct TYPE_21__ {char const* header_encoding; char const* relative_to_dir; TYPE_10__ ddi; int wc_ctx; int cancel_baton; int cancel_func; void* show_copies_as_adds; void* no_diff_deleted; void* no_diff_added; void* use_git_diff_format; void* properties_only; void* ignore_properties; void* force_binary; int * errstream; int * outstream; int * pool; int member_0; } ;
typedef TYPE_4__ diff_writer_info_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_4__*,int const*,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *,int *,TYPE_10__*,char const*,char const*,TYPE_1__ const*,TYPE_1__ const*,TYPE_1__*,int ,int ,void*,int const*,int ,TYPE_2__ const*,TYPE_3__*,int *,int *) ;
 TYPE_2__* FUNC_4 (TYPE_4__*,int *) ;
 int * FUNC_5 (int ,int *,int ) ;
 int * FUNC_6 (int ) ;
 int VAR_9 ;

svn_error_t *
FUNC_7(const apr_array_header_t *VAR_10,
                 const char *VAR_11,
                 const svn_opt_revision_t *VAR_12,
                 const char *VAR_13,
                 const svn_opt_revision_t *VAR_14,
                 const char *VAR_15,
                 svn_depth_t VAR_16,
                 svn_boolean_t VAR_17,
                 svn_boolean_t VAR_18,
                 svn_boolean_t VAR_19,
                 svn_boolean_t VAR_20,
                 svn_boolean_t VAR_21,
                 svn_boolean_t VAR_22,
                 svn_boolean_t VAR_23,
                 svn_boolean_t VAR_24,
                 const char *VAR_25,
                 svn_stream_t *VAR_26,
                 svn_stream_t *VAR_27,
                 const apr_array_header_t *VAR_28,
                 svn_client_ctx_t *VAR_29,
                 apr_pool_t *VAR_30)
{
  diff_writer_info_t VAR_31 = { 0 };
  svn_opt_revision_t VAR_32;
  const svn_diff_tree_processor_t *VAR_33;
  svn_diff_tree_processor_t *VAR_34;

  if (VAR_22 && VAR_23)
    return FUNC_5(VAR_1, ((void*)0),
                            FUNC_1("Cannot ignore properties and show only "
                              "properties at the same time"));


  VAR_32.kind = VAR_9;


  VAR_31.ddi.orig_path_1 = VAR_11;
  VAR_31.ddi.orig_path_2 = VAR_13;

  FUNC_0(FUNC_2(&VAR_31, VAR_10,
                                  VAR_29->config, VAR_30));
  VAR_31.pool = VAR_30;
  VAR_31.outstream = VAR_26;
  VAR_31.errstream = VAR_27;
  VAR_31.header_encoding = VAR_25;

  VAR_31.force_binary = VAR_21;
  VAR_31.ignore_properties = VAR_22;
  VAR_31.properties_only = VAR_23;
  VAR_31.relative_to_dir = VAR_15;
  VAR_31.use_git_diff_format = VAR_24;
  VAR_31.no_diff_added = VAR_18;
  VAR_31.no_diff_deleted = VAR_19;
  VAR_31.show_copies_as_adds = VAR_20;

  VAR_31.cancel_func = VAR_29->cancel_func;
  VAR_31.cancel_baton = VAR_29->cancel_baton;

  VAR_31.wc_ctx = VAR_29->wc_ctx;
  VAR_31.ddi.session_relpath = ((void*)0);
  VAR_31.ddi.anchor = ((void*)0);

  VAR_34 = FUNC_4(&VAR_31, VAR_30);

  VAR_34->dir_added = VAR_3;
  VAR_34->dir_changed = VAR_4;
  VAR_34->dir_deleted = VAR_5;

  VAR_34->file_added = VAR_6;
  VAR_34->file_changed = VAR_7;
  VAR_34->file_deleted = VAR_8;

  VAR_33 = VAR_34;


  if (VAR_20 || VAR_24)
    VAR_17 = VAR_0;

  return FUNC_6(FUNC_3(((void*)0), ((void*)0), &VAR_31.ddi,
                                 VAR_11, VAR_13,
                                 VAR_12, VAR_14,
                                 &VAR_32, VAR_2 ,
                                 VAR_16, VAR_17, VAR_28,
                                 VAR_2 ,
                                 VAR_33, VAR_29, VAR_30, VAR_30));
}
