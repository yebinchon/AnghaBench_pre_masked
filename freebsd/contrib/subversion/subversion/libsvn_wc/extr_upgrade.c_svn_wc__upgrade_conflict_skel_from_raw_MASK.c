
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int operation; int * src_right_version; int * src_left_version; int action; int reason; } ;
typedef TYPE_1__ svn_wc_conflict_description2_t ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,int *) ;
 char* FUNC_3 (char const*,char const*,int *) ;
 int * FUNC_4 (char const*,int ,int *) ;
 int FUNC_5 (int *,int *,char const*,char const*,int *,int *,int *,int ,int *,int *) ;
 int FUNC_6 (int *,int *,char const*,char const*,char const*,char const*,int *,int *) ;
 int FUNC_7 (int *,int *,char const*,int ,int ,int *,int *,int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int *,int *,int *) ;
 int FUNC_10 (int *,int *,int *,int *,int *) ;
 int FUNC_11 (int *,int *,int *,int *,int *) ;
 int FUNC_12 (char const**,int *,char const*,int *,int *) ;
 int FUNC_13 (TYPE_1__ const**,int *,int ,int *,int *) ;




svn_error_t *
FUNC_14(svn_skel_t **VAR_1,
                                       svn_wc__db_t *VAR_2,
                                       const char *VAR_3,
                                       const char *VAR_4,
                                       const char *VAR_5,
                                       const char *VAR_6,
                                       const char *VAR_7,
                                       const char *VAR_8,
                                       const char *VAR_9,
                                       apr_size_t VAR_10,
                                       apr_pool_t *VAR_11,
                                       apr_pool_t *VAR_12)
{
  svn_skel_t *VAR_13 = ((void*)0);
  const char *VAR_14;

  FUNC_0(FUNC_12(&VAR_14, VAR_2, VAR_3,
                                VAR_12, VAR_12));

  if (VAR_5 || VAR_7 || VAR_6)
    {
      const char *VAR_15 = ((void*)0);
      const char *VAR_16 = ((void*)0);
      const char *VAR_17 = ((void*)0);

      VAR_13 = FUNC_8(VAR_11);

      if (VAR_5)
        VAR_15 = FUNC_3(VAR_14, VAR_5,
                                      VAR_12);

      if (VAR_7)
        VAR_16 = FUNC_3(VAR_14, VAR_7,
                                      VAR_12);

      if (VAR_6)
        VAR_17 = FUNC_3(VAR_14, VAR_6,
                                      VAR_12);

      FUNC_0(FUNC_6(VAR_13,
                                                      VAR_2, VAR_3,
                                                      VAR_17,
                                                      VAR_15,
                                                      VAR_16,
                                                      VAR_12,
                                                      VAR_12));
    }

  if (VAR_8)
    {
      const char *VAR_18;

      if (!VAR_13)
        VAR_13 = FUNC_8(VAR_11);

      VAR_18 = FUNC_3(VAR_14, VAR_8, VAR_12);

      FUNC_0(FUNC_5(VAR_13,
                                                      VAR_2, VAR_3,
                                                      VAR_18,
                                                      ((void*)0), ((void*)0), ((void*)0),
                                                FUNC_1(VAR_12),
                                                      VAR_12,
                                                      VAR_12));
    }

  if (VAR_9)
    {
      svn_skel_t *VAR_19;
      const svn_wc_conflict_description2_t *VAR_20;
      const char *VAR_21;

      if (!VAR_13)
        VAR_13 = FUNC_8(VAR_12);

      VAR_19 = FUNC_4(VAR_9, VAR_10,
                                VAR_12);

      VAR_21 = FUNC_3(VAR_14, VAR_4,
                                      VAR_12);

      FUNC_0(FUNC_13(&VAR_20, VAR_19,
                                           FUNC_2(VAR_21,
                                                              VAR_12),
                                           VAR_12, VAR_12));

      FUNC_0(FUNC_7(VAR_13,
                                                      VAR_2, VAR_3,
                                                      VAR_20->reason,
                                                      VAR_20->action,
                                                      ((void*)0),
                                                      VAR_12,
                                                      VAR_12));

      switch (VAR_20->operation)
        {
          case 128:
          default:
            FUNC_0(FUNC_11(VAR_13,
                                                       VAR_20->src_left_version,
                                                       VAR_20->src_right_version,
                                                       VAR_12,
                                                       VAR_12));
            break;
          case 129:
            FUNC_0(FUNC_10(VAR_13,
                                                        VAR_20->src_left_version,
                                                        VAR_20->src_right_version,
                                                        VAR_12,
                                                        VAR_12));
            break;
          case 130:
            FUNC_0(FUNC_9(VAR_13,
                                                       VAR_20->src_left_version,
                                                       VAR_20->src_right_version,
                                                       VAR_12,
                                                       VAR_12));
            break;
        }
    }
  else if (VAR_13)
    {
      FUNC_0(FUNC_11(VAR_13, ((void*)0), ((void*)0),
                                                  VAR_12,
                                                  VAR_12));
    }

  *VAR_1 = VAR_13;
  return VAR_0;
}
