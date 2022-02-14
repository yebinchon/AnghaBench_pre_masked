
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; int mutex; int cond; } ;
typedef TYPE_1__ waitable_counter_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(waitable_counter_t *VAR_3,
                           int VAR_4)
{
  svn_boolean_t VAR_5 = VAR_0;


  do
    {
      FUNC_0(FUNC_1(VAR_3->mutex));

      if (VAR_3->value == VAR_4)
        VAR_5 = VAR_2;
      else
        FUNC_0(FUNC_3(VAR_3->cond, VAR_3->mutex));

      FUNC_0(FUNC_2(VAR_3->mutex, VAR_1));
    }
  while (!VAR_5);

  return VAR_1;
}
