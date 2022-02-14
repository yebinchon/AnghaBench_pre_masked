
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* q_forw; struct TYPE_4__* q_back; } ;
typedef TYPE_1__ line_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 long VAR_0 ;
 TYPE_1__ VAR_1 ;

line_t *
FUNC_2(long VAR_2)
{
 static line_t *VAR_3 = &VAR_1;
 static long VAR_4 = 0;

 FUNC_1();
 if (VAR_2 > VAR_4)
  if (VAR_2 <= (VAR_4 + VAR_0) >> 1)
   for (; VAR_4 < VAR_2; VAR_4++)
    VAR_3 = VAR_3->q_forw;
  else {
   VAR_3 = VAR_1.q_back;
   for (VAR_4 = VAR_0; VAR_4 > VAR_2; VAR_4--)
    VAR_3 = VAR_3->q_back;
  }
 else
  if (VAR_2 >= VAR_4 >> 1)
   for (; VAR_4 > VAR_2; VAR_4--)
    VAR_3 = VAR_3->q_back;
  else {
   VAR_3 = &VAR_1;
   for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
    VAR_3 = VAR_3->q_forw;
  }
 FUNC_0();
 return VAR_3;
}
