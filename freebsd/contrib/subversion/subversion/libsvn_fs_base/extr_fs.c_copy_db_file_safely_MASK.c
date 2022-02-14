
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_10__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* VAR_5 ;
 char* FUNC_3 (int *,int ) ;
 char* FUNC_4 (char const*,char const*,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int *,int *) ;
 TYPE_1__* FUNC_7 (int **,char const*,int,int ,int *) ;
 TYPE_1__* FUNC_8 (int *,char*,int *,int *) ;
 TYPE_1__* FUNC_9 (int *,char*,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(const char *VAR_6,
                    const char *VAR_7,
                    const char *VAR_8,
                    u_int32_t VAR_9,
                    svn_boolean_t VAR_10,
                    apr_pool_t *VAR_11)
{
  apr_file_t *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
  const char *VAR_14 = FUNC_4(VAR_6, VAR_8, VAR_11);
  const char *VAR_15 = FUNC_4(VAR_7, VAR_8, VAR_11);
  svn_error_t *VAR_16;
  char *VAR_17;



  VAR_16 = FUNC_7(&VAR_12, VAR_14,
                         (VAR_3 | VAR_1),
                         VAR_2, VAR_11);
  if (VAR_16 && FUNC_0(VAR_16->apr_err) && VAR_10)
    {
      FUNC_5(VAR_16);
      return VAR_5;
    }
  FUNC_2(VAR_16);


  FUNC_2(FUNC_7(&VAR_13, VAR_15, (VAR_4 | VAR_0 |
                                               VAR_1),
                           VAR_2, VAR_11));


  VAR_17 = FUNC_3(VAR_11, VAR_9);


  while (1)
    {
      apr_size_t VAR_18 = VAR_9;
      svn_error_t *VAR_19, *VAR_20;


      if ((VAR_19 = FUNC_8(VAR_12, VAR_17, &VAR_18, VAR_11)))
        {
          if (FUNC_1(VAR_19->apr_err))
            FUNC_5(VAR_19);
          else
            {
              FUNC_5(FUNC_6(VAR_12, VAR_11));
              FUNC_5(FUNC_6(VAR_13, VAR_11));
              return VAR_19;
            }
        }


      if ((VAR_20 = FUNC_9(VAR_13, VAR_17, VAR_18, ((void*)0),
                                              VAR_11)))
        {
          FUNC_5(FUNC_6(VAR_12, VAR_11));
          FUNC_5(FUNC_6(VAR_13, VAR_11));
          return VAR_20;
        }



      if (VAR_19)
        {
          FUNC_2(FUNC_6(VAR_12, VAR_11));
          FUNC_2(FUNC_6(VAR_13, VAR_11));
          break;
        }
    }

  return VAR_5;
}
