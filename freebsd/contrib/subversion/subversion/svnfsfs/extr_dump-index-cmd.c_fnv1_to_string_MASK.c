
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char const* digest; int member_1; int * member_0; } ;
typedef TYPE_1__ svn_checksum_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 char const* FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static const char *
FUNC_2(apr_uint32_t VAR_1,
               apr_pool_t *VAR_2)
{

  svn_checksum_t VAR_3 = { ((void*)0), VAR_0 };
  apr_uint32_t VAR_4 = FUNC_0(VAR_1);
  VAR_3.digest = (const unsigned char *)&VAR_4;


  return FUNC_1(&VAR_3, VAR_2);
}
