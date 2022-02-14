
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*) ;



 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_2 (char const*,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_boolean_t *VAR_5,
                 svn_depth_t *VAR_6,
                 const char *VAR_7,
                 svn_depth_t VAR_8,
                 const char *VAR_9,
                 svn_node_kind_t VAR_10,
                 apr_pool_t *VAR_11)
{
  const char *VAR_12;

  *VAR_5 = VAR_0;
  *VAR_6 = VAR_8;

  VAR_12 = FUNC_2(VAR_7, VAR_9);

  if (!VAR_12)
    *VAR_5 = VAR_2;

  if (VAR_8 == VAR_3)
    return VAR_1;

  if (VAR_12 && *VAR_12 == '\0')
    return VAR_1;

  switch (VAR_8)
    {
      case 130:
        *VAR_5 = VAR_2;
        break;

      case 129:
        if (VAR_10 != VAR_4)
          {
            *VAR_5 = VAR_2;
            break;
          }

      case 128:
        if (!VAR_12 || FUNC_1(VAR_12) > 1)
          *VAR_5 = VAR_2;

        *VAR_6 = 130;
        break;
      default:
        FUNC_0();
    }

  return VAR_1;
}
