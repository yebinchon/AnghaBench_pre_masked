
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_string_t ;
struct TYPE_3__ {int value; int name; } ;
typedef TYPE_1__ svn_prop_t ;
typedef int svn_error_t ;
struct dir_baton {int edited; int pool; int propchanges; scalar_t__ skip_this; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (struct dir_baton*,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (int const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_6(void *VAR_2,
                const char *VAR_3,
                const svn_string_t *VAR_4,
                apr_pool_t *VAR_5)
{
  svn_prop_t *VAR_6;
  struct dir_baton *VAR_7 = VAR_2;

  if (VAR_7->skip_this)
    return VAR_0;

  VAR_6 = FUNC_1(VAR_7->propchanges);
  VAR_6->name = FUNC_2(VAR_7->pool, VAR_3);
  VAR_6->value = FUNC_5(VAR_4, VAR_7->pool);

  if (!VAR_7->edited && FUNC_4(VAR_3) == VAR_1)
    FUNC_0(FUNC_3(VAR_7, VAR_5));

  return VAR_0;
}
