
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_element__content_t ;
struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_branch__state_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int (* get_element ) (TYPE_2__ const*,int **,int,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_2__ const*,int **,int,int *) ;

svn_error_t *
FUNC_2(const svn_branch__state_t *VAR_1,
                              svn_element__content_t **VAR_2,
                              int VAR_3,
                              apr_pool_t *VAR_4)
{
  FUNC_0(VAR_1->vtable->get_element(VAR_1,
                                      VAR_2, VAR_3, VAR_4));
  return VAR_0;
}
