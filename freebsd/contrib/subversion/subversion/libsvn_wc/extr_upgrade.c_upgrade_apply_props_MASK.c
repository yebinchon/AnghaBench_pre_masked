
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_sqlite__db_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
typedef int apr_hash_t ;
struct TYPE_3__ {scalar_t__ nelts; } ;
typedef TYPE_1__ apr_array_header_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 int VAR_7 ;
 int FUNC_3 (char const*,char const*,int *) ;
 int FUNC_4 (int ,int *) ;
 int * FUNC_5 (int ,int *,int ,int ) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__**,int *,int *,int *) ;
 int FUNC_8 (char const*,int *) ;
 int FUNC_9 (int *,int,int *,int *) ;
 int FUNC_10 (int *,int,int ) ;
 int FUNC_11 (int *,char*,int ,char const*,...) ;
 int FUNC_12 (int *,int ) ;
 scalar_t__ FUNC_13 (int *,int,int ) ;
 int FUNC_14 (int **,int *,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (scalar_t__*,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int*,int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static svn_error_t *
FUNC_19(svn_sqlite__db_t *VAR_11,
                    const char *VAR_12,
                    const char *VAR_13,
                    apr_hash_t *VAR_14,
                    apr_hash_t *VAR_15,
                    apr_hash_t *VAR_16,
                    int VAR_17,
                    apr_int64_t VAR_18,
                    apr_pool_t *VAR_19)
{
  svn_sqlite__stmt_t *VAR_20;
  svn_boolean_t VAR_21;
  int VAR_22 = -1;
  int VAR_23 = -1;
  svn_wc__db_status_t VAR_24;
  svn_wc__db_status_t VAR_25;
  int VAR_26;
  FUNC_0(FUNC_14(&VAR_20, VAR_11, VAR_1));
  FUNC_0(FUNC_11(VAR_20, "is", VAR_18, VAR_13));
  FUNC_0(FUNC_16(&VAR_21, VAR_20));
  if (VAR_21)
    {
      VAR_22 = FUNC_12(VAR_20, 0);
      VAR_24 = FUNC_13(VAR_20, 3, VAR_7);
      FUNC_0(FUNC_16(&VAR_21, VAR_20));
      if (VAR_21)
        {
          VAR_25 = FUNC_13(VAR_20, 3, VAR_7);



          if (VAR_25 == VAR_10
              || VAR_25 == VAR_8)
            FUNC_0(FUNC_16(&VAR_21, VAR_20));

          if (VAR_21)
            {
              VAR_25 = FUNC_13(VAR_20, 3, VAR_7);
              VAR_23 = FUNC_12(VAR_20, 0);
            }
        }
    }
  FUNC_0(FUNC_15(VAR_20));



  if (VAR_17 > VAR_6
      && VAR_15 == ((void*)0)
      && VAR_22 != -1
      && VAR_24 == VAR_9
      && VAR_23 != -1
      && VAR_25 != VAR_10)
    {


      return FUNC_5(VAR_4, ((void*)0),
                               FUNC_2("The properties of '%s' are in an "
                                 "indeterminate state and cannot be "
                                 "upgraded. See issue #2530."),
                               FUNC_4(
                                 FUNC_3(VAR_12, VAR_13,
                                                 VAR_19), VAR_19));
    }


  if (VAR_22 == -1
      || (VAR_23 == -1 && VAR_15))
    return FUNC_5(VAR_4, ((void*)0),
                             FUNC_2("Insufficient NODES rows for '%s'"),
                             FUNC_4(
                               FUNC_3(VAR_12, VAR_13,
                                               VAR_19), VAR_19));







  if (VAR_15 || VAR_23 == -1)
    {
      FUNC_0(FUNC_14(&VAR_20, VAR_11,
                                        VAR_3));
      FUNC_0(FUNC_11(VAR_20, "isd",
                                VAR_18, VAR_13, VAR_22));
      FUNC_0(FUNC_9(VAR_20, 4, VAR_14, VAR_19));
      FUNC_0(FUNC_18(&VAR_26, VAR_20));

      FUNC_1(VAR_26 == 1);
    }

  if (VAR_23 != -1)
    {
      apr_hash_t *VAR_27 = VAR_15 ? VAR_15 : VAR_14;

      FUNC_0(FUNC_14(&VAR_20, VAR_11,
                                        VAR_3));
      FUNC_0(FUNC_11(VAR_20, "isd",
                                VAR_18, VAR_13, VAR_23));
      FUNC_0(FUNC_9(VAR_20, 4, VAR_27, VAR_19));
      FUNC_0(FUNC_18(&VAR_26, VAR_20));

      FUNC_1(VAR_26 == 1);
    }


  if (VAR_16 != ((void*)0)
      && VAR_14 != ((void*)0))
    {
      apr_array_header_t *VAR_28;

      FUNC_0(FUNC_7(&VAR_28, VAR_16, VAR_14, VAR_19));

      if (VAR_28->nelts == 0)
        VAR_16 = ((void*)0);
    }

  if (VAR_16 != ((void*)0))
    {
      FUNC_0(FUNC_14(&VAR_20, VAR_11,
                                  VAR_2));
      FUNC_0(FUNC_11(VAR_20, "is", VAR_18, VAR_13));
      FUNC_0(FUNC_9(VAR_20, 3, VAR_16,
                                          VAR_19));
      FUNC_0(FUNC_18(&VAR_26, VAR_20));

      if (VAR_26 == 0)
        {


          FUNC_0(FUNC_14(&VAR_20, VAR_11,
                                            VAR_0));
          FUNC_0(FUNC_11(VAR_20, "is", VAR_18, VAR_13));
          if (*VAR_13 != '\0')
            FUNC_0(FUNC_10(VAR_20, 3,
                                          FUNC_8(VAR_13,
                                                              VAR_19)));
          FUNC_0(FUNC_9(VAR_20, 4, VAR_16,
                                              VAR_19));
          return FUNC_6(FUNC_17(VAR_20));
        }
    }

  return VAR_5;
}
