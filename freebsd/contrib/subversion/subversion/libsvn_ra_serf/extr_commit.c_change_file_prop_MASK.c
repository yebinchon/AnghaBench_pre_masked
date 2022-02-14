
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_string_t ;
struct TYPE_5__ {int name; int value; } ;
typedef TYPE_1__ svn_prop_t ;
typedef int svn_error_t ;
struct TYPE_6__ {int prop_changes; int pool; } ;
typedef TYPE_2__ file_context_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (int const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_1,
                 const char *VAR_2,
                 const svn_string_t *VAR_3,
                 apr_pool_t *VAR_4)
{
  file_context_t *VAR_5 = VAR_1;
  svn_prop_t *VAR_6;

  VAR_6 = FUNC_0(VAR_5->pool, sizeof(*VAR_6));

  VAR_6->name = FUNC_1(VAR_5->pool, VAR_2);
  VAR_6->value = FUNC_3(VAR_3, VAR_5->pool);

  FUNC_2(VAR_5->prop_changes, VAR_6->name, VAR_6);

  return VAR_0;
}
