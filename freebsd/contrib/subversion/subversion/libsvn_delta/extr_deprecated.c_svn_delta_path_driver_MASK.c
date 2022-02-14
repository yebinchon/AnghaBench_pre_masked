
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_delta_path_driver_cb_func_t ;
typedef int svn_delta_editor_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int const*,void*,int const*,int ,int ,void*,int *) ;
 int * FUNC_1 (int ) ;

svn_error_t *
FUNC_2(const svn_delta_editor_t *VAR_1,
                      void *VAR_2,
                      svn_revnum_t VAR_3,
                      const apr_array_header_t *VAR_4,
                      svn_delta_path_driver_cb_func_t VAR_5,
                      void *VAR_6,
                      apr_pool_t *VAR_7)
{


  return FUNC_1(FUNC_0(VAR_1, VAR_2, VAR_4,
                                                VAR_0,
                                                VAR_5, VAR_6,
                                                VAR_7));
}
