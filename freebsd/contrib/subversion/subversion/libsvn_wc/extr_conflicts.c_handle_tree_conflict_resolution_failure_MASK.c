
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_hash_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int ,char const*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,char const*,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char *VAR_3,
                                        svn_error_t *VAR_4,
                                        apr_hash_t *VAR_5)
{
  const char *VAR_6;

  if (!VAR_5
      || (VAR_4->apr_err != VAR_1
          && VAR_4->apr_err != VAR_0))
    return FUNC_3(VAR_4);

  FUNC_2(VAR_4);
  VAR_6 = FUNC_1(FUNC_0(VAR_5),
                            VAR_3);

  FUNC_4(VAR_5, VAR_6, VAR_6);

  return VAR_2;
}
