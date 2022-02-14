
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_wc_context_t ;
struct TYPE_3__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int * svn_mergeinfo_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int **,int ,int *) ;
 int FUNC_2 (TYPE_1__ const**,int *,char const*,int ,int *,int *) ;

svn_error_t *
FUNC_3(svn_mergeinfo_t *VAR_2,
                            svn_wc_context_t *VAR_3,
                            const char *VAR_4,
                            apr_pool_t *VAR_5,
                            apr_pool_t *VAR_6)
{
  const svn_string_t *VAR_7;

  *VAR_2 = ((void*)0);




  FUNC_0(FUNC_2(&VAR_7, VAR_3, VAR_4, VAR_1,
                           VAR_6, VAR_6));
  if (VAR_7)
    FUNC_0(FUNC_1(VAR_2, VAR_7->data, VAR_5));

  return VAR_0;
}
