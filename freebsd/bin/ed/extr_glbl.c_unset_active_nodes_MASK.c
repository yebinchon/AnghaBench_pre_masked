
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* q_forw; } ;
typedef TYPE_1__ line_t ;


 size_t FUNC_0 (size_t,long) ;
 long VAR_0 ;
 TYPE_1__** VAR_1 ;
 size_t VAR_2 ;

void
FUNC_1(line_t *VAR_3, line_t *VAR_4)
{
 line_t *VAR_5;
 long VAR_6;

 for (VAR_5 = VAR_3; VAR_5 != VAR_4; VAR_5 = VAR_5->q_forw)
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
   if (VAR_1[VAR_2] == VAR_5) {
    VAR_1[VAR_2] = ((void*)0);
    VAR_2 = FUNC_0(VAR_2, VAR_0 - 1);
    break;
   } else VAR_2 = FUNC_0(VAR_2, VAR_0 - 1);
}
