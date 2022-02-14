
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


typedef int svn_wc_adm_access_t ;
typedef int svn_wc__db_t ;
typedef int svn_node_kind_t ;
struct TYPE_16__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_4 (scalar_t__*,int *,int *,char const*,int *) ;
 TYPE_1__* FUNC_5 (scalar_t__*,int *,char const*,int *) ;
 TYPE_1__* FUNC_6 (int *,scalar_t__,int *) ;
 TYPE_1__* FUNC_7 (int **,char const*,int *,scalar_t__,scalar_t__,int,int ,void*,int *) ;
 TYPE_1__* FUNC_8 (int **,char const*,scalar_t__,int *,scalar_t__,int *,int *) ;
 int FUNC_9 (char const*,char*) ;
 int FUNC_10 (char const*) ;
 char* FUNC_11 (char const*,int *) ;
 char* FUNC_12 (char const*,int *) ;
 TYPE_1__* FUNC_13 (char const**,char const*,int *) ;
 scalar_t__ FUNC_14 (char const*,int ) ;
 int FUNC_15 (TYPE_1__*) ;
 TYPE_1__* FUNC_16 (TYPE_1__*) ;
 scalar_t__ FUNC_17 (char const*) ;
 TYPE_1__* FUNC_18 (int **,int *,scalar_t__,int ,int *,int *) ;
 int FUNC_19 (int *,char const*,int *) ;
 int * FUNC_20 (int *,char const*,int *) ;
 TYPE_1__* FUNC_21 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_22(svn_wc_adm_access_t **VAR_6,
            svn_wc_adm_access_t **VAR_7,
            const char **VAR_8,
            svn_wc__db_t *VAR_9,
            svn_boolean_t VAR_10,
            const char *VAR_11,
            svn_boolean_t VAR_12,
            int VAR_13,
            svn_cancel_func_t VAR_14,
            void *VAR_15,
            apr_pool_t *VAR_16)
{
  const char *VAR_17 = FUNC_11(VAR_11, VAR_16);







  if (!VAR_10)
    FUNC_2(FUNC_18(&VAR_9, ((void*)0), VAR_0, VAR_5,
                            VAR_16, VAR_16));

  if (FUNC_17(VAR_11)
      || FUNC_14(VAR_11, FUNC_10(VAR_11))
      || ! FUNC_9(VAR_17, ".."))
    {
      FUNC_2(FUNC_7(VAR_6, VAR_11, VAR_9, VAR_10,
                       VAR_12, VAR_13,
                       VAR_14, VAR_15, VAR_16));
      *VAR_7 = *VAR_6;
      *VAR_8 = "";
    }
  else
    {
      svn_error_t *VAR_18;
      svn_wc_adm_access_t *VAR_19 = ((void*)0);
      svn_wc_adm_access_t *VAR_20 = ((void*)0);
      const char *VAR_21 = FUNC_12(VAR_11, VAR_16);
      const char *VAR_22;
      svn_error_t *VAR_23 = VAR_4;

      FUNC_2(FUNC_13(&VAR_22, VAR_11, VAR_16));


      VAR_18 = FUNC_8(&VAR_19, VAR_21, VAR_12, VAR_9, VAR_10,
                        VAR_16, VAR_16);
      if (VAR_18)
        {
          const char *VAR_24 = FUNC_12(VAR_22, VAR_16);
          svn_wc_adm_access_t *VAR_25 = FUNC_20(VAR_9, VAR_24, VAR_16);

          if (FUNC_1(VAR_25))
            FUNC_19(VAR_9, VAR_24, VAR_16);
          else
            FUNC_3(VAR_25 == ((void*)0));

          if (VAR_18->apr_err == VAR_2)
            {
              FUNC_15(VAR_18);
              VAR_19 = ((void*)0);
            }
          else if (VAR_12 && (VAR_18->apr_err == VAR_1
                                  || FUNC_0(VAR_18->apr_err)))
            {


              svn_error_t *VAR_26 = FUNC_8(&VAR_19, VAR_21, VAR_0,
                                              VAR_9, VAR_10, VAR_16, VAR_16);
              if (VAR_26)
                {
                  FUNC_15(VAR_26);
                  return VAR_18;
                }
              VAR_23 = VAR_18;
            }
          else
            return VAR_18;
        }


      VAR_18 = FUNC_7(&VAR_20, VAR_11, VAR_9, VAR_10, VAR_12,
                     VAR_13, VAR_14, VAR_15, VAR_16);
      if (VAR_18)
        {
          if (VAR_19 == ((void*)0))
            {

              FUNC_15(VAR_23);
              return FUNC_16(VAR_18);
            }

          if (VAR_18->apr_err != VAR_2)
            {
              if (VAR_19)
                FUNC_15(FUNC_21(VAR_19, VAR_16));
              FUNC_15(VAR_23);
              return FUNC_16(VAR_18);
            }


          FUNC_15(VAR_18);
          VAR_20 = ((void*)0);
        }




      if (VAR_19 && VAR_20)
        {
          svn_boolean_t VAR_27;

          VAR_18 = FUNC_5(&VAR_27, VAR_9, VAR_22, VAR_16);
          if (VAR_18)
            {
              FUNC_15(VAR_23);
              FUNC_15(FUNC_21(VAR_19, VAR_16));
              FUNC_15(FUNC_21(VAR_20, VAR_16));
              return FUNC_16(VAR_18);
            }

          if (VAR_27)
            {


              VAR_18 = FUNC_6(VAR_19, VAR_0 , VAR_16);
              if (VAR_18)
                {
                  FUNC_15(VAR_23);
                  FUNC_15(FUNC_21(VAR_20, VAR_16));
                  return FUNC_16(VAR_18);
                }
              VAR_19 = ((void*)0);
            }
        }





      if (VAR_19 && VAR_23)
        {
          if (VAR_20)
            FUNC_15(FUNC_21(VAR_20, VAR_16));
          FUNC_15(FUNC_21(VAR_19, VAR_16));
          return FUNC_16(VAR_23);
        }
      FUNC_15(VAR_23);

      if (! VAR_20)
        {
          svn_boolean_t VAR_28;
          svn_node_kind_t VAR_29;

          VAR_18 = FUNC_4(&VAR_28, &VAR_29, VAR_9, VAR_22, VAR_16);

          if (VAR_18 && VAR_18->apr_err == VAR_3)
            FUNC_15(VAR_18);
          else if (VAR_18)
            {
              FUNC_15(FUNC_21(VAR_19, VAR_16));
              return FUNC_16(VAR_18);
            }
        }

      *VAR_6 = VAR_19 ? VAR_19 : VAR_20;
      *VAR_7 = VAR_20 ? VAR_20 : VAR_19;

      if (! VAR_19)
        *VAR_8 = "";
      else
        *VAR_8 = VAR_17;
    }

  return VAR_4;
}
