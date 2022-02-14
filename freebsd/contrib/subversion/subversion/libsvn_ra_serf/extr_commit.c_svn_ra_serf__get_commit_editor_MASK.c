
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* priv; } ;
typedef TYPE_1__ svn_ra_session_t ;
struct TYPE_14__ {int shim_callbacks; int session_url_str; scalar_t__ supports_put_result_checksum; int useragent; } ;
typedef TYPE_2__ svn_ra_serf__session_t ;
typedef int svn_error_t ;
struct TYPE_15__ {int apply_textdelta_stream; int abort_edit; int close_edit; int close_file; int change_file_prop; int apply_textdelta; int open_file; int add_file; int close_directory; int change_dir_prop; int open_directory; int add_directory; int delete_entry; int open_root; } ;
typedef TYPE_3__ svn_delta_editor_t ;
typedef int svn_commit_callback2_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_16__ {int * pool; int deleted_entries; scalar_t__ keep_locks; int * lock_tokens; void* callback_baton; int callback; int revprop_table; TYPE_2__* session; } ;
typedef TYPE_4__ commit_context_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


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
 int VAR_9 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_4__* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_3__* FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__ const**,void**,TYPE_3__ const*,void*,char const*,char const*,int ,int *,int *) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (TYPE_1__*,char const**,int *) ;
 int FUNC_10 (TYPE_1__*,scalar_t__*,int ,int *) ;
 int FUNC_11 (int ,int *) ;
 char* FUNC_12 (char const*,int ,int *) ;

svn_error_t *
FUNC_13(svn_ra_session_t *VAR_19,
                               const svn_delta_editor_t **VAR_20,
                               void **VAR_21,
                               apr_hash_t *VAR_22,
                               svn_commit_callback2_t VAR_23,
                               void *VAR_24,
                               apr_hash_t *VAR_25,
                               svn_boolean_t VAR_26,
                               apr_pool_t *VAR_27)
{
  svn_ra_serf__session_t *VAR_28 = VAR_19->priv;
  svn_delta_editor_t *VAR_29;
  commit_context_t *VAR_30;
  const char *VAR_31;
  const char *VAR_32;
  svn_boolean_t VAR_33;

  VAR_30 = FUNC_3(VAR_27, sizeof(*VAR_30));

  VAR_30->pool = VAR_27;

  VAR_30->session = VAR_28;

  VAR_30->revprop_table = FUNC_8(VAR_22, VAR_27);



  FUNC_0(FUNC_10(VAR_19, &VAR_33,
                                      VAR_3,
                                      VAR_27));
  if (VAR_33)
    {
      FUNC_7(VAR_30->revprop_table,
                    FUNC_4(VAR_27, VAR_1),
                    FUNC_11(VAR_4, VAR_27));
      FUNC_7(VAR_30->revprop_table,
                    FUNC_4(VAR_27, VAR_2),
                    FUNC_11(VAR_28->useragent, VAR_27));
    }

  VAR_30->callback = VAR_23;
  VAR_30->callback_baton = VAR_24;

  VAR_30->lock_tokens = (VAR_25 && FUNC_1(VAR_25))
                       ? VAR_25 : ((void*)0);
  VAR_30->keep_locks = VAR_26;

  VAR_30->deleted_entries = FUNC_2(VAR_30->pool);

  VAR_29 = FUNC_5(VAR_27);
  VAR_29->open_root = VAR_18;
  VAR_29->delete_entry = VAR_15;
  VAR_29->add_directory = VAR_6;
  VAR_29->open_directory = VAR_16;
  VAR_29->change_dir_prop = VAR_10;
  VAR_29->close_directory = VAR_12;
  VAR_29->add_file = VAR_7;
  VAR_29->open_file = VAR_17;
  VAR_29->apply_textdelta = VAR_8;
  VAR_29->change_file_prop = VAR_11;
  VAR_29->close_file = VAR_14;
  VAR_29->close_edit = VAR_13;
  VAR_29->abort_edit = VAR_5;




  if (VAR_28->supports_put_result_checksum)
    VAR_29->apply_textdelta_stream = VAR_9;

  *VAR_20 = VAR_29;
  *VAR_21 = VAR_30;

  FUNC_0(FUNC_9(VAR_19, &VAR_31, VAR_27));
  VAR_32 = FUNC_12(VAR_31, VAR_28->session_url_str,
                                       VAR_27);

  FUNC_0(FUNC_6(VAR_20, VAR_21, *VAR_20,
                                   *VAR_21, VAR_31, VAR_32,
                                   VAR_28->shim_callbacks, VAR_27, VAR_27));

  return VAR_0;
}
