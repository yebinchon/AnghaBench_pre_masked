
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
struct TYPE_2__ {int requested_depth; } ;
typedef TYPE_1__ lock_context_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,char*) ;
 int FUNC_3 (int *,int *,char*,char*,int ,char*,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(serf_bucket_t **VAR_3,
                     void *VAR_4,
                     serf_bucket_alloc_t *VAR_5,
                     apr_pool_t *VAR_6 ,
                     apr_pool_t *VAR_7)
{
  lock_context_t *VAR_8 = VAR_4;
  serf_bucket_t *VAR_9;

  VAR_9 = FUNC_0(VAR_5);

  FUNC_3(
    VAR_9, VAR_5, "S:get-locks-report", "xmlns:S", VAR_2,
    "depth", FUNC_1(VAR_8->requested_depth), VAR_1);
  FUNC_2(VAR_9, VAR_5, "S:get-locks-report");

  *VAR_3 = VAR_9;
  return VAR_0;
}
