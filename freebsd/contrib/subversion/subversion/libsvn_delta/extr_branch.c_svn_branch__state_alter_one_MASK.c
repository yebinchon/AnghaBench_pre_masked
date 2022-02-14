
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_element__payload_t ;
typedef int svn_element__content_t ;
typedef int svn_branch__state_t ;
typedef int svn_branch__eid_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int ,int *,int *) ;
 int * FUNC_2 (int ,char const*,int const*,int *) ;

svn_error_t *
FUNC_3(svn_branch__state_t *VAR_1,
                            svn_branch__eid_t VAR_2,
                            svn_branch__eid_t VAR_3,
                            const char *VAR_4,
                            const svn_element__payload_t *VAR_5,
                            apr_pool_t *VAR_6)
{
  svn_element__content_t *VAR_7
    = FUNC_2(VAR_3, VAR_4, VAR_5,
                                  VAR_6);

  FUNC_0(FUNC_1(VAR_1, VAR_2, VAR_7, VAR_6));
  return VAR_0;
}
