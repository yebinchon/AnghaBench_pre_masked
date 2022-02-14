
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_2__ {int first_reg; int size; int mode; int birth; int freq; int n_refs; int alternate_class; int min_class; int n_throwing_calls_crossed; int n_calls_crossed; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 (int) ;
 int* VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_5 (int) ;
 int* VAR_4 ;

__attribute__((used)) static void
FUNC_6 (int VAR_5, enum machine_mode VAR_6, int VAR_7, int VAR_8)
{
  int VAR_9 = VAR_0++;

  VAR_4[VAR_5] = VAR_9;
  VAR_3[VAR_5] = 0;
  VAR_2[VAR_5] = -1;

  VAR_1[VAR_9].first_reg = VAR_5;
  VAR_1[VAR_9].size = VAR_7;
  VAR_1[VAR_9].mode = VAR_6;
  VAR_1[VAR_9].birth = VAR_8;
  VAR_1[VAR_9].n_calls_crossed = FUNC_1 (VAR_5);
  VAR_1[VAR_9].n_throwing_calls_crossed = FUNC_3 (VAR_5);
  VAR_1[VAR_9].min_class = FUNC_5 (VAR_5);
  VAR_1[VAR_9].alternate_class = FUNC_4 (VAR_5);
  VAR_1[VAR_9].n_refs = FUNC_2 (VAR_5);
  VAR_1[VAR_9].freq = FUNC_0 (VAR_5);
}
