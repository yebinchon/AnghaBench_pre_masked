
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef scalar_t__ svn_subst_eol_style_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char const*) ;
 int * FUNC_3 (int ,int *,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int *,char const**,char const*,int ,int *,int *) ;
 int FUNC_5 (char const*,char const*,char const*,int,int *,int,int,int ,void*,int *) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_6 (scalar_t__,char const*,int *,int,int) ;
 int FUNC_7 (char const**,int *,char const*,int *,int *) ;
 int FUNC_8 (scalar_t__*,char const**,int **,int*,int *,char const*,int *,int ,int *,int *) ;

svn_error_t *
FUNC_9(const char **VAR_15,
                                 const char *VAR_16,
                                 svn_wc__db_t *VAR_17,
                                 const char *VAR_18,
                                 apr_uint32_t VAR_19,
                                 svn_cancel_func_t VAR_20,
                                 void *VAR_21,
                                 apr_pool_t *VAR_22,
                                 apr_pool_t *VAR_23)
{
  svn_subst_eol_style_t VAR_24;
  const char *VAR_25;
  apr_hash_t *VAR_26;
  svn_boolean_t VAR_27;

  FUNC_1(FUNC_2(VAR_16));
  FUNC_1(FUNC_2(VAR_18));
  FUNC_0(FUNC_8(&VAR_24, &VAR_25,
                                     &VAR_26,
                                     &VAR_27,
                                     VAR_17, VAR_18, ((void*)0), VAR_0,
                                     VAR_23, VAR_23));

  if (! FUNC_6(VAR_24, VAR_25, VAR_26, VAR_27, VAR_9)
      && (! (VAR_19 & VAR_4)))
    {

      *VAR_15 = VAR_16;
    }
  else
    {
      const char *VAR_28;
      const char *VAR_29;
      svn_boolean_t VAR_30
          = (VAR_19 & VAR_5) != 0;
      svn_boolean_t VAR_31 = (VAR_19 & VAR_7) == 0;

      if (VAR_19 & VAR_8)
        VAR_28 = ((void*)0);
      else
        FUNC_0(FUNC_7(&VAR_28, VAR_17, VAR_18,
                                               VAR_23, VAR_23));

      FUNC_0(FUNC_4(((void*)0), &VAR_29, VAR_28,
                (VAR_19 & VAR_6)
                  ? VAR_10
                  : VAR_11,
                VAR_22, VAR_23));






      if (VAR_31)
        {


          VAR_30 = VAR_9;
        }
      else
        {


          if (VAR_24 == VAR_13)
            VAR_25 = VAR_3;
          else if (VAR_24 == VAR_12)
            VAR_30 = VAR_9;
          else if (VAR_24 != VAR_14)
            return FUNC_3(VAR_1, ((void*)0), ((void*)0));
        }

      FUNC_0(FUNC_5(VAR_16, VAR_29,
                                            VAR_25, VAR_30,
                                            VAR_26,
                                            VAR_31,
                                            VAR_27,
                                            VAR_20, VAR_21,
                                            VAR_22));

      *VAR_15 = VAR_29;
    }

  return VAR_2;
}
