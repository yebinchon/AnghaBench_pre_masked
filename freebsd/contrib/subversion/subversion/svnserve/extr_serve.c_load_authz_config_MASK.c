
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_config_t ;
struct TYPE_4__ {void* username_case; int * authzdb; int repos; } ;
typedef TYPE_1__ repository_t ;
typedef int apr_pool_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int * FUNC_0 (char const**,TYPE_1__*,char const*,int *) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,char const**,int ,int ,int *) ;
 int * FUNC_3 (int ,int *,int *) ;
 int * FUNC_4 (int **,char const*,char const*,int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(repository_t *VAR_10,
                  const char *VAR_11,
                  svn_config_t *VAR_12,
                  apr_pool_t *VAR_13)
{
  const char *VAR_14;
  const char *VAR_15;
  svn_error_t *VAR_16;


  FUNC_2(VAR_12, &VAR_14, VAR_6,
                 VAR_3, ((void*)0));

  FUNC_2(VAR_12, &VAR_15, VAR_6,
                 VAR_5, ((void*)0));

  if (VAR_14)
    {
      const char *VAR_17;


      VAR_16 = FUNC_0(&VAR_14, VAR_10,
                                     VAR_11, VAR_13);


      if (VAR_15 && !VAR_16)
        VAR_16 = FUNC_0(&VAR_15, VAR_10,
                                       VAR_11, VAR_13);

      if (!VAR_16)
        VAR_16 = FUNC_4(&VAR_10->authzdb, VAR_14,
                                    VAR_15, VAR_9, VAR_10->repos,
                                    VAR_13, VAR_13);

      if (VAR_16)
        return FUNC_3(VAR_7, VAR_16, ((void*)0));



      FUNC_2(VAR_12, &VAR_17,
                     VAR_6,
                     VAR_4, ((void*)0));
      if (VAR_17)
        {
          if (FUNC_1(VAR_17, "upper") == 0)
            VAR_10->username_case = VAR_2;
          else if (FUNC_1(VAR_17, "lower") == 0)
            VAR_10->username_case = VAR_1;
          else
            VAR_10->username_case = VAR_0;
        }
    }
  else
    {
      VAR_10->authzdb = ((void*)0);
      VAR_10->username_case = VAR_0;
    }

  return VAR_8;
}
