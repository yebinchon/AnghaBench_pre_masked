
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dbreg {int * dr; } ;
typedef int db_addr_t ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (struct dbreg*,int) ;
 int VAR_0 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,struct dbreg*) ;
 int FUNC_7 (int) ;

void
FUNC_8(void)
{
 struct dbreg VAR_1;
 int VAR_2, VAR_3, VAR_4;

 FUNC_6(((void*)0), &VAR_1);

 FUNC_4("\nhardware watchpoints:\n");
 FUNC_4("  watch    status        type  len     address\n");
 FUNC_4("  -----  --------  ----------  ---  ----------\n");
 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  if (FUNC_1(VAR_1.dr[7], VAR_2)) {
   VAR_4 = FUNC_0(VAR_1.dr[7], VAR_2);
   VAR_3 = FUNC_2(VAR_1.dr[7], VAR_2);
   FUNC_4("  %-5d  %-8s  %10s  %3d  ",
       VAR_2, "enabled", FUNC_7(VAR_4), VAR_3 + 1);
   FUNC_5((db_addr_t)FUNC_3(&VAR_1, VAR_2), VAR_0);
   FUNC_4("\n");
  } else {
   FUNC_4("  %-5d  disabled\n", VAR_2);
  }
 }

 FUNC_4("\ndebug register values:\n");
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
  if (VAR_2 != 4 && VAR_2 != 5)
   FUNC_4("  dr%d 0x%08x\n", VAR_2, FUNC_3(&VAR_1, VAR_2));
 FUNC_4("\n");
}
