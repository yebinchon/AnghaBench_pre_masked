
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* db_breakpoint_t ;
struct TYPE_6__ {struct TYPE_6__* link; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static db_breakpoint_t
FUNC_1(void)
{
 register db_breakpoint_t VAR_4;

 if ((VAR_4 = VAR_2) != 0) {
     VAR_2 = VAR_4->link;
     return (VAR_4);
 }
 if (VAR_3 == &VAR_1[VAR_0]) {
     FUNC_0("All breakpoints used.\n");
     return (0);
 }
 VAR_4 = VAR_3;
 VAR_3++;

 return (VAR_4);
}
