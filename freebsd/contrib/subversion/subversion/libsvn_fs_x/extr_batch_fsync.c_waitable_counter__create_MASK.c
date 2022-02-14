
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mutex; int cond; scalar_t__ value; } ;
typedef TYPE_1__ waitable_counter_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(waitable_counter_t **VAR_2,
                         apr_pool_t *VAR_3)
{
  waitable_counter_t *VAR_4 = FUNC_1(VAR_3, sizeof(*VAR_4));
  VAR_4->value = 0;

  FUNC_0(FUNC_3(&VAR_4->cond, VAR_3));
  FUNC_0(FUNC_2(&VAR_4->mutex, VAR_1, VAR_3));

  *VAR_2 = VAR_4;

  return VAR_0;
}
