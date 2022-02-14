
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* rtx ;


 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 void* FUNC_2 (void*) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;

void
FUNC_3 (rtx VAR_3, rtx VAR_4)
{
  rtx VAR_5;

  VAR_1 = VAR_3;
  VAR_2 = VAR_4;
  VAR_0 = 0;

  for (VAR_5 = VAR_3; VAR_5; VAR_5 = FUNC_2 (VAR_5))
    VAR_0 = FUNC_1 (VAR_0, FUNC_0 (VAR_5));

  VAR_0++;
}
