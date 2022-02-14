
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int node; struct TYPE_3__* parent; } ;
typedef TYPE_1__ parent_path_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(parent_path_t *VAR_1,
                            apr_int64_t VAR_2,
                            apr_pool_t *VAR_3)
{
  for (; VAR_1; VAR_1 = VAR_1->parent)
    FUNC_0(FUNC_1(VAR_1->node,
                                                     VAR_2,
                                                     VAR_3));

  return VAR_0;
}
