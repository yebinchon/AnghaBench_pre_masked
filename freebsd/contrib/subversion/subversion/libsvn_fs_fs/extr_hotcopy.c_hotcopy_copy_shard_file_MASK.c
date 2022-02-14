
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char const*,char const*,char*,int *) ;
 char* FUNC_3 (char const*,char const*,int *) ;
 int FUNC_4 (char const*,char const*,int *) ;
 int FUNC_5 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_boolean_t *VAR_1,
                        const char *VAR_2,
                        const char *VAR_3,
                        svn_revnum_t VAR_4,
                        int VAR_5,
                        apr_pool_t *VAR_6)
{
  const char *VAR_7 = VAR_2,
             *VAR_8 = VAR_3;

  if (VAR_5)
    {
      const char *VAR_9 = FUNC_1(VAR_6, "%ld",
                                       VAR_4 / VAR_5);
      VAR_7 = FUNC_3(VAR_2, VAR_9, VAR_6);
      VAR_8 = FUNC_3(VAR_3, VAR_9, VAR_6);

      if (VAR_4 % VAR_5 == 0)
        {
          FUNC_0(FUNC_5(VAR_8, VAR_6));
          FUNC_0(FUNC_4(VAR_3, VAR_8,
                                    VAR_6));
        }
    }

  FUNC_0(FUNC_2(VAR_1,
                                   VAR_7, VAR_8,
                                   FUNC_1(VAR_6, "%ld", VAR_4),
                                   VAR_6));

  return VAR_0;
}
