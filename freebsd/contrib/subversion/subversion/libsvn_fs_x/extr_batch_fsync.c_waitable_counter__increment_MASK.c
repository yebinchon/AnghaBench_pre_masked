
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mutex; int cond; int value; } ;
typedef TYPE_1__ waitable_counter_t ;
typedef int svn_error_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(waitable_counter_t *VAR_1)
{
  FUNC_0(FUNC_1(VAR_1->mutex));
  VAR_1->value++;

  FUNC_0(FUNC_3(VAR_1->cond));
  FUNC_0(FUNC_2(VAR_1->mutex, VAR_0));

  return VAR_0;
}
