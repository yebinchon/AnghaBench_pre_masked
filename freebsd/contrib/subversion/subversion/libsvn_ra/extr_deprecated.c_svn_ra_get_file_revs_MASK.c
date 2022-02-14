
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_ra_file_rev_handler_t ;
typedef int svn_file_rev_handler_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,void**,int ,void*,int *) ;
 int * FUNC_2 (int *,char const*,int ,int ,int ,int ,void*,int *) ;

svn_error_t *FUNC_3(svn_ra_session_t *VAR_1,
                                  const char *VAR_2,
                                  svn_revnum_t VAR_3,
                                  svn_revnum_t VAR_4,
                                  svn_ra_file_rev_handler_t VAR_5,
                                  void *VAR_6,
                                  apr_pool_t *VAR_7)
{
  svn_file_rev_handler_t VAR_8;
  void *VAR_9;

  FUNC_0(*VAR_2 != '/');

  FUNC_1(&VAR_8, &VAR_9,
                                   VAR_5, VAR_6,
                                   VAR_7);

  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_0, VAR_8,
                               VAR_9, VAR_7);
}
