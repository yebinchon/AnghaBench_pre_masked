
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int WCHAR ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (char const*,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * FUNC_6 (char const**,char const*,int *) ;
 char* FUNC_7 (char const*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ,int *,int *) ;
 int * FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (int **,char const*,int *,int *) ;

svn_error_t *
FUNC_13(const char *VAR_9, FILE* VAR_10, apr_pool_t *VAR_11)
{
  svn_error_t *VAR_12;
  const char *VAR_13;
  VAR_12 = FUNC_6(&VAR_13, VAR_9, VAR_11);

  if (VAR_12)
    {
      FUNC_9(VAR_12);
      VAR_13 = FUNC_7(VAR_9, VAR_11);
    }





  VAR_4 = 0;

  if (FUNC_5(VAR_13, VAR_10) == VAR_0)
    {
      if (FUNC_4())
        {


          if (FUNC_1(FUNC_4()))
            return FUNC_10(VAR_1, ((void*)0), ((void*)0));
          else
            return FUNC_11(FUNC_4(), FUNC_2("Write error"));
        }
      else
        return FUNC_10(VAR_2, ((void*)0), ((void*)0));
    }

  return VAR_3;
}
