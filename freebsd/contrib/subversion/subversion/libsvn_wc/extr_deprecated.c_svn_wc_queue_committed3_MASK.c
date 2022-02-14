
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_context_t ;
typedef int svn_wc_committed_queue_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,char const*,int ,int ,int const*,int ,int ,int const*,int *) ;

svn_error_t *
FUNC_2(svn_wc_committed_queue_t *VAR_1,
                        svn_wc_context_t *VAR_2,
                        const char *VAR_3,
                        svn_boolean_t VAR_4,
                        const apr_array_header_t *VAR_5,
                        svn_boolean_t VAR_6,
                        svn_boolean_t VAR_7,
                        const svn_checksum_t *VAR_8,
                        apr_pool_t *VAR_9)
{
  return FUNC_0(
            FUNC_1(VAR_1, VAR_2, VAR_3,
                                    VAR_4, VAR_0 ,
                                    VAR_5, VAR_6,
                                    VAR_7, VAR_8,
                                    VAR_9));
}
