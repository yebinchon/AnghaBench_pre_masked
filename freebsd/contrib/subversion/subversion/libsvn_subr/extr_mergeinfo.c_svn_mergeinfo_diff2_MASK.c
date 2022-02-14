
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * svn_mergeinfo_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int *,int *,int ,int *,int *) ;

svn_error_t *
FUNC_4(svn_mergeinfo_t *VAR_1, svn_mergeinfo_t *VAR_2,
                    svn_mergeinfo_t VAR_3, svn_mergeinfo_t VAR_4,
                    svn_boolean_t VAR_5,
                    apr_pool_t *VAR_6,
                    apr_pool_t *VAR_7)
{
  if (VAR_3 && VAR_4 == ((void*)0))
    {
      *VAR_1 = FUNC_2(VAR_3, VAR_6);
      *VAR_2 = FUNC_1(VAR_6);
    }
  else if (VAR_3 == ((void*)0) && VAR_4)
    {
      *VAR_1 = FUNC_1(VAR_6);
      *VAR_2 = FUNC_2(VAR_4, VAR_6);
    }
  else
    {
      *VAR_1 = FUNC_1(VAR_6);
      *VAR_2 = FUNC_1(VAR_6);

      if (VAR_3 && VAR_4)
        {
          FUNC_0(FUNC_3(VAR_3, VAR_4, *VAR_1, *VAR_2,
                                               VAR_5,
                                               VAR_6, VAR_7));
        }
    }

  return VAR_0;
}
