
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ kind; int mtime; } ;
typedef TYPE_1__ svn_io_dirent2_t ;
typedef int svn_error_t ;
struct TYPE_9__ {int patch_path; int message; TYPE_1__* dirent; int mtime; } ;
typedef TYPE_2__ svn_client_shelved_patch_info_t ;
struct TYPE_10__ {int wc_ctx; } ;
typedef TYPE_3__ svn_client_ctx_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ,int *,int *) ;
 int FUNC_8 (char**,char const*,int *) ;
 int FUNC_9 (char*,char const*,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,char*,TYPE_2__*) ;
 int FUNC_12 (int **,char*,int ,int *,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_13 (char**,int ,char const*,int *,int *) ;

svn_error_t *
FUNC_14(apr_hash_t **VAR_3,
                        const char *VAR_4,
                        svn_client_ctx_t *VAR_5,
                        apr_pool_t *VAR_6,
                        apr_pool_t *VAR_7)
{
  char *VAR_8;
  apr_hash_t *VAR_9;
  apr_hash_index_t *VAR_10;

  FUNC_0(FUNC_13(&VAR_8, VAR_5->wc_ctx, VAR_4,
                                  VAR_7, VAR_7));
  FUNC_0(FUNC_12(&VAR_9, VAR_8, VAR_0 ,
                              VAR_6, VAR_7));

  *VAR_3 = FUNC_2(VAR_6);


  for (VAR_10 = FUNC_1(VAR_7, VAR_9); VAR_10; VAR_10 = FUNC_3(VAR_10))
    {
      const char *VAR_11 = FUNC_4(VAR_10);
      svn_io_dirent2_t *VAR_12 = FUNC_5(VAR_10);
      char *VAR_13 = ((void*)0);

      FUNC_10(FUNC_8(&VAR_13, VAR_11, VAR_6));
      if (VAR_13 && VAR_12->kind == VAR_2)
        {
          svn_client_shelved_patch_info_t *VAR_14
            = FUNC_6(VAR_6, sizeof(*VAR_14));

          VAR_14->dirent = VAR_12;
          VAR_14->mtime = VAR_14->dirent->mtime;
          VAR_14->patch_path
            = FUNC_9(VAR_8, VAR_11, VAR_6);
          FUNC_0(FUNC_7(&VAR_14->message, VAR_14->patch_path,
                                         VAR_6, VAR_7));

          FUNC_11(*VAR_3, VAR_13, VAR_14);
        }
    }

  return VAR_1;
}
