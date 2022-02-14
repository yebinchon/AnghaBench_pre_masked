
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char const*,char const*,char const*,char const*,int ,int ,int *) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 int FUNC_5 (char const*) ;
 int * FUNC_6 (int ,int *,int ,char const*,char const*,char const*,...) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (char const*,char const*,int *) ;
 int FUNC_9 (char const*,char const*) ;
 char* FUNC_10 (char const*,char const*,int *) ;
 int FUNC_11 (int *,int *,int *,char const**,char const**,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 int FUNC_12 (scalar_t__*,int *,int *,char const**,char const**,char const**,int *,int *,int *,int *,int *,int *,char const**,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 int FUNC_13 (int *,int *,char const**,char const**,char const**,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_14 (int*,int *,char const*,int ,int *) ;

svn_error_t *
FUNC_15(svn_wc__db_t *VAR_6,
                            const char *VAR_7,
                            const char *VAR_8,
                            const char *VAR_9,
                            const char *VAR_10,
                            svn_revnum_t VAR_11,
                            svn_depth_t VAR_12,
                            apr_pool_t *VAR_13)
{
  int VAR_14;
  const char *VAR_15;
  const char *VAR_16;
  svn_boolean_t VAR_17;
  const char *VAR_18 = FUNC_10(VAR_9, VAR_8,
                                                    VAR_13);
  svn_wc__db_status_t VAR_19;
  const char *VAR_20, *VAR_21, *VAR_22;
  svn_revnum_t VAR_23;

  FUNC_1(FUNC_5(VAR_7));
  FUNC_1(VAR_8 != ((void*)0));
  FUNC_1(VAR_9 != ((void*)0));
  FUNC_1(VAR_10 != ((void*)0));
  FUNC_1(VAR_18 != ((void*)0));

  FUNC_0(FUNC_14(&VAR_14, VAR_6, VAR_7, VAR_2,
                                    VAR_13));



  if (VAR_14 == 0)
    return FUNC_7(FUNC_3(VAR_6, VAR_7,
                                    VAR_18, VAR_9, VAR_10,
                                    VAR_11, VAR_12, VAR_13));

  FUNC_0(FUNC_12(&VAR_19, ((void*)0),
                               &VAR_23, &VAR_20,
                               &VAR_21, &VAR_22,
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               &VAR_15, &VAR_16,
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), &VAR_17, ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0),
                               VAR_6, VAR_7, VAR_13, VAR_13));





  if (VAR_19 != VAR_4
      && VAR_19 != VAR_5)
    {

      if (VAR_23 != VAR_11)
        return
          FUNC_6(VAR_0, ((void*)0),
                            FUNC_2("Revision %ld doesn't match existing "
                              "revision %ld in '%s'"),
                            VAR_11, VAR_23, VAR_7);

      if (!VAR_21)
        {
          if (VAR_19 == VAR_3)
            FUNC_0(FUNC_13(((void*)0), ((void*)0),
                                             &VAR_20,
                                             &VAR_21,
                                             &VAR_22,
                                             ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                             VAR_6, VAR_7,
                                             VAR_13, VAR_13));
          else
            FUNC_0(FUNC_11(((void*)0), ((void*)0), ((void*)0),
                                             &VAR_20,
                                             &VAR_21,
                                             &VAR_22, ((void*)0), ((void*)0), ((void*)0),
                                             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                             ((void*)0), ((void*)0),
                                             VAR_6, VAR_7,
                                             VAR_13, VAR_13));
        }






      if (FUNC_4(VAR_22, VAR_10)
          || FUNC_4(VAR_21, VAR_9)
          || !FUNC_9(VAR_20, VAR_18))
        {
          if (!VAR_17
              || VAR_16 == ((void*)0)
              || FUNC_4(VAR_16, VAR_9)
              || FUNC_4(VAR_15, VAR_18))
            return
              FUNC_6(VAR_0, ((void*)0),
                                FUNC_2("URL '%s' (uuid: '%s') doesn't match existing "
                                  "URL '%s' (uuid: '%s') in '%s'"),
                                VAR_8,
                                VAR_22,
                                FUNC_8(VAR_21,
                                                            VAR_20,
                                                            VAR_13),
                                VAR_10,
                                VAR_7);
        }
    }

  return VAR_1;
}
