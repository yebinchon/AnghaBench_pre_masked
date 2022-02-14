
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_committed_queue_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int * FUNC_0 (unsigned char const*,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char const*,int *,int ,int const*,int ,int ,int const*,int *) ;

svn_error_t *
FUNC_3(svn_wc_committed_queue_t **VAR_0,
                       const char *VAR_1,
                       svn_wc_adm_access_t *VAR_2,
                       svn_boolean_t VAR_3,
                       const apr_array_header_t *VAR_4,
                       svn_boolean_t VAR_5,
                       svn_boolean_t VAR_6,
                       const unsigned char *VAR_7,
                       apr_pool_t *VAR_8)
{
  const svn_checksum_t *VAR_9;

  if (VAR_7)
    VAR_9 = FUNC_0(
                     VAR_7, FUNC_1(*VAR_0));
  else
    VAR_9 = ((void*)0);

  return FUNC_2(*VAR_0, VAR_1, VAR_2, VAR_3,
                                 VAR_4, VAR_5,
                                 VAR_6, VAR_9, VAR_8);
}
