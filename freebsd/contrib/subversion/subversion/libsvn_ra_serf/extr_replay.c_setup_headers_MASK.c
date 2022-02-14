
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct revision_report_t {int session; } ;
typedef int serf_bucket_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_1(serf_bucket_t *VAR_1,
              void *VAR_2,
              apr_pool_t *VAR_3,
              apr_pool_t *VAR_4)
{
  struct revision_report_t *VAR_5 = VAR_2;

  FUNC_0(VAR_1, VAR_5->session);

  return VAR_0;
}
