
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef scalar_t__ svn_subst_eol_style_t ;
typedef int svn_stream_t ;
typedef scalar_t__ svn_filesize_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int * VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char const*) ;
 int * FUNC_3 (int ,int ,int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int **,char const*,int ,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int*,int *,int *,int *) ;
 int * FUNC_8 (int *,int,int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (int **,char const*,int *,int *) ;
 int * FUNC_10 (int *,char const*,int,int *,int,int *) ;
 int FUNC_11 (scalar_t__,char const*,int *,int,int) ;
 int FUNC_12 (scalar_t__*,char const**,int **,int*,int *,char const*,int *,int,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_13(svn_boolean_t *VAR_10,
                   svn_wc__db_t *VAR_11,
                   const char *VAR_12,
                   svn_filesize_t VAR_13,
                   svn_stream_t *VAR_14,
                   svn_filesize_t VAR_15,
                   svn_boolean_t VAR_16,
                   svn_boolean_t VAR_17,
                   svn_boolean_t VAR_18,
                   apr_pool_t *VAR_19)
{
  svn_boolean_t VAR_20;
  svn_subst_eol_style_t VAR_21;
  const char *VAR_22;
  apr_hash_t *VAR_23;
  svn_boolean_t VAR_24 = VAR_2;
  svn_boolean_t VAR_25;
  svn_stream_t *VAR_26;

  FUNC_1(FUNC_2(VAR_12));

  if (VAR_17)
    VAR_16 = VAR_6;

  if (VAR_16)
    {
      FUNC_0(FUNC_12(&VAR_21, &VAR_22,
                                         &VAR_23,
                                         &VAR_24,
                                         VAR_11, VAR_12, ((void*)0),
                                         !VAR_18,
                                         VAR_19, VAR_19));

      VAR_25 = FUNC_11(VAR_21, VAR_22,
                                                        VAR_23, VAR_24,
                                                        VAR_6);
    }
  else
    VAR_25 = VAR_2;

  if (! VAR_25
      && (VAR_13 != VAR_15))
    {
      *VAR_10 = VAR_6;


      return FUNC_4(FUNC_6(VAR_14));
    }




  if (VAR_24 && VAR_25)
    {
      FUNC_0(FUNC_9(&VAR_26, VAR_12,
                                          VAR_19, VAR_19));
    }
  else
    {


      apr_file_t *VAR_27;
      FUNC_0(FUNC_5(&VAR_27, VAR_12, VAR_1,
                               VAR_0, VAR_19));
      VAR_26 = FUNC_8(VAR_27, VAR_2, VAR_19);

      if (VAR_25)
        {
          if (!VAR_18)
            {
              if (VAR_21 == VAR_8)
                VAR_22 = VAR_5;
              else if (VAR_21 != VAR_7
                       && VAR_21 != VAR_9)
                return FUNC_3(VAR_3,
                                        FUNC_6(VAR_26), ((void*)0));



              VAR_26 = FUNC_10(VAR_26,
                                                     VAR_22,
                                                     VAR_6 ,
                                                     VAR_23,
                                                     VAR_2 ,
                                                     VAR_19);
            }
          else
            {


              VAR_14 = FUNC_10(VAR_14,
                                                            VAR_22, VAR_2,
                                                            VAR_23, VAR_6,
                                                            VAR_19);
            }
        }
    }

  FUNC_0(FUNC_7(&VAR_20, VAR_14, VAR_26,
                                    VAR_19));

  *VAR_10 = (! VAR_20);

  return VAR_4;
}
