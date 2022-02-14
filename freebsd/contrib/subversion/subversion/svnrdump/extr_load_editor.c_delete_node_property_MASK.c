
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int name; int * value; } ;
typedef TYPE_2__ svn_prop_t ;
typedef int svn_error_t ;
struct node_baton {int prop_changes; TYPE_1__* rb; } ;
typedef int apr_pool_t ;
struct TYPE_5__ {int * pool; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_2__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int ,int ,TYPE_2__*) ;
 int FUNC_4 (char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_1,
                     const char *VAR_2)
{
  struct node_baton *VAR_3 = VAR_1;
  apr_pool_t *VAR_4 = VAR_3->rb->pool;
  svn_prop_t *VAR_5;

  FUNC_0(FUNC_4(VAR_2, ((void*)0), VAR_4));

  VAR_5 = FUNC_1(VAR_4, sizeof (*VAR_5));
  VAR_5->name = FUNC_2(VAR_4, VAR_2);
  VAR_5->value = ((void*)0);
  FUNC_3(VAR_3->prop_changes, VAR_5->name, VAR_5);

  return VAR_0;
}
