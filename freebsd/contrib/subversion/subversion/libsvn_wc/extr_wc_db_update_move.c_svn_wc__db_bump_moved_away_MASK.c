
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
struct TYPE_15__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_depth_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (TYPE_1__*,char const*,int ,char const*,char const*,int *,int *) ;
 int FUNC_2 (TYPE_1__*,char const*,int ,int ,int *,int *) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,int ) ;
 TYPE_2__* FUNC_7 (char const**,char const**,char const**,TYPE_1__*,char const*,int ,int *,int *) ;
 int FUNC_8 (scalar_t__*,TYPE_1__*,char const*,int ,int *) ;

svn_error_t *
FUNC_9(svn_wc__db_wcroot_t *VAR_4,
                           const char *VAR_5,
                           svn_depth_t VAR_6,
                           svn_wc__db_t *VAR_7,
                           apr_pool_t *VAR_8)
{
  FUNC_0(FUNC_6(VAR_4->sdb,
                                      VAR_1));

  if (VAR_5[0] != '\0')
    {
      const char *VAR_9;
      const char *VAR_10, *VAR_11;
      svn_error_t *VAR_12;



      VAR_12 = FUNC_7(&VAR_10,
                                              &VAR_9,
                                              &VAR_11,
                                              VAR_4, VAR_5,
                                              0 ,
                                              VAR_8, VAR_8);

      if (VAR_12)
        {
          if (VAR_12->apr_err != VAR_2)
            return FUNC_5(VAR_12);

          FUNC_4(VAR_12);
        }
      else if (VAR_10)
        {
          if (FUNC_3(VAR_10, VAR_5))
            {





              svn_boolean_t VAR_13;

              FUNC_0(FUNC_8(
                                &VAR_13, VAR_4,
                                VAR_10,
                                VAR_0, VAR_8));

              if (VAR_13)
                {
                  FUNC_0(FUNC_1(VAR_4,
                                                  VAR_10, 0,
                                                  VAR_11,
                                                  VAR_9,
                                                  VAR_7, VAR_8));
                }
              return VAR_3;
            }
        }
    }

  FUNC_0(FUNC_2(VAR_4, VAR_5, 0, VAR_6, VAR_7, VAR_8));

  return VAR_3;
}
