
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int *,char const*) ;
 int * FUNC_4 (char const**,char const**,int*,int *,char const*,TYPE_1__*,char const*,int *,int *) ;
 int FUNC_5 (TYPE_1__*,char const*,int *) ;
 int VAR_5 ;
 int FUNC_6 (char const*) ;
 int * FUNC_7 (int ,int ,int ,int ) ;
 int * FUNC_8 (int *) ;
 char* FUNC_9 (char const*,int *) ;
 int FUNC_10 (int *,char*,int ,char const*) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int ) ;
 scalar_t__ FUNC_13 (int *,int,int ) ;
 int FUNC_14 (int **,int ,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int*,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static svn_error_t *
FUNC_17(const char **VAR_8,
              const char **VAR_9,
              const char **VAR_10,
              const char **VAR_11,
              svn_wc__db_wcroot_t *VAR_12,
              const char *VAR_13,
              apr_pool_t *VAR_14,
              apr_pool_t *VAR_15)
{
  const char *VAR_16 = VAR_13;
  svn_sqlite__stmt_t *VAR_17;
  svn_wc__db_status_t VAR_18;
  svn_boolean_t VAR_19, VAR_20, VAR_21;
  int VAR_22;


  if (VAR_8 != ((void*)0))
    *VAR_8 = ((void*)0);
  if (VAR_9 != ((void*)0))
    *VAR_9 = ((void*)0);
  if (VAR_10 != ((void*)0))
    *VAR_10 = ((void*)0);
  if (VAR_11 != ((void*)0))
    *VAR_11 = ((void*)0);




  VAR_20 = (VAR_11 || VAR_9);

  FUNC_0(FUNC_14(
                    &VAR_17, VAR_12->sdb, VAR_0));

  FUNC_0(FUNC_10(VAR_17, "is", VAR_12->wc_id, VAR_16));
  FUNC_0(FUNC_16(&VAR_19, VAR_17));
  if (!VAR_19)
    return FUNC_7(VAR_1, FUNC_15(VAR_17),
                             FUNC_2("The node '%s' was not found."),
                             FUNC_5(VAR_12, VAR_13,
                                                    VAR_15));

  VAR_18 = FUNC_13(VAR_17, 1, VAR_5);
  VAR_21 = !FUNC_12(VAR_17, 0);
  if (VAR_18 != VAR_7
      && VAR_18 != VAR_6)
    return FUNC_7(VAR_2,
                             FUNC_15(VAR_17),
                             FUNC_2("Expected node '%s' to be deleted."),
                             FUNC_5(VAR_12, VAR_13,
                                                    VAR_15));

  VAR_22 = FUNC_11(VAR_17, 2);





  if (VAR_18 == VAR_7
      && VAR_10 && !*VAR_10)
    {
      *VAR_10 = FUNC_3(VAR_14, VAR_16);

      if (!VAR_20 && !VAR_8)
        {

          FUNC_0(FUNC_15(VAR_17));
          return VAR_3;
        }
    }


  while (VAR_4)
    {
      svn_error_t *VAR_23;
      const char *VAR_24;
      int VAR_25 = FUNC_6(VAR_16);



      while (VAR_4)
        {
          if (VAR_20)
            {
              VAR_23 = FUNC_4(VAR_9, VAR_11,
                                 &VAR_20, VAR_17, VAR_16,
                                 VAR_12, VAR_13,
                                 VAR_14, VAR_15);
              if (VAR_23 || (!VAR_20
                          && !VAR_8
                          && !VAR_10))
                {

                  FUNC_0(FUNC_15(VAR_17));
                  return FUNC_8(VAR_23);
                }
            }

          if (VAR_25 <= VAR_22)
            break;

          VAR_16 = FUNC_9(VAR_16, VAR_15);
          --VAR_25;

          if (VAR_20 || VAR_25 == VAR_22)
            {
              FUNC_0(FUNC_15(VAR_17));
              FUNC_0(FUNC_10(VAR_17, "is", VAR_12->wc_id,
                                        VAR_16));
              FUNC_0(FUNC_16(&VAR_19, VAR_17));
              FUNC_1(VAR_19);
              VAR_21 = !FUNC_12(VAR_17, 0);
            }
        }
      FUNC_0(FUNC_15(VAR_17));



      FUNC_1(VAR_16[0] != '\0');
      VAR_24 = FUNC_9(VAR_16, VAR_15);
      FUNC_0(FUNC_10(VAR_17, "is", VAR_12->wc_id, VAR_24));
      FUNC_0(FUNC_16(&VAR_19, VAR_17));
      if (!VAR_19)
        {



          if (VAR_21 && VAR_8)
            *VAR_8 = FUNC_3(VAR_14, VAR_16);
          break;
        }



      if (VAR_10 && !*VAR_10)
        {
          *VAR_10 = FUNC_3(VAR_14, VAR_16);

          if (!VAR_20 && !VAR_8)
            break;
        }

      VAR_16 = VAR_24;
      VAR_22 = FUNC_11(VAR_17, 2);
      VAR_21 = !FUNC_12(VAR_17, 0);
    }

  FUNC_0(FUNC_15(VAR_17));

  return VAR_3;
}
