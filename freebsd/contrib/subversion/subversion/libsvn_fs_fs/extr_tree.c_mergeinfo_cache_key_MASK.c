
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ svn_mergeinfo_inheritance_t ;
struct TYPE_3__ {int rev; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 char const* FUNC_0 (int,char const*,int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static const char *
FUNC_1(const char *VAR_1,
                    svn_fs_root_t *VAR_2,
                    svn_mergeinfo_inheritance_t VAR_3,
                    svn_boolean_t VAR_4,
                    apr_pool_t *VAR_5)
{
  apr_int64_t VAR_6 = VAR_2->rev;
  VAR_6 = VAR_6 * 4
         + (VAR_3 == VAR_0 ? 2 : 0)
         + (VAR_4 ? 1 : 0);

  return FUNC_0(VAR_6, VAR_1, VAR_5);
}
