
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (int*,int,char const**,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,char*) ;
 int FUNC_5 (char*,int ) ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_5 ;

int
FUNC_9(int VAR_6, const char *VAR_7[])
{
  apr_pool_t *VAR_8;
  int VAR_9 = VAR_1;
  svn_error_t *VAR_10;


  if (FUNC_5("svnserve", VAR_3) != VAR_1)
    return VAR_0;


  VAR_8 = FUNC_0(FUNC_7(VAR_2));

  VAR_10 = FUNC_2(&VAR_9, VAR_6, VAR_7, VAR_8);



  VAR_10 = FUNC_6(VAR_10, FUNC_3(VAR_4));

  if (VAR_10)
    {
      VAR_9 = VAR_0;
      FUNC_4(VAR_10, ((void*)0), "svnserve: ");
    }
  FUNC_8(VAR_8);
  return VAR_9;
}
