
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char const*,char const*,int ,int *) ;
 int FUNC_2 (int *,char const*,char const*,int *) ;
 int FUNC_3 (int *,int *,int *,int *,int *,char const*,int *,int ,int *,int *) ;
 int FUNC_4 (char const**,char const*,int *,char const*,int ,int ,void*,int *,int *) ;
 int FUNC_5 (int *,int *,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_boolean_t *VAR_4,
                       svn_wc__db_t *VAR_5,
                       const char *VAR_6,
                       svn_cancel_func_t VAR_7,
                       void *VAR_8,
                       apr_pool_t *VAR_9)
{
  svn_boolean_t VAR_10;
  const char *VAR_11;
  svn_boolean_t VAR_12;


  *VAR_4 = VAR_0;
  {
    const char *VAR_13 = VAR_6;






    FUNC_0(FUNC_4(&VAR_11, VAR_13, VAR_5,
                                             VAR_6,
                                             VAR_2,
                                             VAR_7, VAR_8,
                                             VAR_9, VAR_9));
    FUNC_0(FUNC_3(((void*)0), ((void*)0),
                                       ((void*)0),
                                       &VAR_12,
                                       VAR_5, VAR_6, ((void*)0), VAR_0,
                                       VAR_9, VAR_9));

    if (! VAR_12 && VAR_13 != VAR_11)
      FUNC_0(FUNC_2(&VAR_10, VAR_11,
                                           VAR_6, VAR_9));
    else
      VAR_10 = VAR_3;
  }

  if (! VAR_10)
    {
      FUNC_0(FUNC_1(VAR_11, VAR_6, VAR_0,
                                  VAR_9));
      *VAR_4 = VAR_3;
    }







  FUNC_0(FUNC_5(VAR_4, VAR_5, VAR_6,
                                        VAR_9));

  return VAR_1;
}
