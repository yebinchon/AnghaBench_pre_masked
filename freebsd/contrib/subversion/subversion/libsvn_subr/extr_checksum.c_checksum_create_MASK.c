
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ digest; } ;
typedef TYPE_1__ svn_checksum_t ;
typedef int svn_checksum_kind_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (unsigned char*,unsigned char const*,int ) ;

__attribute__((used)) static svn_checksum_t *
FUNC_3(svn_checksum_kind_t VAR_0,
                const unsigned char *VAR_1,
                apr_pool_t *VAR_2)
{
  apr_size_t VAR_3 = FUNC_0(VAR_0);
  svn_checksum_t *VAR_4 = FUNC_1(VAR_0, VAR_3,
                                                            VAR_2);
  FUNC_2((unsigned char *)VAR_4->digest, VAR_1, VAR_3);
  return VAR_4;
}
