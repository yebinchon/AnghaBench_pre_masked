
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_sqlite__stmt_t ;
typedef int svn_revnum_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int,int *) ;

__attribute__((used)) static void
FUNC_4(apr_int64_t *VAR_1,
                            svn_revnum_t *VAR_2,
                            const char **VAR_3,
                            svn_sqlite__stmt_t *VAR_4,
                            int VAR_5,
                            int VAR_6,
                            int VAR_7,
                            apr_pool_t *VAR_8)
{
  if (VAR_1)
    {

      if (FUNC_1(VAR_4, VAR_5))
        *VAR_1 = VAR_0;
      else
        *VAR_1 = FUNC_0(VAR_4, VAR_5);
    }
  if (VAR_2)
    {
      *VAR_2 = FUNC_2(VAR_4, VAR_6);
    }
  if (VAR_3)
    {
      *VAR_3 = FUNC_3(VAR_4, VAR_7,
                                               VAR_8);
    }
}
