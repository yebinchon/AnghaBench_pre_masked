
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int serf_bucket_t ;
struct TYPE_2__ {int sess; } ;
typedef TYPE_1__ report_context_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_1(serf_bucket_t *VAR_1,
                            void *VAR_2,
                            apr_pool_t *VAR_3 ,
                            apr_pool_t *VAR_4)
{
  report_context_t *VAR_5 = VAR_2;

  FUNC_0(VAR_1, VAR_5->sess);

  return VAR_0;
}
