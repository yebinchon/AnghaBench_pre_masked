
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_client__pathrev_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (char const*,char const*,int ,int ,int *) ;
 int FUNC_2 (char const*,char const*,int *) ;
 int FUNC_3 (char const*) ;

svn_client__pathrev_t *
FUNC_4(const char *VAR_0,
                                        const char *VAR_1,
                                        svn_revnum_t VAR_2,
                                        const char *VAR_3,
                                        apr_pool_t *VAR_4)
{
  FUNC_0(FUNC_3(VAR_3));

  return FUNC_1(
           VAR_0, VAR_1, VAR_2,
           FUNC_2(VAR_0, VAR_3, VAR_4),
           VAR_4);
}
