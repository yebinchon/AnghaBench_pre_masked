
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int * svn_mergeinfo_t ;
struct TYPE_9__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int *,char const*,int *,int *) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 TYPE_1__* FUNC_4 (int **,int *,int ,char const*,char const*,int *,int ,int *,int *,int *) ;
 TYPE_1__* FUNC_5 (int **,int *,int *,int ,int ,int *,char const*,int *,int *) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;

svn_error_t *
FUNC_9(const char *VAR_6,
                            const char *VAR_7,
                            svn_client_ctx_t *VAR_8,
                            apr_pool_t *VAR_9)
{
  const char *VAR_10 = VAR_7;

  FUNC_1(FUNC_6(VAR_6));
  FUNC_1(!VAR_7 || FUNC_6(VAR_7));


  if (!VAR_10
      || FUNC_3(VAR_6, VAR_10) != 0)
    {
      svn_mergeinfo_t VAR_11;
      svn_mergeinfo_t VAR_12 = ((void*)0);
      svn_error_t *VAR_13;


      VAR_13 = FUNC_4(&VAR_11, ((void*)0),
                                         VAR_4,
                                         VAR_6,
                                         ((void*)0), ((void*)0), VAR_0,
                                         VAR_8, VAR_9, VAR_9);
      if (VAR_13)
        {
          if (VAR_13->apr_err == VAR_1)
            {



              FUNC_7(VAR_13);
              return VAR_2;
            }
          else
            {
              return FUNC_8(VAR_13);
            }
        }



      if (VAR_11 == ((void*)0))
        return VAR_2;


      VAR_13 = FUNC_4(&VAR_12, ((void*)0),
                                         VAR_5,
                                         VAR_6,
                                         VAR_10,
                                         ((void*)0), VAR_0, VAR_8, VAR_9, VAR_9);
      if (VAR_13)
        {
          if (VAR_13->apr_err == VAR_1)
            {

              FUNC_7(VAR_13);
              return VAR_2;
            }
          else
            {
              return FUNC_8(VAR_13);
            }
        }




      if (!VAR_12 && !VAR_7)
        {
          VAR_13 = FUNC_5(
            &VAR_12, ((void*)0), ((void*)0), VAR_3,
            VAR_5,
            ((void*)0), VAR_6, VAR_8, VAR_9);
          if (VAR_13)
            {
              if (VAR_13->apr_err == VAR_1)
                {


                  FUNC_7(VAR_13);
                  return VAR_2;
                }
              else
                {
                  return FUNC_8(VAR_13);
                }
            }
        }



      if (!VAR_12 && VAR_7)
        return VAR_2;

      FUNC_0(FUNC_2(VAR_12, VAR_11, VAR_6,
                              VAR_8, VAR_9));
    }
  return VAR_2;
}
