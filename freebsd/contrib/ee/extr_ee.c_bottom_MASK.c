
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line; struct TYPE_2__* next_line; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_1()
{
 while (VAR_1->next_line != ((void*)0))
 {
  VAR_1 = VAR_1->next_line;
  VAR_0++;
 }
 VAR_4 = VAR_1->line;
 if (VAR_2)
  VAR_2 = 0;
 VAR_5 = 1;
 FUNC_0(VAR_3, VAR_4);
 VAR_7 = VAR_6;
}
