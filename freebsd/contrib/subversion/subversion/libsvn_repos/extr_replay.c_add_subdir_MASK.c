
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_txdelta_window_handler_t ;
typedef int svn_txdelta_stream_t ;
typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef int * (* svn_repos_authz_func_t ) (void**,int *,char const*,void*,int *) ;
typedef int svn_fs_t ;
typedef int svn_fs_root_t ;
struct TYPE_6__ {scalar_t__ change_kind; char* copyfrom_path; int copyfrom_rev; void* copyfrom_known; } ;
typedef TYPE_1__ svn_fs_path_change3_t ;
struct TYPE_7__ {scalar_t__ kind; int name; } ;
typedef TYPE_2__ svn_fs_dirent_t ;
typedef int svn_error_t ;
struct TYPE_8__ {int * (* close_file ) (void*,int ,int *) ;int * (* apply_textdelta ) (void*,int *,int *,int *,void**) ;int * (* change_file_prop ) (void*,char const*,int *,int *) ;int * (* add_file ) (char const*,void*,int *,int ,int *,void**) ;int * (* close_directory ) (void*,int *) ;int * (* add_directory ) (char const*,void*,int *,int ,int *,void**) ;int * (* change_dir_prop ) (void*,char const*,int *,int *) ;} ;
typedef TYPE_3__ svn_delta_editor_t ;
typedef int svn_checksum_t ;
typedef void* svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int * VAR_1 ;
 void* VAR_2 ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;
 int * FUNC_6 (char const*,void*,int *,int ,int *,void**) ;
 int * FUNC_7 (void*,char const*,int *,int *) ;
 int * FUNC_8 (char const*,void*,int *,int ,int *,void**) ;
 int * FUNC_9 (void*,int *) ;
 int * FUNC_10 (char const*,void*,int *,int ,int *,void**) ;
 int * FUNC_11 (void*,char const*,int *,int *) ;
 int * FUNC_12 (void*,int *,int *,int *,void**) ;
 int * FUNC_13 (void*,int ,int *) ;
 int VAR_3 ;
 int FUNC_14 (int *,int *) ;
 int * FUNC_15 (int *,char**,int *,char const*,int *) ;
 int * FUNC_16 (int **,int *,char const*,int *) ;
 int * FUNC_17 (int **,int ,int *,char const*,void*,int *) ;
 int * FUNC_18 (int **,int *,int *,int *,char const*,int *) ;
 int * FUNC_19 (int **,int *,char const*,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_20 (int **,int *,int ,int *) ;
 int * FUNC_21 (int *) ;
 char* FUNC_22 (char const*,int ,int *) ;
 TYPE_1__* FUNC_23 (int *,char const*) ;
 int FUNC_24 (int *,char const*,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_25 (int *) ;
 int * FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 char* FUNC_28 (char const*,int ,int *) ;
 int * FUNC_29 (int *,int ,void*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_30(svn_fs_root_t *VAR_8,
           svn_fs_root_t *VAR_9,
           const svn_delta_editor_t *VAR_10,
           void *VAR_11,
           const char *VAR_12,
           void *VAR_13,
           const char *VAR_14,
           svn_repos_authz_func_t VAR_15,
           void *VAR_16,
           apr_hash_t *VAR_17,
           apr_pool_t *VAR_18,
           void **VAR_19)
{
  apr_pool_t *VAR_20 = FUNC_26(VAR_18);
  apr_hash_index_t *VAR_21, *VAR_22;
  apr_hash_t *VAR_23;
  apr_hash_t *VAR_24;

  FUNC_0(VAR_10->add_directory(VAR_12, VAR_13, ((void*)0),
                                VAR_0, VAR_18, VAR_19));

  FUNC_0(FUNC_19(&VAR_24, VAR_9, VAR_12, VAR_18));

  for (VAR_22 = FUNC_2(VAR_18, VAR_24); VAR_22; VAR_22 = FUNC_3(VAR_22))
    {
      const char *VAR_25 = FUNC_4(VAR_22);
      svn_string_t *VAR_26 = FUNC_5(VAR_22);

      FUNC_25(VAR_20);
      FUNC_0(VAR_10->change_dir_prop(*VAR_19, VAR_25, VAR_26, VAR_20));
    }




  FUNC_0(FUNC_16(&VAR_23, VAR_8, VAR_14, VAR_18));

  for (VAR_21 = FUNC_2(VAR_18, VAR_23); VAR_21; VAR_21 = FUNC_3(VAR_21))
    {
      svn_fs_path_change3_t *VAR_27;
      svn_boolean_t VAR_28 = VAR_2;
      svn_fs_dirent_t *VAR_29 = FUNC_5(VAR_21);
      const char *VAR_30 = ((void*)0);
      svn_revnum_t VAR_31 = VAR_0;
      const char *VAR_32;

      FUNC_25(VAR_20);

      VAR_32 = FUNC_28(VAR_12, VAR_29->name, VAR_20);





      VAR_27 = FUNC_23(VAR_17, VAR_32);
      if (VAR_27)
        {
          FUNC_24(VAR_17, VAR_32, ((void*)0));


          if (VAR_27->change_kind == VAR_4)
            continue;



          if (VAR_27->change_kind == VAR_5)
            {
              if (! VAR_27->copyfrom_known)
                {
                  FUNC_0(FUNC_15(&VAR_27->copyfrom_rev,
                                             &VAR_27->copyfrom_path,
                                             VAR_9, VAR_32, VAR_18));
                  VAR_27->copyfrom_known = VAR_2;
                }
              VAR_30 = VAR_27->copyfrom_path;
              VAR_31 = VAR_27->copyfrom_rev;
            }
        }

      if (VAR_15)
        FUNC_0(VAR_15(&VAR_28, VAR_9, VAR_32,
                                VAR_16, VAR_18));

      if (! VAR_28)
        continue;

      if (VAR_29->kind == VAR_6)
        {
          svn_fs_root_t *VAR_33;
          const char *VAR_34;
          void *VAR_35;

          if (VAR_30)
            {
              svn_fs_t *VAR_36 = FUNC_21(VAR_8);
              FUNC_0(FUNC_20(&VAR_33, VAR_36,
                                           VAR_31, VAR_18));
              VAR_34 = VAR_30;
            }
          else
            {
              VAR_33 = VAR_8;
              VAR_34 = FUNC_22(VAR_14, VAR_29->name,
                                                   VAR_20);
            }






          if (VAR_27 && VAR_27->change_kind == VAR_5
              && VAR_30 == ((void*)0))
            {
              FUNC_0(VAR_10->add_directory(VAR_32, *VAR_19,
                                            ((void*)0), VAR_0,
                                            VAR_20, &VAR_35));
            }
          else
            {
              FUNC_0(FUNC_30(VAR_33, VAR_9,
                                 VAR_10, VAR_11, VAR_32,
                                 *VAR_19, VAR_34,
                                 VAR_15, VAR_16,
                                 VAR_17, VAR_20, &VAR_35));
            }

          FUNC_0(VAR_10->close_directory(VAR_35, VAR_20));
        }
      else if (VAR_29->kind == VAR_7)
        {
          svn_txdelta_window_handler_t VAR_37;
          void *VAR_38, *VAR_39;
          svn_txdelta_stream_t *VAR_40;
          svn_checksum_t *VAR_41;

          FUNC_0(VAR_10->add_file(VAR_32, *VAR_19, ((void*)0),
                                   VAR_0, VAR_18, &VAR_39));

          FUNC_0(FUNC_19(&VAR_24, VAR_9,
                                       VAR_32, VAR_20));

          for (VAR_22 = FUNC_2(VAR_18, VAR_24); VAR_22; VAR_22 = FUNC_3(VAR_22))
            {
              const char *VAR_42 = FUNC_4(VAR_22);
              svn_string_t *VAR_43 = FUNC_5(VAR_22);

              FUNC_0(VAR_10->change_file_prop(VAR_39, VAR_42, VAR_43, VAR_20));
            }

          FUNC_0(VAR_10->apply_textdelta(VAR_39, ((void*)0), VAR_18,
                                          &VAR_37,
                                          &VAR_38));

          FUNC_0(FUNC_18(&VAR_40, ((void*)0), ((void*)0),
                                               VAR_9, VAR_32,
                                               VAR_18));

          FUNC_0(FUNC_29(VAR_40,
                                            VAR_37,
                                            VAR_38,
                                            VAR_18));

          FUNC_0(FUNC_17(&VAR_41, VAR_3, VAR_9,
                                       VAR_32, VAR_2, VAR_18));
          FUNC_0(VAR_10->close_file(VAR_39,
                                     FUNC_14(VAR_41, VAR_18),
                                     VAR_18));
        }
      else
        FUNC_1();
    }

  FUNC_27(VAR_20);

  return VAR_1;
}
