
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_client_list_func_t ;
typedef int svn_client_list_func2_t ;
struct list_func_wrapper_baton {int list_func1; void* list_func1_baton; } ;
typedef int apr_pool_t ;


 struct list_func_wrapper_baton* FUNC_0 (int *,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(svn_client_list_func2_t *VAR_1,
               void **VAR_2,
               svn_client_list_func_t VAR_3,
               void *VAR_4,
               apr_pool_t *VAR_5)
{
  struct list_func_wrapper_baton *VAR_6 = FUNC_0(VAR_5,
                                                    sizeof(*VAR_6));


  VAR_6->list_func1_baton = VAR_4;
  VAR_6->list_func1 = VAR_3;

  *VAR_2 = VAR_6;
  *VAR_1 = VAR_0;
}
