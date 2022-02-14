
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mon_table {int type; int flags; int * f; } ;
typedef enum monitor_reqtype { ____Placeholder_monitor_reqtype } monitor_reqtype ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct mon_table *VAR_1, enum monitor_reqtype VAR_2, int VAR_3)
{
 while (VAR_1->f != ((void*)0)) {
  if (VAR_1->type == VAR_2) {
   VAR_1->flags &= ~VAR_0;
   VAR_1->flags |= VAR_3 ? VAR_0 : 0;
   return;
  }
  VAR_1++;
 }
}
