
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
struct parse_baton {scalar_t__ uuid_action; int fs; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int ,char const*,int *) ;
 int FUNC_2 (scalar_t__*,int ,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_3(const char *VAR_3,
            void *VAR_4,
            apr_pool_t *VAR_5)
{
  struct parse_baton *VAR_6 = VAR_4;
  svn_revnum_t VAR_7;

  if (VAR_6->uuid_action == VAR_2)
    return VAR_0;

  if (VAR_6->uuid_action != VAR_1)
    {
      FUNC_0(FUNC_2(&VAR_7, VAR_6->fs, VAR_5));
      if (VAR_7 != 0)
        return VAR_0;
    }

  return FUNC_1(VAR_6->fs, VAR_3, VAR_5);
}
