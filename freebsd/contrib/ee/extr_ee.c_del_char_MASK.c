
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ line_length; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*) ;

void
FUNC_3()
{
 VAR_3 = 8;
 if (VAR_5 < VAR_1->line_length)
 {
  if ((VAR_2) && (*VAR_4 > 127) &&
      ((VAR_1->line_length - VAR_5) >= 2))
  {
   VAR_4++;
   VAR_5++;
  }
  VAR_5++;
  VAR_4++;
  FUNC_2(VAR_4);
  FUNC_0(VAR_0);
 }
 else
 {
  FUNC_1(VAR_0);
  FUNC_0(VAR_0);
 }
}
