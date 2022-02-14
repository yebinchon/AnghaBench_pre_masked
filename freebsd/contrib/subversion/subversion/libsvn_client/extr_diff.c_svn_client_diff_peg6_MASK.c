
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_opt_revision_t ;
typedef int svn_error_t ;
struct TYPE_11__ {int file_deleted; int file_changed; int file_added; int dir_deleted; int dir_changed; int dir_added; } ;
typedef TYPE_1__ svn_diff_tree_processor_t ;
typedef int svn_depth_t ;
struct TYPE_12__ {int wc_ctx; int cancel_baton; int cancel_func; int config; } ;
typedef TYPE_2__ svn_client_ctx_t ;
typedef void* svn_boolean_t ;
struct TYPE_14__ {char const* orig_path_1; char const* orig_path_2; int * anchor; int * session_relpath; } ;
struct TYPE_13__ {char const* header_encoding; char const* relative_to_dir; TYPE_7__ ddi; int wc_ctx; int cancel_baton; int cancel_func; void* show_copies_as_adds; void* no_diff_deleted; void* no_diff_added; void* use_git_diff_format; void* properties_only; void* ignore_properties; void* force_binary; int * errstream; int * outstream; int * pool; int member_0; } ;
typedef TYPE_3__ diff_writer_info_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*,int const*,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *,int *,TYPE_7__*,char const*,char const*,int const*,int const*,int const*,void*,int ,void*,int const*,int ,TYPE_1__ const*,TYPE_2__*,int *,int *) ;
 TYPE_1__* FUNC_4 (TYPE_3__*,int *) ;
 int * FUNC_5 (int ,int *,int ) ;
 int * FUNC_6 (int ) ;

svn_error_t *
FUNC_7(const apr_array_header_t *VAR_9,
                     const char *VAR_10,
                     const svn_opt_revision_t *VAR_11,
                     const svn_opt_revision_t *VAR_12,
                     const svn_opt_revision_t *VAR_13,
                     const char *VAR_14,
                     svn_depth_t VAR_15,
                     svn_boolean_t VAR_16,
                     svn_boolean_t VAR_17,
                     svn_boolean_t VAR_18,
                     svn_boolean_t VAR_19,
                     svn_boolean_t VAR_20,
                     svn_boolean_t VAR_21,
                     svn_boolean_t VAR_22,
                     svn_boolean_t VAR_23,
                     const char *VAR_24,
                     svn_stream_t *VAR_25,
                     svn_stream_t *VAR_26,
                     const apr_array_header_t *VAR_27,
                     svn_client_ctx_t *VAR_28,
                     apr_pool_t *VAR_29)
{
  diff_writer_info_t VAR_30 = { 0 };
  const svn_diff_tree_processor_t *VAR_31;
  svn_diff_tree_processor_t *VAR_32;

  if (VAR_21 && VAR_22)
    return FUNC_5(VAR_1, ((void*)0),
                            FUNC_1("Cannot ignore properties and show only "
                              "properties at the same time"));


  VAR_30.ddi.orig_path_1 = VAR_10;
  VAR_30.ddi.orig_path_2 = VAR_10;

  FUNC_0(FUNC_2(&VAR_30, VAR_9,
                                  VAR_28->config, VAR_29));
  VAR_30.pool = VAR_29;
  VAR_30.outstream = VAR_25;
  VAR_30.errstream = VAR_26;
  VAR_30.header_encoding = VAR_24;

  VAR_30.force_binary = VAR_20;
  VAR_30.ignore_properties = VAR_21;
  VAR_30.properties_only = VAR_22;
  VAR_30.relative_to_dir = VAR_14;
  VAR_30.use_git_diff_format = VAR_23;
  VAR_30.no_diff_added = VAR_17;
  VAR_30.no_diff_deleted = VAR_18;
  VAR_30.show_copies_as_adds = VAR_19;

  VAR_30.cancel_func = VAR_28->cancel_func;
  VAR_30.cancel_baton = VAR_28->cancel_baton;

  VAR_30.wc_ctx = VAR_28->wc_ctx;
  VAR_30.ddi.session_relpath = ((void*)0);
  VAR_30.ddi.anchor = ((void*)0);

  VAR_32 = FUNC_4(&VAR_30, VAR_29);

  VAR_32->dir_added = VAR_3;
  VAR_32->dir_changed = VAR_4;
  VAR_32->dir_deleted = VAR_5;

  VAR_32->file_added = VAR_6;
  VAR_32->file_changed = VAR_7;
  VAR_32->file_deleted = VAR_8;

  VAR_31 = VAR_32;


  if (VAR_19 || VAR_23)
    VAR_16 = VAR_0;

  return FUNC_6(FUNC_3(((void*)0), ((void*)0), &VAR_30.ddi,
                                 VAR_10, VAR_10,
                                 VAR_12, VAR_13,
                                 VAR_11, VAR_0 ,
                                 VAR_15, VAR_16, VAR_27,
                                 VAR_2 ,
                                 VAR_31, VAR_28, VAR_29, VAR_29));
}
