
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const* client_capabilities; } ;
typedef TYPE_1__ svn_repos_t ;
typedef int svn_error_t ;
typedef int apr_array_header_t ;


 int * VAR_0 ;

svn_error_t *
FUNC_0(svn_repos_t *VAR_1,
                                       const apr_array_header_t *VAR_2)
{
  VAR_1->client_capabilities = VAR_2;
  return VAR_0;
}
