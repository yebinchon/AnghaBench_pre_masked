
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int serf_bucket_t ;
struct TYPE_2__ {scalar_t__ label; scalar_t__ depth; } ;
typedef TYPE_1__ propfind_context_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__) ;

__attribute__((used)) static svn_error_t *
FUNC_1(serf_bucket_t *VAR_1,
                       void *VAR_2,
                       apr_pool_t *VAR_3 ,
                       apr_pool_t *VAR_4)
{
  propfind_context_t *VAR_5 = VAR_2;

  FUNC_0(VAR_1, "Depth", VAR_5->depth);
  if (VAR_5->label)
    {
      FUNC_0(VAR_1, "Label", VAR_5->label);
    }

  return VAR_0;
}
