
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_5__ {struct tee_baton_t* baton; } ;
typedef TYPE_1__ svn_diff_tree_processor_t ;
struct tee_node_baton_t {int * baton2; int * baton1; } ;
struct tee_baton_t {TYPE_3__* p2; TYPE_4__* p1; } ;
typedef int apr_pool_t ;
struct TYPE_7__ {int (* node_absent ) (char const*,int *,TYPE_4__*,int *) ;} ;
struct TYPE_6__ {int (* node_absent ) (char const*,int *,TYPE_3__*,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const*,int *,TYPE_4__*,int *) ;
 int FUNC_2 (char const*,int *,TYPE_3__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const char *VAR_1,
                void *VAR_2,
                const svn_diff_tree_processor_t *VAR_3,
                apr_pool_t *VAR_4)
{
  struct tee_baton_t *VAR_5 = VAR_3->baton;
  struct tee_node_baton_t *VAR_6 = VAR_2;

  FUNC_0(VAR_5->p1->node_absent(VAR_1,
                              VAR_6 ? VAR_6->baton1 : ((void*)0),
                              VAR_5->p1,
                              VAR_4));

  FUNC_0(VAR_5->p2->node_absent(VAR_1,
                              VAR_6 ? VAR_6->baton2 : ((void*)0),
                              VAR_5->p2,
                              VAR_4));

  return VAR_0;
}
