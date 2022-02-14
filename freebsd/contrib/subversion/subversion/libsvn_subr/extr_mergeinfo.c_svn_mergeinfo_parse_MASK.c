
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_mergeinfo_t ;
struct TYPE_6__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (char const**,char const*,int ,int *) ;
 int FUNC_2 (char const*) ;
 TYPE_1__* FUNC_3 (scalar_t__,TYPE_1__*,int ,char const*) ;
 int FUNC_4 (int *) ;

svn_error_t *
FUNC_5(svn_mergeinfo_t *VAR_1,
                    const char *VAR_2,
                    apr_pool_t *VAR_3)
{
  svn_error_t *VAR_4;

  *VAR_1 = FUNC_4(VAR_3);
  VAR_4 = FUNC_1(&VAR_2, VAR_2 + FUNC_2(VAR_2), *VAR_1, VAR_3);


  if (VAR_4 && VAR_4->apr_err != VAR_0)
    VAR_4 = FUNC_3(VAR_0, VAR_4,
                            FUNC_0("Could not parse mergeinfo string '%s'"),
                            VAR_2);
  return VAR_4;
}
