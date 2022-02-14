
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int total_bytes; int all_data; scalar_t__ file; } ;
typedef TYPE_1__ svn_ra_serf__request_body_t ;
typedef int svn_error_t ;
typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int * FUNC_1 (scalar_t__,int *) ;
 int * FUNC_2 (int ,int ,int *,int *,int *) ;
 int FUNC_3 (scalar_t__,int ,scalar_t__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(serf_bucket_t **VAR_2,
                      void *VAR_3,
                      serf_bucket_alloc_t *VAR_4,
                      apr_pool_t *VAR_5,
                      apr_pool_t *VAR_6)
{
  svn_ra_serf__request_body_t *VAR_7 = VAR_3;

  if (VAR_7->file)
    {
      apr_off_t VAR_8;

      VAR_8 = 0;
      FUNC_0(FUNC_3(VAR_7->file, VAR_0, &VAR_8, VAR_6));

      *VAR_2 = FUNC_1(VAR_7->file, VAR_4);
    }
  else
    {
      *VAR_2 = FUNC_2(VAR_7->all_data,
                                            VAR_7->total_bytes,
                                            ((void*)0), ((void*)0), VAR_4);
    }

  return VAR_1;
}
