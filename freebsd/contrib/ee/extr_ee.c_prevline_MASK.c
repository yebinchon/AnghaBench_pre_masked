
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line_length; int line; struct TYPE_2__* prev_line; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;

void
FUNC_2()
{
 VAR_1 = VAR_1->prev_line;
 VAR_0--;
 VAR_2 = VAR_1->line;
 VAR_3 = 1;
 if (VAR_4 == 0)
 {
  FUNC_1(VAR_5);
  FUNC_0(0,0,VAR_2,1,VAR_1->line_length);
 }
 else
  VAR_4--;
 while (VAR_3 < VAR_1->line_length)
 {
  VAR_3++;
  VAR_2++;
 }
}
