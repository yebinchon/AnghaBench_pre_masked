
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_wc_notify_func2_t ;
typedef int svn_wc__db_t ;
struct TYPE_7__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
struct svn_wc__db_info_t {int dummy; } ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__*,int *,char const*,int ,scalar_t__,scalar_t__,int ,struct svn_wc__db_info_t const*,int ,void*,int ,void*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_3 (char const*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__*,int *,char const*,int *) ;
 int FUNC_8 (int *,char const*,int ,scalar_t__,int *,int *) ;
 int FUNC_9 (struct svn_wc__db_info_t const**,int *,char const*,scalar_t__,int *,int *) ;
 int FUNC_10 (int *,char const*,int *) ;
 int FUNC_11 (int *,char const*,int ,void*,int *) ;
 int FUNC_12 (int *,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_13(svn_wc__db_t *VAR_5,
       const char *VAR_6,
       svn_depth_t VAR_7,
       svn_boolean_t VAR_8,
       svn_boolean_t VAR_9,
       svn_boolean_t VAR_10,
       svn_cancel_func_t VAR_11,
       void *VAR_12,
       svn_wc_notify_func2_t VAR_13,
       void *VAR_14,
       apr_pool_t *VAR_15)
{
  svn_error_t *VAR_16;
  const struct svn_wc__db_info_t *VAR_17 = ((void*)0);
  svn_boolean_t VAR_18 = VAR_0;

  FUNC_1(VAR_7 == VAR_3 || VAR_7 == VAR_4);



  {
    const char *VAR_19;
    svn_boolean_t VAR_20;

    FUNC_0(FUNC_7(&VAR_20, VAR_5, VAR_6, VAR_15));

    if (! VAR_20)
      VAR_19 = FUNC_3(VAR_6, VAR_15);
    else
      VAR_19 = VAR_6;

    FUNC_0(FUNC_12(VAR_5, VAR_19, VAR_15));
  }

  VAR_16 = FUNC_6(
        FUNC_8(VAR_5, VAR_6, VAR_7, VAR_9,
                             VAR_15, VAR_15));

  if (!VAR_16)
    {
      VAR_16 = FUNC_6(
              FUNC_9(&VAR_17, VAR_5, VAR_6, VAR_0,
                                          VAR_15, VAR_15));

      if (VAR_16 && VAR_16->apr_err == VAR_1)
        {
          FUNC_4(VAR_16);
          VAR_16 = ((void*)0);
          VAR_17 = ((void*)0);
        }
    }

  if (!VAR_16)
    VAR_16 = FUNC_6(
              FUNC_2(&VAR_18, VAR_5, VAR_6, VAR_7, VAR_10,
                             VAR_8, VAR_2 ,
                             VAR_17, VAR_11, VAR_12,
                             VAR_13, VAR_14,
                             VAR_15));

  if (VAR_18)
    VAR_16 = FUNC_5(VAR_16,
                                   FUNC_11(VAR_5, VAR_6,
                                                  VAR_11, VAR_12,
                                                  VAR_15));

  VAR_16 = FUNC_5(VAR_16,
                                 FUNC_10(VAR_5,
                                                             VAR_6,
                                                             VAR_15));

  return VAR_16;
}
