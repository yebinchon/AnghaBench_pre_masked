
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int * svn_mergeinfo_t ;
typedef scalar_t__ svn_mergeinfo_inheritance_t ;
struct TYPE_14__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
struct TYPE_15__ {int wc_ctx; } ;
typedef TYPE_2__ svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 int FUNC_6 (char const*) ;
 TYPE_1__* FUNC_7 (int **,int ,char const*,int *,int *) ;
 int FUNC_8 (char const*,int *) ;
 char* FUNC_9 (char const*,int *) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (char const*,int ) ;
 int FUNC_12 (TYPE_1__*) ;
 TYPE_1__* FUNC_13 (int **,int *,char const*,int *,int *) ;
 int FUNC_14 (int *,int *) ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_15 (int **,int *,int *,int ,int ,scalar_t__,int *,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_16 (char const*) ;
 int FUNC_17 (int *) ;
 int * FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 char* FUNC_20 (int ,char const*,int *) ;
 TYPE_1__* FUNC_21 (int *,scalar_t__*,int *,int *,int *,int *,int ,char const*,scalar_t__,int *,int *) ;
 TYPE_1__* FUNC_22 (scalar_t__*,int *,int *,int ,char const*,int *,int *) ;
 TYPE_1__* FUNC_23 (scalar_t__*,scalar_t__*,int *,int ,char const*,int *) ;

svn_error_t *
FUNC_24(svn_mergeinfo_t *VAR_8,
                             svn_boolean_t *VAR_9,
                             svn_mergeinfo_inheritance_t VAR_10,
                             const char *VAR_11,
                             const char *VAR_12,
                             const char **VAR_13,
                             svn_boolean_t VAR_14,
                             svn_client_ctx_t *VAR_15,
                             apr_pool_t *VAR_16,
                             apr_pool_t *VAR_17)
{
  const char *VAR_18 = "";
  svn_mergeinfo_t VAR_19;
  svn_revnum_t VAR_20;
  apr_pool_t *VAR_21;
  svn_boolean_t VAR_22;

  FUNC_1(FUNC_10(VAR_11));
  if (VAR_12)
    FUNC_1(FUNC_10(VAR_12));

  FUNC_0(FUNC_21(((void*)0), &VAR_20, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                VAR_15->wc_ctx, VAR_11,
                                VAR_4 ,
                                VAR_17, VAR_17));

  VAR_21 = FUNC_18(VAR_17);
  while (VAR_4)
    {
      FUNC_17(VAR_21);



      if (VAR_10 == VAR_7)
        {
          VAR_19 = ((void*)0);
          VAR_10 = VAR_6;
        }
      else
        {





          svn_error_t *VAR_23 = FUNC_7(&VAR_19,
                                                         VAR_15->wc_ctx,
                                                         VAR_11,
                                                         VAR_16,
                                                         VAR_21);
          if ((VAR_14 || VAR_18 [0] != '\0')
              && VAR_23
              && VAR_23->apr_err == VAR_1)
            {
              FUNC_12(VAR_23);
              VAR_19 = FUNC_4(VAR_16);
              break;
            }
          else
            {
              FUNC_0(VAR_23);
            }
        }

      if (VAR_19 == ((void*)0) &&
          VAR_10 != VAR_5 &&
          !FUNC_11(VAR_11, FUNC_6(VAR_11)))
        {
          svn_boolean_t VAR_24;
          svn_boolean_t VAR_25;
          svn_revnum_t VAR_26;
          svn_revnum_t VAR_27;


          if (VAR_12 && FUNC_5(VAR_12, VAR_11) == 0)
            break;



          FUNC_0(FUNC_23(&VAR_24, &VAR_25, ((void*)0),
                                    VAR_15->wc_ctx, VAR_11, VAR_21));
          if (VAR_24 || VAR_25)
            break;



          VAR_18 = FUNC_20(FUNC_8(VAR_11,
                                                              VAR_21),
                                          VAR_18, VAR_16);
          VAR_11 = FUNC_9(VAR_11, VAR_17);

          FUNC_0(FUNC_21(((void*)0), &VAR_26, ((void*)0), ((void*)0),
                                        ((void*)0), ((void*)0),
                                        VAR_15->wc_ctx, VAR_11,
                                        VAR_4 ,
                                        VAR_17, VAR_17));




          FUNC_0(FUNC_22(&VAR_27,
                                                ((void*)0), ((void*)0),
                                                VAR_15->wc_ctx, VAR_11,
                                                VAR_17,
                                                VAR_17));






          if (FUNC_2(VAR_20)
              && (VAR_20 < VAR_27
                  || VAR_26 < VAR_20))
            break;


          continue;
        }
      break;
    }

  FUNC_19(VAR_21);

  if (FUNC_16(VAR_18))
    {

      VAR_22 = VAR_0;
      *VAR_8 = VAR_19;
    }
  else
    {

      if (VAR_19)
        {
          VAR_22 = VAR_4;
          FUNC_0(FUNC_13(VAR_8,
                                                         VAR_19,
                                                         VAR_18,
                                                         VAR_16,
                                                         VAR_17));
        }
      else
        {
          VAR_22 = VAR_0;
          *VAR_8 = ((void*)0);
        }
    }

  if (VAR_13)
    *VAR_13 = VAR_18;



  if (VAR_22
      && FUNC_3(*VAR_8))
    {
      FUNC_0(FUNC_15(VAR_8, *VAR_8, ((void*)0),
                                         VAR_2, VAR_2,
                                         VAR_4, VAR_16, VAR_17));
      FUNC_14(*VAR_8, VAR_17);
    }

  if (VAR_9)
    *VAR_9 = VAR_22;

  return VAR_3;
}
