
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_wcroot_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int * VAR_1 ;
 int FUNC_3 (scalar_t__*,int *,int *,char const**,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 int FUNC_4 (int *,int *,char const**,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 int FUNC_5 (char const**,int *,char const**,int *,int *,char const*,int *,int *) ;
 char const* FUNC_6 (char const*,char const*) ;
 char* FUNC_7 (char const*,int *) ;
 char* FUNC_8 (char const*,char const*,int *) ;
 int FUNC_9 (char const**,char const**,char const*,int *) ;
 int FUNC_10 (int *,int *,int *,char const**,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_revnum_t *VAR_5,
                   const char **VAR_6,
                   apr_int64_t *VAR_7,
                   svn_wc__db_wcroot_t *VAR_8,
                   const char *VAR_9,
                   apr_pool_t *VAR_10,
                   apr_pool_t *VAR_11)
{
  svn_wc__db_status_t VAR_12;

  FUNC_0(FUNC_3(&VAR_12, ((void*)0), VAR_5, VAR_6, VAR_7, ((void*)0),
                    ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                    ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                    ((void*)0), ((void*)0), ((void*)0),
                    VAR_8, VAR_9, VAR_10, VAR_11));

  if ((VAR_6 && !*VAR_6)
      || (VAR_7 && *VAR_7 == VAR_0))
    {
      if (VAR_12 == VAR_2)
        {
          FUNC_0(FUNC_4(((void*)0), ((void*)0), VAR_6, VAR_7, ((void*)0),
                                ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                VAR_8, VAR_9,
                                VAR_10, VAR_11));
        }
      else if (VAR_12 == VAR_3)
        {
          const char *VAR_13;
          const char *VAR_14;

          FUNC_0(FUNC_5(&VAR_13, ((void*)0),
                                &VAR_14,
                                ((void*)0), VAR_8,
                                VAR_9,
                                VAR_11,
                                VAR_11));

          if (VAR_14)
            {

              const char *VAR_15 = ((void*)0);





              FUNC_1(VAR_14 != ((void*)0));
              VAR_15 = FUNC_7(VAR_14,
                                                 VAR_11);

              FUNC_0(FUNC_4(((void*)0), ((void*)0), VAR_6, VAR_7,
                                    ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                    VAR_8, VAR_15,
                                    VAR_11, VAR_11));

              if (VAR_6)
                *VAR_6 = FUNC_8(
                                    *VAR_6,
                                    FUNC_6(VAR_15,
                                                             VAR_9),
                                    VAR_10);
            }
          else if (VAR_13)
            {
              FUNC_0(FUNC_10(((void*)0), ((void*)0), VAR_5,
                                                        VAR_6,
                                                        VAR_7,
                                                        ((void*)0), ((void*)0), ((void*)0),
                                                        ((void*)0), ((void*)0), ((void*)0),
                                                        ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                                        VAR_8,
                                                        VAR_13,
                                                        VAR_11,
                                                        VAR_11));

              if (VAR_6)
                *VAR_6 = FUNC_8(
                                    *VAR_6,
                                    FUNC_6(VAR_13,
                                                             VAR_9),
                                    VAR_10);
            }
          else
            FUNC_2();
        }
      else if (VAR_12 == VAR_4)
        {
          const char *VAR_16;
          const char *VAR_17;




          FUNC_9(&VAR_16, &VAR_17, VAR_9,
                            VAR_11);
          FUNC_0(FUNC_4(((void*)0), ((void*)0), VAR_6, VAR_7, ((void*)0),
                                ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                VAR_8, VAR_16,
                                VAR_11, VAR_11));

          if (VAR_6)
            *VAR_6 = FUNC_8(*VAR_6, VAR_17,
                                              VAR_10);

          return VAR_1;
        }
      else
        {


          FUNC_2();
        }
    }

  return VAR_1;
}
