
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line_length; int line; struct TYPE_2__* next_line; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int ,int,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int ) ;

void
FUNC_4()
{
 VAR_1 = VAR_1->next_line;
 VAR_0++;
 VAR_3 = VAR_1->line;
 VAR_4 = 1;
 if (VAR_5 == VAR_2)
 {
  FUNC_3(VAR_6, 0,0);
  FUNC_2(VAR_6);
  FUNC_3(VAR_6, VAR_2,0);
  FUNC_1(VAR_6);
  FUNC_0(VAR_2,0,VAR_3,1,VAR_1->line_length);
 }
 else
  VAR_5++;
}
