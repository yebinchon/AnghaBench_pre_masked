
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_string_t ;
struct TYPE_6__ {int name; int value; } ;
typedef TYPE_1__ svn_prop_t ;
typedef int svn_error_t ;
struct TYPE_7__ {int prop_changes; int pool; int commit_ctx; } ;
typedef TYPE_2__ dir_context_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;
 int FUNC_6 (int const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_7(void *VAR_1,
                const char *VAR_2,
                const svn_string_t *VAR_3,
                apr_pool_t *VAR_4)
{
  dir_context_t *VAR_5 = VAR_1;
  svn_prop_t *VAR_6;

  if (! FUNC_1(VAR_5->commit_ctx))
    {

      FUNC_0(FUNC_4(VAR_5, VAR_4));
    }

  VAR_6 = FUNC_2(VAR_5->pool, sizeof(*VAR_6));

  VAR_6->name = FUNC_3(VAR_5->pool, VAR_2);
  VAR_6->value = FUNC_6(VAR_3, VAR_5->pool);

  FUNC_5(VAR_5->prop_changes, VAR_6->name, VAR_6);

  return VAR_0;
}
