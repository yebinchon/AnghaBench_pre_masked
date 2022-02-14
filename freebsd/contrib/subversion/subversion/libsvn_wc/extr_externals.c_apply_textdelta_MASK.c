
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_txdelta_window_handler_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
struct TYPE_10__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_checksum_t ;
struct edit_baton {int local_abspath; int pool; int wri_abspath; int db; int new_md5_checksum; int new_sha1_checksum; int install_data; TYPE_1__* original_checksum; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__ const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_1__*,TYPE_1__ const*,int *,int ,int ) ;
 int FUNC_4 (TYPE_1__**,scalar_t__,char const*,int *) ;
 int FUNC_5 (int ,int *) ;
 int * FUNC_6 (int ) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int *,int ,int *,int *,void**) ;
 int FUNC_9 (TYPE_1__ const**,int ,int ,TYPE_1__*,int *,int *) ;
 int FUNC_10 (int **,int *,int *,int *,int ,int ,int ,int *) ;
 int FUNC_11 (int **,int *,int ,int ,TYPE_1__*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(void *VAR_2,
                const char *VAR_3,
                apr_pool_t *VAR_4,
                svn_txdelta_window_handler_t *VAR_5,
                void **VAR_6)
{
  struct edit_baton *VAR_7 = VAR_2;
  svn_stream_t *VAR_8;
  svn_stream_t *VAR_9;

  if (VAR_7->original_checksum)
    {
      if (VAR_3)
        {
          svn_checksum_t *VAR_10;
          const svn_checksum_t *VAR_11;

          FUNC_0(FUNC_4(&VAR_10, VAR_1,
                                         VAR_3, VAR_4));

          if (VAR_7->original_checksum->kind != VAR_1)
            FUNC_0(FUNC_9(&VAR_11,
                                                VAR_7->db, VAR_7->wri_abspath,
                                                VAR_7->original_checksum,
                                                VAR_4, VAR_4));
          else
            VAR_11 = VAR_7->original_checksum;

          if (!FUNC_2(VAR_10, VAR_11))
            return FUNC_6(FUNC_3(
                                    VAR_10,
                                    VAR_11,
                                    VAR_4,
                                    FUNC_1("Base checksum mismatch for '%s'"),
                                    FUNC_5(VAR_7->local_abspath,
                                                           VAR_4)));
        }

      FUNC_0(FUNC_11(&VAR_8, ((void*)0), VAR_7->db,
                                       VAR_7->wri_abspath, VAR_7->original_checksum,
                                       VAR_4, VAR_4));
    }
  else
    VAR_8 = FUNC_7(VAR_4);

  FUNC_0(FUNC_10(&VAR_9,
                                              &VAR_7->install_data,
                                              &VAR_7->new_sha1_checksum,
                                              &VAR_7->new_md5_checksum,
                                              VAR_7->db, VAR_7->wri_abspath,
                                              VAR_7->pool, VAR_4));

  FUNC_8(VAR_8, VAR_9, ((void*)0), VAR_7->local_abspath, VAR_4,
                    VAR_5, VAR_6);

  return VAR_0;
}
