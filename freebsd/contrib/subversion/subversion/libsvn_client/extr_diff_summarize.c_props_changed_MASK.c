
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {scalar_t__ nelts; } ;
typedef TYPE_1__ apr_array_header_t ;


 int FUNC_0 (TYPE_1__ const*,int *,int *,TYPE_1__**,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static svn_boolean_t
FUNC_2(const apr_array_header_t *VAR_0,
              apr_pool_t *VAR_1)
{
  apr_array_header_t *VAR_2;

  FUNC_1(FUNC_0(VAR_0, ((void*)0), ((void*)0), &VAR_2,
                                       VAR_1));
  return (VAR_2->nelts != 0);
}
