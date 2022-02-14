
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {scalar_t__ kind; scalar_t__ digest; } ;
typedef TYPE_1__ svn_checksum_t ;
typedef int svn_checksum_ctx_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 int FUNC_2 (int const) ;
 int FUNC_3 (TYPE_1__**,int *,int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_4(apr_uint32_t *VAR_2,
                        svn_checksum_ctx_t *VAR_3,
                        apr_pool_t *VAR_4)
{
  svn_checksum_t *VAR_5;

  FUNC_0(FUNC_3(&VAR_5, VAR_3, VAR_4));
  FUNC_1(VAR_5->kind == VAR_1);
  *VAR_2 = FUNC_2(*(const apr_uint32_t *)(VAR_5->digest));

  return VAR_0;
}
