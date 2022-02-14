
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * svn_mergeinfo_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int **,int *,char const*,int *,int *) ;
 int FUNC_3 (int*,int *,int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_boolean_t *VAR_3,
                       svn_mergeinfo_t VAR_4,
                       svn_mergeinfo_t VAR_5,
                       const char *VAR_6,
                       apr_pool_t *VAR_7)
{

  if (VAR_5 == ((void*)0))
    {
      *VAR_3 = VAR_0;
    }
  else if (FUNC_1(VAR_5) == 0)
    {



      *VAR_3 = (!VAR_4 || FUNC_1(VAR_4) == 0);
    }
  else if (!VAR_4 || FUNC_1(VAR_4) == 0)
    {


      *VAR_3 = VAR_0;
    }
  else
    {


      svn_mergeinfo_t VAR_8;


      if (VAR_6)
        FUNC_0(FUNC_2(
                  &VAR_8, VAR_4,
                  VAR_6, VAR_7, VAR_7));
      else
        VAR_8 = VAR_4;

      FUNC_0(FUNC_3(VAR_3,
                                    VAR_8,
                                    VAR_5, VAR_2, VAR_7));
    }

  return VAR_1;
}
