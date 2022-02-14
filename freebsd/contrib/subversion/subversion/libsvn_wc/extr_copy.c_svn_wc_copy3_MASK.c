
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_wc_notify_func2_t ;
struct TYPE_4__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_1__*,char const*,char const*,int ,int ,int ,int ,void*,int ,void*,int *) ;
 int FUNC_2 (char const*,int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *) ;

svn_error_t *
FUNC_5(svn_wc_context_t *VAR_2,
             const char *VAR_3,
             const char *VAR_4,
             svn_boolean_t VAR_5,
             svn_cancel_func_t VAR_6,
             void *VAR_7,
             svn_wc_notify_func2_t VAR_8,
             void *VAR_9,
             apr_pool_t *VAR_10)
{

  FUNC_0(FUNC_4(VAR_2->db,
                              FUNC_2(VAR_4, VAR_10),
                              VAR_10));

  return FUNC_3(FUNC_1(((void*)0), VAR_2, VAR_3, VAR_4,
                                      VAR_5, VAR_0 ,
                                      VAR_1 ,
                                      VAR_6, VAR_7,
                                      VAR_8, VAR_9,
                                      VAR_10));
}
