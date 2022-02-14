
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *,char const*,int *) ;
 int FUNC_5 (char const*) ;
 int VAR_3 ;
 int FUNC_6 (int **,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_7(svn_boolean_t *VAR_4,
                       svn_boolean_t *VAR_5,
                       svn_node_kind_t *VAR_6,
                       svn_wc__db_t *VAR_7,
                       const char *VAR_8,
                       apr_pool_t *VAR_9)
{
  svn_wc__db_wcroot_t *VAR_10;
  const char *VAR_11;

  FUNC_1(FUNC_5(VAR_8));

  FUNC_0(FUNC_6(&VAR_10, &VAR_11, VAR_7,
                              VAR_8, VAR_9, VAR_9));
  FUNC_3(VAR_10);

  if (VAR_5)
    *VAR_5 = VAR_0;

  if (*VAR_11 == '\0')
    {

      if (VAR_4)
        *VAR_4 = VAR_2;

      if (VAR_6)
        *VAR_6 = VAR_3;
      return VAR_1;
    }

  if (VAR_4)
    *VAR_4 = VAR_0;

  if (! VAR_5 && ! VAR_6)
    return VAR_1;

  FUNC_2(
    FUNC_4(VAR_5, VAR_6, VAR_10, VAR_11, VAR_9),
    VAR_10);
  return VAR_1;
}
