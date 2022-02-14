
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
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int*,int,char const**,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,char*) ;
 int FUNC_5 (char*,int ) ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

int
FUNC_9(int VAR_5, const char *VAR_6[])
{
  apr_pool_t *VAR_7;
  int VAR_8 = VAR_1;
  svn_error_t *VAR_9;


  if (FUNC_5("svnbench", VAR_3) != VAR_1)
    return VAR_0;




  VAR_7 = FUNC_0(FUNC_7(VAR_2));

  VAR_9 = FUNC_1(&VAR_8, VAR_5, VAR_6, VAR_7);



  VAR_9 = FUNC_6(VAR_9, FUNC_3(VAR_4));

  if (VAR_9)
    {
      VAR_8 = VAR_0;
      FUNC_4(VAR_9, ((void*)0), "svnbench: ");
    }

  FUNC_8(VAR_7);

  FUNC_2();

  return VAR_8;
}
