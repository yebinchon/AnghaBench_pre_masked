
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int new_filename; int old_filename; } ;
typedef TYPE_1__ svn_patch_t ;
typedef int svn_patch_file_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char**,char const*,char const*,int *,int *,int *) ;
 int FUNC_4 (char const**,char const*,int *,int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int **,char*,int *) ;
 int FUNC_7 (TYPE_1__**,int *,int ,int ,int *,int *) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

svn_error_t *
FUNC_12(apr_hash_t **VAR_2,
                           const char *VAR_3,
                           const char *VAR_4,
                           svn_client_ctx_t *VAR_5,
                           apr_pool_t *VAR_6,
                           apr_pool_t *VAR_7)
{
  const char *VAR_8;
  char *VAR_9;
  svn_patch_file_t *VAR_10;
  apr_pool_t *VAR_11 = FUNC_10(VAR_7);
  apr_hash_t *VAR_12 = FUNC_1(VAR_6);

  FUNC_0(FUNC_4(&VAR_8,
                                 VAR_4, VAR_5, VAR_7, VAR_7));
  FUNC_0(FUNC_3(&VAR_9, VAR_3, VAR_8,
                            VAR_5, VAR_7, VAR_7));
  FUNC_0(FUNC_6(&VAR_10, VAR_9, VAR_6));

  while (1)
    {
      svn_patch_t *VAR_13;

      FUNC_9(VAR_11);
      FUNC_0(FUNC_7(&VAR_13, VAR_10,
                                        VAR_0 ,
                                        VAR_0 ,
                                        VAR_11, VAR_11));
      if (! VAR_13)
        break;
      FUNC_8(VAR_12,
                    FUNC_2(VAR_6, VAR_13->old_filename),
                    FUNC_2(VAR_6, VAR_13->new_filename));
    }
  FUNC_0(FUNC_5(VAR_10, VAR_11));
  FUNC_11(VAR_11);

  *VAR_2 = VAR_12;
  return VAR_1;
}
