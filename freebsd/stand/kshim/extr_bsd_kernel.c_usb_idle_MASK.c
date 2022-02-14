
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int owned; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

void
FUNC_2(void)
{
 int VAR_5 = VAR_3;
 int VAR_6 = VAR_0.owned;
 int VAR_7;

 FUNC_0(VAR_2);

 do {
  VAR_7 = 0;
  VAR_0.owned = 0;

  while (++VAR_3 < VAR_1)
   VAR_7 |= FUNC_1(VAR_4 + VAR_3);

  VAR_3 = VAR_5;
  VAR_0.owned = VAR_6;

 } while (VAR_7);
}
