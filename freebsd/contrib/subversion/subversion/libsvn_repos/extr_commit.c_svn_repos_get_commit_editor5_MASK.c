
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_repos_t ;
typedef int (* svn_repos_authz_callback_t ) (int ,int *,int *,int *,void*,int *) ;
typedef int svn_fs_txn_t ;
typedef int svn_error_t ;
struct TYPE_9__ {struct edit_baton* fetch_baton; int fetch_base_func; int fetch_kind_func; int fetch_props_func; } ;
typedef TYPE_1__ svn_delta_shim_callbacks_t ;
struct TYPE_10__ {int abort_edit; int close_edit; int change_file_prop; int apply_textdelta; int close_file; int open_file; int add_file; int change_dir_prop; int open_directory; int add_directory; int delete_entry; int open_root; } ;
typedef TYPE_2__ svn_delta_editor_t ;
typedef int svn_commit_callback2_t ;
typedef int svn_boolean_t ;
struct edit_baton {char const* repos_url_decoded; int base_path; int txn_owner; int * txn; int fs; int repos_name; int * repos; void* authz_baton; int (* authz_callback ) (int ,int *,int *,int *,void*,int *) ;void* commit_callback_baton; int commit_callback; int revprop_table; int * pool; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct edit_baton* FUNC_1 (int *,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 TYPE_2__* FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_2__ const**,void**,TYPE_2__ const*,void*,char const*,int ,TYPE_1__*,int *,int *) ;
 int * FUNC_6 (int ,int *,char*) ;
 int FUNC_7 (char const*,int *) ;
 char* FUNC_8 (char const*,int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;

svn_error_t *
FUNC_13(const svn_delta_editor_t **VAR_18,
                             void **VAR_19,
                             svn_repos_t *VAR_20,
                             svn_fs_txn_t *VAR_21,
                             const char *VAR_22,
                             const char *VAR_23,
                             apr_hash_t *VAR_24,
                             svn_commit_callback2_t VAR_25,
                             void *VAR_26,
                             svn_repos_authz_callback_t VAR_27,
                             void *VAR_28,
                             apr_pool_t *VAR_29)
{
  svn_delta_editor_t *VAR_30;
  apr_pool_t *VAR_31 = FUNC_9(VAR_29);
  struct edit_baton *VAR_32;
  svn_delta_shim_callbacks_t *VAR_33 =
                                    FUNC_3(VAR_29);
  const char *VAR_34 = FUNC_8(VAR_22, VAR_29);



  if (VAR_27)
    {
      svn_boolean_t VAR_35;

      FUNC_0(VAR_27(VAR_17, &VAR_35, ((void*)0), ((void*)0),
                             VAR_28, VAR_29));
      if (!VAR_35)
        return FUNC_6(VAR_0, ((void*)0),
                                "Not authorized to open a commit editor.");
    }


  VAR_30 = FUNC_2(VAR_29);
  VAR_32 = FUNC_1(VAR_31, sizeof(*VAR_32));


  VAR_30->open_root = VAR_16;
  VAR_30->delete_entry = VAR_10;
  VAR_30->add_directory = VAR_3;
  VAR_30->open_directory = VAR_14;
  VAR_30->change_dir_prop = VAR_6;
  VAR_30->add_file = VAR_4;
  VAR_30->open_file = VAR_15;
  VAR_30->close_file = VAR_9;
  VAR_30->apply_textdelta = VAR_5;
  VAR_30->change_file_prop = VAR_7;
  VAR_30->close_edit = VAR_8;
  VAR_30->abort_edit = VAR_2;


  VAR_32->pool = VAR_31;
  VAR_32->revprop_table = FUNC_10(VAR_24, VAR_31);
  VAR_32->commit_callback = VAR_25;
  VAR_32->commit_callback_baton = VAR_26;
  VAR_32->authz_callback = VAR_27;
  VAR_32->authz_baton = VAR_28;
  VAR_32->base_path = FUNC_7(VAR_23, VAR_31);
  VAR_32->repos = VAR_20;
  VAR_32->repos_url_decoded = VAR_22;
  VAR_32->repos_name = FUNC_4(FUNC_12(VAR_20, VAR_31),
                                       VAR_31);
  VAR_32->fs = FUNC_11(VAR_20);
  VAR_32->txn = VAR_21;
  VAR_32->txn_owner = VAR_21 == ((void*)0);

  *VAR_19 = VAR_32;
  *VAR_18 = VAR_30;

  VAR_33->fetch_props_func = VAR_13;
  VAR_33->fetch_kind_func = VAR_12;
  VAR_33->fetch_base_func = VAR_11;
  VAR_33->fetch_baton = VAR_32;

  FUNC_0(FUNC_5(VAR_18, VAR_19, *VAR_18, *VAR_19,
                                   VAR_34, VAR_32->base_path,
                                   VAR_33, VAR_29, VAR_29));

  return VAR_1;
}
