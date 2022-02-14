
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_string_t ;
struct TYPE_3__ {int value; int name; } ;
typedef TYPE_1__ svn_prop_t ;
typedef scalar_t__ svn_prop_kind_t ;
typedef int svn_error_t ;
struct dir_baton_t {int pool; int propchanges; int has_propchange; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (int const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_4,
                const char *VAR_5,
                const svn_string_t *VAR_6,
                apr_pool_t *VAR_7)
{
  struct dir_baton_t *VAR_8 = VAR_4;
  svn_prop_t *VAR_9;
  svn_prop_kind_t VAR_10;

  VAR_10 = FUNC_2(VAR_5);
  if (VAR_10 == VAR_3)
    return VAR_0;
  else if (VAR_10 == VAR_2)
    VAR_8->has_propchange = VAR_1;

  VAR_9 = FUNC_0(VAR_8->propchanges);
  VAR_9->name = FUNC_1(VAR_8->pool, VAR_5);
  VAR_9->value = FUNC_3(VAR_6, VAR_8->pool);

  return VAR_0;
}
