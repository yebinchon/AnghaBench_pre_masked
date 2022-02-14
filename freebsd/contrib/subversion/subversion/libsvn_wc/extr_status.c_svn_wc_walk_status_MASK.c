
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_wc_status_func4_t ;
struct TYPE_3__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,int ,int ,int ,int ,int const*,int ,void*,int ,void*,int *) ;

svn_error_t *
FUNC_2(svn_wc_context_t *VAR_0,
                   const char *VAR_1,
                   svn_depth_t VAR_2,
                   svn_boolean_t VAR_3,
                   svn_boolean_t VAR_4,
                   svn_boolean_t VAR_5,
                   const apr_array_header_t *VAR_6,
                   svn_wc_status_func4_t VAR_7,
                   void *VAR_8,
                   svn_cancel_func_t VAR_9,
                   void *VAR_10,
                   apr_pool_t *VAR_11)
{
  return FUNC_0(
           FUNC_1(VAR_0->db,
                                        VAR_1,
                                        VAR_2,
                                        VAR_3,
                                        VAR_4,
                                        VAR_5,
                                        VAR_6,
                                        VAR_7,
                                        VAR_8,
                                        VAR_9,
                                        VAR_10,
                                        VAR_11));
}
