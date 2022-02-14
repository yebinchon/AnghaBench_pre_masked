
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ svn_node_kind_t ;
struct TYPE_7__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int buf ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 char* VAR_3 ;
 TYPE_1__* VAR_4 ;
 char* FUNC_2 (int *,char*) ;
 char* FUNC_3 (char const*,int ,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (char const*,scalar_t__*,int *) ;
 int FUNC_6 (int *,int *) ;
 TYPE_1__* FUNC_7 (int **,char const*,int,int ,int *) ;
 int FUNC_8 (int *,char*,int*,int *) ;
 scalar_t__ VAR_5 ;

svn_error_t *
FUNC_9(const char **VAR_6, const char *VAR_7, apr_pool_t *VAR_8)
{
  const char *VAR_9;
  char VAR_10[128];
  svn_error_t *VAR_11;
  apr_file_t *VAR_12;
  apr_size_t VAR_13;





  VAR_9 = FUNC_3(VAR_7, VAR_2, VAR_8);
  VAR_11 = FUNC_7(&VAR_12, VAR_9, VAR_1|VAR_0, 0, VAR_8);
  if (VAR_11 && FUNC_0(VAR_11->apr_err))
    {
      svn_node_kind_t VAR_14;
      svn_error_t *VAR_15 = FUNC_5(VAR_7, &VAR_14, VAR_8);
      if (VAR_15)
        {
          FUNC_4(VAR_15);
          return VAR_11;
        }
      if (VAR_14 == VAR_5)
        {
          FUNC_4(VAR_11);
          *VAR_6 = VAR_3;
          return VAR_4;
        }
      return VAR_11;
    }
  else if (VAR_11)
    return VAR_11;

  VAR_13 = sizeof(VAR_10);
  FUNC_1(FUNC_8(VAR_12, VAR_10, &VAR_13, VAR_8));
  FUNC_1(FUNC_6(VAR_12, VAR_8));
  *VAR_6 = FUNC_2(VAR_8, VAR_10);

  return VAR_4;
}
