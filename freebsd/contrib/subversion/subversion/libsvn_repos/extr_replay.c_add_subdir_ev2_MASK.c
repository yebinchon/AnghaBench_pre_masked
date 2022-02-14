
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int * (* svn_repos_authz_func_t ) (void**,int *,char const*,void*,int *) ;
typedef int svn_fs_t ;
typedef int svn_fs_root_t ;
struct TYPE_5__ {scalar_t__ change_kind; char* copyfrom_path; int copyfrom_rev; void* copyfrom_known; } ;
typedef TYPE_1__ svn_fs_path_change3_t ;
struct TYPE_6__ {scalar_t__ kind; int name; } ;
typedef TYPE_2__ svn_fs_dirent_t ;
typedef int svn_error_t ;
typedef int svn_editor_t ;
typedef int svn_checksum_t ;
typedef void* svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int * VAR_1 ;
 void* VAR_2 ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int *) ;
 int VAR_3 ;
 int * FUNC_5 (int *,char const*,int *,int *,int ) ;
 int * FUNC_6 (int *,char const*,int *,int *,int *,int ) ;
 int * FUNC_7 (int *,char**,int *,char const*,int *) ;
 int * FUNC_8 (int **,int *,char const*,int *) ;
 int * FUNC_9 (int **,int ,int *,char const*,void*,int *) ;
 int * FUNC_10 (int **,int *,char const*,int *) ;
 int * FUNC_11 (int **,int *,char const*,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_12 (int **,int *,int ,int *) ;
 int * FUNC_13 (int *) ;
 char* FUNC_14 (char const*,int ,int *) ;
 TYPE_1__* FUNC_15 (int *,char const*) ;
 int FUNC_16 (int *,char const*,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_17 (int *) ;
 int * FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 char* FUNC_20 (char const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_21(svn_fs_root_t *VAR_8,
               svn_fs_root_t *VAR_9,
               svn_editor_t *VAR_10,
               const char *VAR_11,
               const char *VAR_12,
               svn_repos_authz_func_t VAR_13,
               void *VAR_14,
               apr_hash_t *VAR_15,
               apr_pool_t *VAR_16,
               apr_pool_t *VAR_17)
{
  apr_pool_t *VAR_18 = FUNC_18(VAR_17);
  apr_hash_index_t *VAR_19;
  apr_hash_t *VAR_20;
  apr_hash_t *VAR_21 = ((void*)0);
  apr_array_header_t *VAR_22 = ((void*)0);

  FUNC_0(FUNC_11(&VAR_21, VAR_9, VAR_11,
                               VAR_17));

  FUNC_0(FUNC_5(VAR_10, VAR_11, VAR_22,
                                   VAR_21, VAR_0));




  FUNC_0(FUNC_8(&VAR_20, VAR_8, VAR_12,
                             VAR_17));

  for (VAR_19 = FUNC_2(VAR_17, VAR_20); VAR_19; VAR_19 = FUNC_3(VAR_19))
    {
      svn_fs_path_change3_t *VAR_23;
      svn_boolean_t VAR_24 = VAR_2;
      svn_fs_dirent_t *VAR_25 = FUNC_4(VAR_19);
      const char *VAR_26 = ((void*)0);
      svn_revnum_t VAR_27 = VAR_0;
      const char *VAR_28;

      FUNC_17(VAR_18);

      VAR_28 = FUNC_20(VAR_11, VAR_25->name, VAR_18);





      VAR_23 = FUNC_15(VAR_15, VAR_28);
      if (VAR_23)
        {
          FUNC_16(VAR_15, VAR_28, ((void*)0));


          if (VAR_23->change_kind == VAR_4)
            continue;



          if (VAR_23->change_kind == VAR_5)
            {
              if (! VAR_23->copyfrom_known)
                {
                  FUNC_0(FUNC_7(&VAR_23->copyfrom_rev,
                                             &VAR_23->copyfrom_path,
                                             VAR_9, VAR_28,
                                             VAR_16));
                  VAR_23->copyfrom_known = VAR_2;
                }
              VAR_26 = VAR_23->copyfrom_path;
              VAR_27 = VAR_23->copyfrom_rev;
            }
        }

      if (VAR_13)
        FUNC_0(VAR_13(&VAR_24, VAR_9, VAR_28,
                                VAR_14, VAR_18));

      if (! VAR_24)
        continue;

      if (VAR_25->kind == VAR_6)
        {
          svn_fs_root_t *VAR_29;
          const char *VAR_30;

          if (VAR_26)
            {
              svn_fs_t *VAR_31 = FUNC_13(VAR_8);
              FUNC_0(FUNC_12(&VAR_29, VAR_31,
                                           VAR_27, VAR_16));
              VAR_30 = VAR_26;
            }
          else
            {
              VAR_29 = VAR_8;
              VAR_30 = FUNC_14(VAR_12, VAR_25->name,
                                                   VAR_18);
            }






          if (VAR_23 && VAR_23->change_kind == VAR_5
              && VAR_26 == ((void*)0))
            {
              FUNC_0(FUNC_5(VAR_10, VAR_28,
                                               VAR_22, VAR_21,
                                               VAR_0));
            }
          else
            {
              FUNC_0(FUNC_21(VAR_29, VAR_9,
                                     VAR_10, VAR_28,
                                     VAR_30,
                                     VAR_13, VAR_14,
                                     VAR_15, VAR_16, VAR_18));
            }
        }
      else if (VAR_25->kind == VAR_7)
        {
          svn_checksum_t *VAR_32;
          svn_stream_t *VAR_33;

          FUNC_0(FUNC_11(&VAR_21, VAR_9,
                                       VAR_28, VAR_18));

          FUNC_0(FUNC_10(&VAR_33, VAR_9,
                                       VAR_28, VAR_18));

          FUNC_0(FUNC_9(&VAR_32, VAR_3,
                                       VAR_9,
                                       VAR_28, VAR_2, VAR_18));

          FUNC_0(FUNC_6(VAR_10, VAR_28, VAR_32,
                                      VAR_33, VAR_21, VAR_0));
        }
      else
        FUNC_1();
    }

  FUNC_19(VAR_18);

  return VAR_1;
}
