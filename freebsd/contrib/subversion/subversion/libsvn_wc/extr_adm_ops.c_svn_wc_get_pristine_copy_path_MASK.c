
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_wc__db_t ;
struct TYPE_8__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (char const*,int *) ;
 int FUNC_2 (char const**,char const*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (char const**,int *,char const*,int *,int *) ;
 int FUNC_7 (int **,int *,int ,int ,int *,int *) ;
 TYPE_1__* FUNC_8 (char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_9(const char *VAR_3,
                              const char **VAR_4,
                              apr_pool_t *VAR_5)
{
  svn_wc__db_t *VAR_6;
  const char *VAR_7;
  svn_error_t *VAR_8;

  FUNC_0(FUNC_2(&VAR_7, VAR_3, VAR_5));

  FUNC_0(FUNC_7(&VAR_6, ((void*)0), VAR_0, VAR_2, VAR_5, VAR_5));




  VAR_8 = FUNC_8(VAR_4, VAR_6, VAR_7,
                                       VAR_5, VAR_5);
  if (VAR_8 && VAR_8->apr_err == VAR_1)
    {


      const char *VAR_9;

      FUNC_3(VAR_8);

      VAR_8 = FUNC_6(&VAR_9, VAR_6, VAR_7,
                                  VAR_5, VAR_5);
      if (VAR_8 == ((void*)0))
        *VAR_4 = FUNC_1(VAR_9, VAR_5);
    }

   return FUNC_4(VAR_8, FUNC_5(VAR_6));
}
