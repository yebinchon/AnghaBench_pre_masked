
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_wc_operation_t ;
typedef int svn_wc_conflict_choice_t ;
typedef int svn_wc__db_t ;
typedef int svn_stringbuf_t ;
typedef char svn_string_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int **,int*,int *,char const*,char const*,int *,int *) ;
 int * FUNC_8 (int ,int *,int ) ;
 char* FUNC_9 (int *,char const*) ;
 int FUNC_10 (int *,char const*,char const*) ;
 char* FUNC_11 (int *) ;
 int FUNC_12 (int **,char const*,int *) ;
 int FUNC_13 (scalar_t__*,int *,int *,int*,int *,int *,char const*,int *,int *,int *) ;
 int FUNC_14 (char const**,int **,int **,int **,int **,int *,char const*,int *,int *,int *) ;
 int FUNC_15 (int*,int *,int *,char const*,int,char const*,int,int *,int *) ;
 int FUNC_16 (int *,char const*,int,int,int,int *,int *) ;
 int FUNC_17 (int *,char const*,int *,int,int *,int *,int *) ;
 int FUNC_18 (int **,int *,char const*,int *,int *) ;
 int FUNC_19 (int **,int *,char const*,int *,int *) ;
 int FUNC_20 (int **,int *,char const*,int *,int *) ;
 int FUNC_21 (int *,char const*,int ,void*,int *) ;






 scalar_t__ VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_22(svn_boolean_t *VAR_5,
                              svn_wc__db_t *VAR_6,
                              const char *VAR_7,
                              svn_skel_t *VAR_8,
                              const char *VAR_9,
                              svn_wc_conflict_choice_t VAR_10,
                              const char *VAR_11,
                              const svn_string_t *VAR_12,
                              svn_cancel_func_t VAR_13,
                              void *VAR_14,
                              apr_pool_t *VAR_15)
{
  const char *VAR_16;
  apr_hash_t *VAR_17;
  apr_hash_t *VAR_18;
  apr_hash_t *VAR_19;
  apr_hash_t *VAR_20;
  apr_hash_t *VAR_21;
  apr_hash_t *VAR_22 = ((void*)0);
  svn_skel_t *VAR_23 = ((void*)0);
  svn_wc_operation_t VAR_24;
  svn_boolean_t VAR_25;
  apr_hash_t *VAR_26;
  svn_boolean_t VAR_27, VAR_28;

  *VAR_5 = VAR_0;

  FUNC_0(FUNC_13(&VAR_24, ((void*)0), ((void*)0), &VAR_25,
                                     ((void*)0), VAR_6, VAR_7, VAR_8,
                                     VAR_15, VAR_15));
  if (!VAR_25)
    return VAR_2;

  FUNC_0(FUNC_14(&VAR_16,
                                              &VAR_17, &VAR_18,
                                              &VAR_19, &VAR_20,
                                              VAR_6, VAR_7, VAR_8,
                                              VAR_15, VAR_15));

  if (!VAR_20)
    {


      FUNC_0(FUNC_7(&VAR_23, VAR_5,
                                             VAR_6, VAR_7, VAR_16,
                                             VAR_15, VAR_15));
      FUNC_0(FUNC_16(VAR_6, VAR_7, VAR_0, VAR_3, VAR_0,
                                      VAR_23, VAR_15));
      FUNC_0(FUNC_21(VAR_6, VAR_7, VAR_13, VAR_14,
                             VAR_15));
      return VAR_2;
    }

  if (VAR_9[0] != '\0'
      && !FUNC_9(VAR_20, VAR_9))
    {
      return VAR_2;
    }

  if (VAR_24 == VAR_4)
      FUNC_0(FUNC_18(&VAR_21, VAR_6, VAR_7,
                                             VAR_15, VAR_15));
    else
      VAR_21 = VAR_18;

  FUNC_0(FUNC_19(&VAR_26, VAR_6, VAR_7,
                                VAR_15, VAR_15));
  switch (VAR_10)
    {
    case 133:
      VAR_22 = VAR_18 ? VAR_18 : VAR_21;
      break;
    case 130:
    case 131:
      VAR_22 = VAR_17;
      break;
    case 128:
    case 129:
      VAR_22 = VAR_19;
      break;
    case 132:
      if ((VAR_11 || VAR_12) && VAR_9[0] != '\0')
        {
          VAR_22 = FUNC_2(VAR_15, VAR_26);

          if (!VAR_12)
            {
              svn_stringbuf_t *VAR_29;

              FUNC_0(FUNC_12(&VAR_29, VAR_11,
                                               VAR_15));

              VAR_12 = FUNC_11(VAR_29);
            }
          FUNC_10(VAR_22, VAR_9, VAR_12);
        }
      else
        VAR_22 = ((void*)0);
      break;
    default:
      return FUNC_8(VAR_1, ((void*)0),
                              FUNC_1("Invalid 'conflict_result' argument"));
    }


  if (VAR_22)
    {
      apr_hash_index_t *VAR_30;
      apr_hash_t *VAR_31;

      if (VAR_9[0] == '\0')
        {

          VAR_31 = VAR_20;
        }
      else
        {

          VAR_31 = FUNC_4(VAR_15);
          FUNC_10(VAR_31, VAR_9, "");
        }


      for (VAR_30 = FUNC_3(VAR_15, VAR_31);
           VAR_30;
           VAR_30 = FUNC_5(VAR_30))
        {
          const char *VAR_32 = FUNC_6(VAR_30);
          svn_string_t *VAR_33 = ((void*)0);

          VAR_33 = FUNC_9(VAR_22, VAR_32);

          FUNC_10(VAR_26, VAR_32, VAR_33);
        }
    }




  FUNC_0(FUNC_15(&VAR_27, VAR_8,
                                        VAR_6, VAR_7,
                                        VAR_0, VAR_9,
                                        VAR_0,
                                        VAR_15, VAR_15));

  if (!VAR_27)
    {

      FUNC_0(FUNC_13(((void*)0), ((void*)0), ((void*)0), &VAR_25,
                                         ((void*)0), VAR_6, VAR_7, VAR_8,
                                         VAR_15, VAR_15));

      VAR_28 = (! VAR_25);
    }
  else
    {
      VAR_28 = VAR_3;
      VAR_8 = ((void*)0);
    }

  if (VAR_28)
    {





      FUNC_0(FUNC_7(&VAR_23, VAR_5,
                                             VAR_6, VAR_7,
                                             VAR_16,
                                             VAR_15, VAR_15));
    }
  else
    {

      FUNC_0(FUNC_20(&VAR_23,
                                            VAR_6, VAR_7,
                                            VAR_15, VAR_15));
      *VAR_5 = VAR_3;
    }


  FUNC_0(FUNC_17(VAR_6, VAR_7, VAR_26,
                                  VAR_0, VAR_8, VAR_23,
                                  VAR_15));

  if (VAR_27)
    {


      FUNC_0(FUNC_16(VAR_6, VAR_7,
                                          VAR_0, VAR_3, VAR_0,
                                          ((void*)0), VAR_15));
    }

  FUNC_0(FUNC_21(VAR_6, VAR_7, VAR_13, VAR_14,
                         VAR_15));

  return VAR_2;
}
