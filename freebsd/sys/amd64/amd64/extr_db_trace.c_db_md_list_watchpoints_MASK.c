
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dbreg {int * dr; } ;
typedef int db_addr_t ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct dbreg*,int) ;
 int VAR_1 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,struct dbreg*) ;
 int FUNC_7 (int) ;

void
FUNC_8(void)
{
 struct dbreg VAR_2;
 int VAR_3, VAR_4, VAR_5;

 FUNC_6(((void*)0), &VAR_2);

 FUNC_4("\nhardware watchpoints:\n");
 FUNC_4("  watch    status        type  len             address\n");
 FUNC_4("  -----  --------  ----------  ---  ------------------\n");
 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  if (FUNC_1(VAR_2.dr[7], VAR_3)) {
   VAR_5 = FUNC_0(VAR_2.dr[7], VAR_3);
   VAR_4 = FUNC_2(VAR_2.dr[7], VAR_3);
   if (VAR_4 == VAR_0)
    VAR_4 = 8;
   else
    VAR_4++;
   FUNC_4("  %-5d  %-8s  %10s  %3d  ",
       VAR_3, "enabled", FUNC_7(VAR_5), VAR_4);
   FUNC_5((db_addr_t)FUNC_3(&VAR_2, VAR_3), VAR_1);
   FUNC_4("\n");
  } else {
   FUNC_4("  %-5d  disabled\n", VAR_3);
  }
 }

 FUNC_4("\ndebug register values:\n");
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
  if (VAR_3 != 4 && VAR_3 != 5)
   FUNC_4("  dr%d 0x%016lx\n", VAR_3, FUNC_3(&VAR_2, VAR_3));
 FUNC_4("\n");
}
