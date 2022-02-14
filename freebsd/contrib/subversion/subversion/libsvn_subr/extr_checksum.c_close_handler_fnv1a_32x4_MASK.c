
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_2__ {scalar_t__ digest; } ;
typedef TYPE_1__ stream_baton_t ;
typedef int apr_uint32_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_1)
{
  stream_baton_t *VAR_2 = VAR_1;
  FUNC_0(FUNC_1(VAR_1));

  *(apr_uint32_t *)VAR_2->digest = FUNC_2(*(apr_uint32_t *)VAR_2->digest);
  return VAR_0;
}
