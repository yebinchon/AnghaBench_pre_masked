
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int serf_bucket_t ;
struct TYPE_2__ {int revision; scalar_t__ force; } ;
typedef TYPE_1__ lock_ctx_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(serf_bucket_t *VAR_4,
                 void *VAR_5,
                 apr_pool_t *VAR_6 ,
                 apr_pool_t *VAR_7)
{
  lock_ctx_t *VAR_8 = VAR_5;

  if (VAR_8->force)
    {
      FUNC_2(VAR_4, VAR_1,
                              VAR_2);
    }

  if (FUNC_0(VAR_8->revision))
    {
      FUNC_2(VAR_4, VAR_3,
                              FUNC_1(VAR_6, VAR_8->revision));
    }

  return VAR_0;
}
