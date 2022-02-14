
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int serf_bucket_t ;
struct TYPE_2__ {int relpath; int commit_ctx; scalar_t__ result_checksum; scalar_t__ base_checksum; int base_revision; } ;
typedef TYPE_1__ file_context_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,int ,int ,int *) ;
 int FUNC_4 (int *,int ,scalar_t__) ;

__attribute__((used)) static svn_error_t *
FUNC_5(serf_bucket_t *VAR_4,
                  void *VAR_5,
                  apr_pool_t *VAR_6 ,
                  apr_pool_t *VAR_7)
{
  file_context_t *VAR_8 = VAR_5;

  if (FUNC_1(VAR_8->base_revision))
    {
      FUNC_4(VAR_4, VAR_3,
                              FUNC_2(VAR_6, "%ld", VAR_8->base_revision));
    }

  if (VAR_8->base_checksum)
    {
      FUNC_4(VAR_4, VAR_1,
                              VAR_8->base_checksum);
    }

  if (VAR_8->result_checksum)
    {
      FUNC_4(VAR_4, VAR_2,
                              VAR_8->result_checksum);
    }

  FUNC_0(FUNC_3(VAR_4, VAR_8->commit_ctx,
                                      VAR_8->relpath, VAR_6));

  return VAR_0;
}
