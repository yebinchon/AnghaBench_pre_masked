
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,int ,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,scalar_t__*,int *) ;
 int * FUNC_3 (int ,scalar_t__*,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static svn_boolean_t
FUNC_4(const char *VAR_6,
                 apr_pool_t *VAR_7)
{
  svn_node_kind_t VAR_8;
  svn_error_t *VAR_9;

  VAR_9 = FUNC_2(FUNC_0(VAR_6, VAR_2, VAR_7),
                          &VAR_8, VAR_7);
  if (VAR_9)
    {
      FUNC_1(VAR_9);
      return VAR_3;
    }
  if (VAR_8 != VAR_5)
    return VAR_0;



  VAR_9 = FUNC_3
    (FUNC_0(VAR_6, VAR_1, VAR_7), &VAR_8, VAR_7);
  if (VAR_9)
    {
      FUNC_1(VAR_9);
      return VAR_3;
    }
  if (VAR_8 != VAR_4)
    return VAR_0;

  return VAR_3;
}
