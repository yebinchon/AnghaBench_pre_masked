
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* entry; int wired; } ;
struct TYPE_3__ {int entrylo1; int entrylo0; int pagemask; int entryhi; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned int) ;
 unsigned int VAR_2 ;
 int FUNC_7 () ;
 TYPE_2__* VAR_3 ;

void
FUNC_8(void)
{
 unsigned VAR_4, VAR_5, VAR_6;

 VAR_6 = FUNC_0(VAR_1);
 if (VAR_2 > VAR_0)
  VAR_4 = VAR_0;
 else
  VAR_4 = VAR_2;
 VAR_3[VAR_6].wired = FUNC_5();
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  FUNC_6(VAR_5);
  FUNC_7();

  VAR_3[VAR_6].entry[VAR_5].entryhi = FUNC_1();
  VAR_3[VAR_6].entry[VAR_5].pagemask = FUNC_4();
  VAR_3[VAR_6].entry[VAR_5].entrylo0 = FUNC_2();
  VAR_3[VAR_6].entry[VAR_5].entrylo1 = FUNC_3();
 }
}
