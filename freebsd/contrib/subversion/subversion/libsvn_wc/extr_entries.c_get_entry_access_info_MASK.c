
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_adm_access_t ;
typedef int svn_wc__db_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_1 (int *,char const*) ;
 int FUNC_2 (char const**,char const**,char const*,int *) ;
 int FUNC_3 (char const*,scalar_t__*,scalar_t__*,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_4 (int *,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char **VAR_5,
                      const char **VAR_6,
                      svn_wc__db_t *VAR_7,
                      const char *VAR_8,
                      svn_node_kind_t VAR_9,
                      apr_pool_t *VAR_10,
                      apr_pool_t *VAR_11)
{
  svn_wc_adm_access_t *VAR_12;
  svn_boolean_t VAR_13 = VAR_0;



  if (VAR_9 == VAR_4)
    {
      svn_node_kind_t VAR_14;


      VAR_12 = FUNC_4(VAR_7, VAR_8,
                                                  VAR_11);
      if (VAR_12)
        {

          VAR_14 = VAR_3;
        }
      else
        {
          svn_boolean_t VAR_15;


          FUNC_0(FUNC_3(VAR_8, &VAR_14, &VAR_15,
                                            VAR_11));
        }

      if (VAR_14 != VAR_3)
        {
        }
      else
        {


          VAR_13 = VAR_2;
        }
    }
  else if (VAR_9 == VAR_3)
    {
      VAR_13 = VAR_2;
    }

  if (VAR_13)
    {


      *VAR_5 = FUNC_1(VAR_10, VAR_8);
      *VAR_6 = "";
    }
  else
    {



      FUNC_2(VAR_5, VAR_6, VAR_8, VAR_10);
    }

  return VAR_1;
}
