
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char const* FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char*,int *) ;
 char* FUNC_3 (char const*,char const*,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_fs_t *VAR_1,
                     const char *VAR_2,
                     svn_revnum_t VAR_3,
                     svn_revnum_t VAR_4,
                     int VAR_5,
                     apr_pool_t *VAR_6)
{
  const char *VAR_7;
  const char *VAR_8;
  svn_revnum_t VAR_9;
  apr_pool_t *VAR_10;


  VAR_7 = FUNC_1(VAR_6, "%ld", VAR_3 / VAR_5);
  VAR_8 = FUNC_3(VAR_2, VAR_7, VAR_6);

  VAR_10 = FUNC_5(VAR_6);
  for (VAR_9 = VAR_3; VAR_9 < VAR_4; VAR_9++)
    {
      FUNC_4(VAR_10);


      if (VAR_9 != VAR_3 && VAR_9 % VAR_5 == 0)
        {
          VAR_7 = FUNC_1(VAR_10, "%ld", VAR_9 / VAR_5);
          VAR_8 = FUNC_3(VAR_2, VAR_7, VAR_6);
        }


      FUNC_0(FUNC_2(FUNC_3(VAR_8,
                                                  FUNC_1(VAR_10,
                                                               "%ld", VAR_9),
                                                  VAR_10),
                                  VAR_10));
    }

  FUNC_6(VAR_10);

  return VAR_0;
}
