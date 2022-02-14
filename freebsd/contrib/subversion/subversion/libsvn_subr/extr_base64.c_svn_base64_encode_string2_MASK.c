
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
struct TYPE_5__ {int len; int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *,int ,int ,unsigned char*,size_t*,size_t*,int ) ;
 int FUNC_1 (int *,unsigned char*,size_t,size_t,int ) ;
 TYPE_1__ const* FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;

const svn_string_t *
FUNC_4(const svn_string_t *VAR_0,
                          svn_boolean_t VAR_1,
                          apr_pool_t *VAR_2)
{
  svn_stringbuf_t *VAR_3 = FUNC_3(VAR_2);
  unsigned char VAR_4[3];
  size_t VAR_5 = 0;
  size_t VAR_6 = 0;

  FUNC_0(VAR_3, VAR_0->data, VAR_0->len, VAR_4, &VAR_5, &VAR_6,
               VAR_1);
  FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6,
                       VAR_1);
  return FUNC_2(VAR_3);
}
