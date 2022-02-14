
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 char* FUNC_2 (char const*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char const*,char const*,int ,int *) ;
 int FUNC_6 (char const*,char const*,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int **,char const*,int ,int ,int *) ;
 TYPE_1__* FUNC_10 (char const*,char const*,scalar_t__,int *) ;

svn_error_t *
FUNC_11(const char *VAR_5,
                           const char *VAR_6,
                           const char *VAR_7,
                           svn_boolean_t VAR_8,
                           apr_pool_t *VAR_9)
{
  svn_error_t *VAR_10;
  apr_file_t *VAR_11;


  FUNC_1(FUNC_6(VAR_7, VAR_5, VAR_9));


  VAR_10 = FUNC_10(VAR_5, VAR_6, VAR_8, VAR_9);
  if (VAR_10 && FUNC_0(VAR_10->apr_err))
    {

      FUNC_3(VAR_10);
      FUNC_1(FUNC_5(VAR_5, VAR_6, VAR_4, VAR_9));





      if (VAR_8)
        {
          FUNC_1(FUNC_9(&VAR_11, VAR_6, VAR_2,
                                   VAR_0, VAR_9));
          FUNC_1(FUNC_8(VAR_11, VAR_9));
          FUNC_1(FUNC_7(VAR_11, VAR_9));
        }
    }
  else if (VAR_10)
    return FUNC_4(VAR_10);

  return VAR_3;
}
