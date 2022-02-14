
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
struct recover_baton {void* start_callback_baton; int * (* start_callback ) (void*) ;} ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (char const*,int ,int ,struct recover_baton*,int ,void*,int *) ;

svn_error_t *
FUNC_1(const char *VAR_1,
                   svn_boolean_t VAR_2,
                   svn_error_t *(*VAR_3)(void *VAR_4),
                   void *VAR_5,
                   svn_cancel_func_t VAR_6, void *VAR_7,
                   apr_pool_t *VAR_8)
{
  struct recover_baton VAR_9;

  VAR_9.start_callback = VAR_3;
  VAR_9.start_callback_baton = VAR_5;

  return FUNC_0(VAR_1, VAR_2, VAR_0, &VAR_9,
                            VAR_6, VAR_7, VAR_8);
}
