
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* digest; int kind; } ;
typedef TYPE_1__ svn_checksum_t ;
typedef int svn_checksum_kind_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static svn_checksum_t *
FUNC_1(svn_checksum_kind_t VAR_0,
                               apr_size_t VAR_1,
                               apr_pool_t *VAR_2)
{


  svn_checksum_t *VAR_3 = FUNC_0(VAR_2, sizeof(*VAR_3) + VAR_1);
  VAR_3->digest = (unsigned char *)VAR_3 + sizeof(*VAR_3);
  VAR_3->kind = VAR_0;
  return VAR_3;
}
