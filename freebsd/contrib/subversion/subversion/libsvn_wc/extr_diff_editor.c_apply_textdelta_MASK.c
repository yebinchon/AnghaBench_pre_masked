
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_txdelta_window_handler_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
struct file_baton_t {int pool; int local_abspath; int result_digest; int temp_file_path; scalar_t__ base_checksum; scalar_t__ skip; struct edit_baton_t* eb; } ;
struct edit_baton_t {int db; int anchor_abspath; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int const*) ;
 int VAR_1 ;
 int * FUNC_3 (int const*,int *,int *,int ,int ) ;
 int FUNC_4 (int **,int ,char const*,int *) ;
 int VAR_2 ;
 int FUNC_5 (int ,int *) ;
 int VAR_3 ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,int *,int ,int ,int ) ;
 int FUNC_8 (int *,int *,int ,int ,int ,int *,void**) ;
 int FUNC_9 (int const**,int ,int ,scalar_t__,int *,int *) ;
 int FUNC_10 (int **,int *,int ,int ,scalar_t__,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(void *VAR_4,
                const char *VAR_5,
                apr_pool_t *VAR_6,
                svn_txdelta_window_handler_t *VAR_7,
                void **VAR_8)
{
  struct file_baton_t *VAR_9 = VAR_4;
  struct edit_baton_t *VAR_10 = VAR_9->eb;
  svn_stream_t *VAR_11;
  svn_stream_t *VAR_12;
  svn_checksum_t *VAR_13 = ((void*)0);

  if (VAR_9->skip)
    {
      *VAR_7 = VAR_2;
      *VAR_8 = ((void*)0);
      return VAR_0;
    }

  if (VAR_5 && VAR_9->base_checksum)
    {
      const svn_checksum_t *VAR_14;
      FUNC_0(FUNC_4(&VAR_13, VAR_1,
                                     VAR_5, VAR_6));

      FUNC_0(FUNC_9(&VAR_14,
                                          VAR_10->db, VAR_10->anchor_abspath,
                                          VAR_9->base_checksum,
                                          VAR_6, VAR_6));

      if (! FUNC_2(VAR_13, VAR_14))
        {
          return FUNC_3(
                        VAR_14,
                        VAR_13,
                        VAR_6,
                        FUNC_1("Checksum mismatch for '%s'"),
                        FUNC_5(VAR_9->local_abspath,
                                               VAR_6));
        }

      FUNC_0(FUNC_10(&VAR_11, ((void*)0),
                                       VAR_10->db, VAR_9->local_abspath,
                                       VAR_9->base_checksum,
                                       VAR_6, VAR_6));
    }
  else if (VAR_9->base_checksum)
    {
      FUNC_0(FUNC_10(&VAR_11, ((void*)0),
                                       VAR_10->db, VAR_9->local_abspath,
                                       VAR_9->base_checksum,
                                       VAR_6, VAR_6));
    }
  else
    VAR_11 = FUNC_6(VAR_6);


  FUNC_0(FUNC_7(&VAR_12, &VAR_9->temp_file_path, ((void*)0),
                                 VAR_3,
                                 VAR_9->pool, VAR_9->pool));

  FUNC_8(VAR_11, VAR_12,
                    VAR_9->result_digest,
                    VAR_9->local_abspath ,
                    VAR_9->pool,
                    VAR_7, VAR_8);

  return VAR_0;
}
