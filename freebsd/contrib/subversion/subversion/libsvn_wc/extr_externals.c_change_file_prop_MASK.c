
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_string_t ;
struct TYPE_3__ {int value; int name; } ;
typedef TYPE_1__ svn_prop_t ;
typedef int svn_error_t ;
struct edit_baton {int pool; int propchanges; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_1,
                 const char *VAR_2,
                 const svn_string_t *VAR_3,
                 apr_pool_t *VAR_4)
{
  struct edit_baton *VAR_5 = VAR_1;
  svn_prop_t *VAR_6;

  VAR_6 = FUNC_0(VAR_5->propchanges);
  VAR_6->name = FUNC_1(VAR_5->pool, VAR_2);
  VAR_6->value = FUNC_2(VAR_3, VAR_5->pool);

  return VAR_0;
}
