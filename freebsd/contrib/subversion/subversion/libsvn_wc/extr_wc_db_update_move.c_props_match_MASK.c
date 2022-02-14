
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_3__ {scalar_t__ nelts; } ;
typedef TYPE_1__ apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__**,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_boolean_t *VAR_3,
            apr_hash_t *VAR_4,
            apr_hash_t *VAR_5,
            apr_pool_t *VAR_6)
{
  if (!VAR_4 && !VAR_5)
    *VAR_3 = VAR_2;
  else if (!VAR_4 || ! VAR_5)
    *VAR_3 = VAR_0;
  else
    {
      apr_array_header_t *VAR_7;

      FUNC_0(FUNC_1(&VAR_7, VAR_4, VAR_5, VAR_6));
      *VAR_3 = VAR_7->nelts ? VAR_0 : VAR_2;
    }
  return VAR_1;
}
