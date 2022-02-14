
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int digest; } ;
typedef TYPE_1__ svn_checksum_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (unsigned char*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__**,char const*,int ,int *) ;

svn_error_t *
FUNC_3(unsigned char VAR_3[],
                     const char *VAR_4,
                     apr_pool_t *VAR_5)
{
  svn_checksum_t *VAR_6;

  FUNC_0(FUNC_2(&VAR_6, VAR_4, VAR_2, VAR_5));
  FUNC_1(VAR_3, VAR_6->digest, VAR_0);

  return VAR_1;
}
