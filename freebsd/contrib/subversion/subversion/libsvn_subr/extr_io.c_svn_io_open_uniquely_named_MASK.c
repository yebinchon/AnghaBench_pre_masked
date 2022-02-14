
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ svn_io_file_del_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct temp_file_cleanup_s {int * fname_apr; int * pool; } ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_int32_t ;
struct TYPE_3__ {scalar_t__ filetype; } ;
typedef TYPE_1__ apr_finfo_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int VAR_13 ;
 int * VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 struct temp_file_cleanup_s* FUNC_7 (int *,int) ;
 int FUNC_8 (int *,struct temp_file_cleanup_s*,int ,int ) ;
 char* FUNC_9 (int *,char*,char const*,...) ;
 void* FUNC_10 (int *,char const*) ;
 scalar_t__ FUNC_11 (TYPE_1__*,char const*,int ,int *) ;
 int FUNC_12 (char const**,char const*,int *) ;
 scalar_t__ FUNC_13 (int **,char const*,int,int ,int ,int *) ;
 int FUNC_14 (char const*,char const*) ;
 char* FUNC_15 (char const*,char const*,int *) ;
 int FUNC_16 (char const*,int *) ;
 int * FUNC_17 (int ,int *,int ,int ) ;
 int * FUNC_18 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_19 (char const**,int *) ;
 int VAR_18 ;
 int VAR_19 ;

svn_error_t *
FUNC_20(apr_file_t **VAR_20,
                           const char **VAR_21,
                           const char *VAR_22,
                           const char *VAR_23,
                           const char *VAR_24,
                           svn_io_file_del_t VAR_25,
                           apr_pool_t *VAR_26,
                           apr_pool_t *VAR_27)
{
  const char *VAR_28;
  unsigned int VAR_29;
  struct temp_file_cleanup_s *VAR_30 = ((void*)0);



  svn_boolean_t VAR_31 = VAR_15;

  FUNC_4(VAR_20 || VAR_21);

  if (VAR_22 == ((void*)0))
    FUNC_3(FUNC_19(&VAR_22, VAR_27));
  if (VAR_23 == ((void*)0))
    VAR_23 = "tempfile";
  if (VAR_24 == ((void*)0))
    VAR_24 = ".tmp";

  VAR_28 = FUNC_15(VAR_22, VAR_23, VAR_27);

  if (VAR_25 == VAR_17)
    {
      VAR_30 = FUNC_7(VAR_26, sizeof(*VAR_30));

      VAR_30->pool = VAR_26;
      VAR_30->fname_apr = ((void*)0);






      FUNC_8(VAR_26, VAR_30,
                                VAR_19,
                                VAR_18);
    }

  for (VAR_29 = 1; VAR_29 <= 99999; VAR_29++)
    {
      const char *VAR_32;
      const char *VAR_33;
      apr_file_t *VAR_34;
      apr_status_t VAR_35;
      apr_int32_t VAR_36 = (VAR_8 | VAR_9 | VAR_2 | VAR_5
                          | VAR_1 | VAR_0);

      if (VAR_25 == VAR_16)
        VAR_36 |= VAR_3;
      if (VAR_29 == 1)
        VAR_32 = FUNC_9(VAR_27, "%s%s", VAR_28, VAR_24);
      else
        VAR_32 = FUNC_9(VAR_27, "%s.%u%s", VAR_28, VAR_29, VAR_24);





      if (VAR_31)
        {
          FUNC_3(FUNC_12(&VAR_33, VAR_32,
                                    VAR_27));
          if (VAR_29 == 1)
            {




              VAR_31 = FUNC_14(VAR_33, VAR_32);
            }
        }
      else
        VAR_33 = VAR_32;

      VAR_35 = FUNC_13(&VAR_34, VAR_33, VAR_36,
                          VAR_7, VAR_12, VAR_26);

      if (FUNC_2(VAR_35))
        continue;
      else if (VAR_35)
        {



          if (FUNC_1(VAR_35))
            {
              apr_finfo_t VAR_37;
              apr_status_t VAR_38 = FUNC_11(&VAR_37, VAR_33,
                                                VAR_6, VAR_27);

              if (!VAR_38 && VAR_37.filetype == VAR_4)
                continue;
            }

          if (VAR_20)
            *VAR_20 = ((void*)0);
          if (VAR_21)
            *VAR_21 = ((void*)0);
          return FUNC_18(VAR_35, FUNC_5("Can't open '%s'"),
                                    FUNC_16(VAR_32,
                                                         VAR_27));
        }
      else
        {
          if (VAR_25 == VAR_17)
            VAR_30->fname_apr = FUNC_10(VAR_26, VAR_33);

          if (VAR_20)
            *VAR_20 = VAR_34;
          else
            FUNC_6(VAR_34);
          if (VAR_21)
            *VAR_21 = FUNC_10(VAR_26, VAR_32);

          return VAR_14;
        }
    }

  if (VAR_20)
    *VAR_20 = ((void*)0);
  if (VAR_21)
    *VAR_21 = ((void*)0);
  return FUNC_17(VAR_13,
                           ((void*)0),
                           FUNC_5("Unable to make name for '%s'"),
                           FUNC_16(VAR_28, VAR_27));
}
