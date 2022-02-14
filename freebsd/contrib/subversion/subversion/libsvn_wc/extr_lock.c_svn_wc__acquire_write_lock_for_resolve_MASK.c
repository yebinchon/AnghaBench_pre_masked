
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_2 (int *,char const*) ;
 int FUNC_3 (char const*,char const*) ;
 char* FUNC_4 (char const*,char const*) ;
 int FUNC_5 (char const**,TYPE_1__*,char const*,scalar_t__,int *,int *) ;
 int FUNC_6 (TYPE_1__*,char const*,int *) ;
 int FUNC_7 (char const**,int ,char const*,int *,int *) ;

svn_error_t *
FUNC_8(const char **VAR_3,
                                       svn_wc_context_t *VAR_4,
                                       const char *VAR_5,
                                       apr_pool_t *VAR_6,
                                       apr_pool_t *VAR_7)
{
  svn_boolean_t VAR_8 = VAR_0;
  const char *VAR_9;
  const char *VAR_10 = VAR_5;

  while (!VAR_8)
    {
      const char *VAR_11;
      const char *VAR_12;

      FUNC_0(FUNC_5(&VAR_9, VAR_4,
                                         VAR_10, VAR_0,
                                         VAR_7, VAR_7));
      VAR_8 = VAR_2;

      FUNC_0(FUNC_7(&VAR_11,
                                                VAR_4->db, VAR_5,
                                                VAR_7, VAR_7));





      VAR_12 = FUNC_4(VAR_11, VAR_9);
      if (VAR_12 && VAR_12[0])
        {
          FUNC_0(FUNC_6(VAR_4, VAR_9,
                                             VAR_7));
          VAR_8 = VAR_0;
          VAR_10 = VAR_11;
        }
      else
        {

          FUNC_1(!FUNC_3(VAR_11, VAR_9)
                         || FUNC_4(VAR_9,
                                                     VAR_11));
        }
    }

  *VAR_3 = FUNC_2(VAR_6, VAR_9);

  return VAR_1;
}
