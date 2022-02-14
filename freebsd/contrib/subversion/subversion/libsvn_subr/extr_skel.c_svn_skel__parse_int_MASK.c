
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int data; } ;
typedef TYPE_1__ svn_skel_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 char* FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,char const*) ;
 int * FUNC_2 (int ) ;

svn_error_t *
FUNC_3(apr_int64_t *VAR_0, const svn_skel_t *VAR_1,
                    apr_pool_t *VAR_2)
{
  const char *VAR_3;



  VAR_3 = FUNC_0(VAR_2, VAR_1->data, VAR_1->len);
  return FUNC_2(FUNC_1(VAR_0, VAR_3));
}
