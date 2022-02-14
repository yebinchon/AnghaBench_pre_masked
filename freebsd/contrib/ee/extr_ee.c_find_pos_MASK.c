
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line_length; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int*) ;
 int* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_10 ;
 int FUNC_3 (int ,int ,int) ;

void
FUNC_4()
{
 VAR_7 = 0;
 VAR_6 = 1;
 while ((VAR_7 < VAR_8) && (VAR_6 < VAR_1->line_length))
 {
  if (*VAR_5 == 9)
   VAR_7 += FUNC_2(VAR_7);
  else if (*VAR_5 < ' ')
   VAR_7 += 2;
  else if ((VAR_2) && (*VAR_5 > 127) &&
      ((VAR_1->line_length - VAR_6) >= 2))
  {
   VAR_7 += 2;
   VAR_5++;
   VAR_6++;
  }
  else
   VAR_7++;
  VAR_6++;
  VAR_5++;
 }
 if ((VAR_7 - VAR_3) > VAR_4)
 {
  VAR_3 = (VAR_7 - (VAR_7 % 8)) - (VAR_0 - 8);
  FUNC_1(VAR_9, VAR_5);
 }
 else if (VAR_7 < VAR_3)
 {
  VAR_3 = FUNC_0(0, (VAR_7 - (VAR_7 % 8)));
  FUNC_1(VAR_9, VAR_5);
 }
 FUNC_3(VAR_10, VAR_9, (VAR_7 - VAR_3));
}
