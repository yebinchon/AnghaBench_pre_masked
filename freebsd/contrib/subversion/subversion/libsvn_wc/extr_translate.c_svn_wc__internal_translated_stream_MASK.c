
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef scalar_t__ svn_subst_eol_style_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int * VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char const*) ;
 int * FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int **,char const*,int,int ,int *) ;
 int * FUNC_5 (int *,int,int *) ;
 int FUNC_6 (int **,char const*,int *,int *) ;
 int * FUNC_7 (int **,char const*,int *,int *) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int * FUNC_8 (int **,char const*,int *,int *) ;
 int * FUNC_9 (int *,char const*,int,int *,int,int *) ;
 scalar_t__ FUNC_10 (scalar_t__,char const*,int *,int,int) ;
 int FUNC_11 (scalar_t__*,char const**,int **,int*,int *,char const*,int *,int,int *,int *) ;

svn_error_t *
FUNC_12(svn_stream_t **VAR_14,
                                   svn_wc__db_t *VAR_15,
                                   const char *VAR_16,
                                   const char *VAR_17,
                                   apr_uint32_t VAR_18,
                                   apr_pool_t *VAR_19,
                                   apr_pool_t *VAR_20)
{
  svn_boolean_t VAR_21;
  svn_boolean_t VAR_22 = VAR_18 & VAR_9;
  svn_subst_eol_style_t VAR_23;
  const char *VAR_24;
  apr_hash_t *VAR_25;
  svn_boolean_t VAR_26 = VAR_18 & VAR_8;

  FUNC_1(FUNC_2(VAR_16));
  FUNC_1(FUNC_2(VAR_17));

  FUNC_0(FUNC_11(&VAR_23, &VAR_24,
                                     &VAR_25,
                                     &VAR_21,
                                     VAR_15, VAR_17, ((void*)0), VAR_4,
                                     VAR_20, VAR_20));

  if (VAR_21)
    {
      if (VAR_22)
        return FUNC_8(VAR_14, VAR_16, VAR_19,
                                          VAR_20);

      return FUNC_7(VAR_14, VAR_16, VAR_19,
                                          VAR_20);
    }

  if (VAR_22)
    FUNC_0(FUNC_6(VAR_14, VAR_16, VAR_19,
                                     VAR_20));
  else
    {
      apr_file_t *VAR_27;



      FUNC_0(FUNC_4(&VAR_27, VAR_16,
                               VAR_1 | VAR_3 | VAR_0,
                               VAR_2, VAR_19));
      *VAR_14 = FUNC_5(VAR_27, VAR_4, VAR_19);
    }

  if (FUNC_10(VAR_23, VAR_24, VAR_25, VAR_21, VAR_10))
    {
      if (VAR_22)
        {
          if (VAR_23 == VAR_12)
            VAR_24 = VAR_7;
          else if (VAR_23 == VAR_11)
            VAR_26 = VAR_10;
          else if (VAR_23 != VAR_13)
            return FUNC_3(VAR_5, ((void*)0), ((void*)0));


          *VAR_14 = FUNC_9(*VAR_14,
                                                VAR_24,
                                                VAR_26,
                                                VAR_25,
                                                VAR_4 ,
                                                VAR_19);




        }
      else
        {
          *VAR_14 = FUNC_9(*VAR_14, VAR_24, VAR_10,
                                                VAR_25, VAR_10, VAR_19);




        }
    }

  return VAR_6;
}
