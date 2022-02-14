
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_wc_context_t ;
struct TYPE_8__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char const**,int ,int *) ;
 int FUNC_2 (char const*,char const*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char const*) ;
 char* FUNC_6 (char const*,char const*,int *) ;
 TYPE_1__* FUNC_7 (int *,char const**,int *,int *,int *,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(const char **VAR_2,
                   const char *VAR_3,
                   const char *VAR_4,
                   const char *VAR_5,
                   svn_wc_context_t *VAR_6,
                   const char *VAR_7,
                   apr_pool_t *VAR_8,
                   apr_pool_t *VAR_9)
{
  const char *VAR_10;

  if (! VAR_5
      || (VAR_7 && !FUNC_5(VAR_4)))
    {
      svn_error_t *VAR_11;


      FUNC_0(FUNC_1(&VAR_10,
                                      FUNC_2(VAR_7, VAR_3,
                                                      VAR_9),
                                      VAR_9));

      VAR_11 = FUNC_7(((void*)0), VAR_2, ((void*)0), ((void*)0),
                                        VAR_6, VAR_10,
                                        VAR_8, VAR_9);

      if (!VAR_5
          || ! VAR_11
          || (VAR_11 && VAR_11->apr_err != VAR_0))
        {
           return FUNC_4(VAR_11);
        }






      FUNC_3(VAR_11);
    }

  *VAR_2 = FUNC_6(VAR_5, VAR_3,
                                    VAR_8);

  return VAR_1;
}
