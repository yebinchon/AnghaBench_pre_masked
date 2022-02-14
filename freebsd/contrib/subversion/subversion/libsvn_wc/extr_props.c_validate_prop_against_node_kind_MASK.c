
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (char*) ;
 char const* FUNC_1 (char const*,int *) ;
 int * FUNC_2 (int ,int *,int ,char const*,...) ;


 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_6(const char *VAR_3,
                                const char *VAR_4,
                                svn_node_kind_t VAR_5,
                                apr_pool_t *VAR_6)
{
  const char *VAR_7
    = FUNC_3(VAR_4) ? VAR_4 : FUNC_1(VAR_4, VAR_6);

  switch (VAR_5)
    {
    case 129:
      if (! FUNC_4(VAR_3)
          && FUNC_5(VAR_3))
        return FUNC_2(VAR_0, ((void*)0),
                                 FUNC_0("Cannot set '%s' on a directory ('%s')"),
                                 VAR_3, VAR_7);
      break;
    case 128:
      if (! FUNC_5(VAR_3)
          && FUNC_4(VAR_3))
        return FUNC_2(VAR_0, ((void*)0),
                                 FUNC_0("Cannot set '%s' on a file ('%s')"),
                                 VAR_3,
                                 VAR_7);
      break;
    default:
      return FUNC_2(VAR_1, ((void*)0),
                               FUNC_0("'%s' is not a file or directory"),
                               VAR_7);
    }

  return VAR_2;
}
