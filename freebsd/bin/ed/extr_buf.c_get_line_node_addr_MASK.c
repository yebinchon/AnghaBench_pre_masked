
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* q_forw; } ;
typedef TYPE_1__ line_t ;


 long VAR_0 ;
 TYPE_1__ VAR_1 ;
 char* VAR_2 ;

long
FUNC_0(line_t *VAR_3)
{
 line_t *VAR_4 = &VAR_1;
 long VAR_5 = 0;

 while (VAR_4 != VAR_3 && (VAR_4 = VAR_4->q_forw) != &VAR_1)
  VAR_5++;
 if (VAR_5 && VAR_4 == &VAR_1) {
  VAR_2 = "invalid address";
  return VAR_0;
  }
  return VAR_5;
}
