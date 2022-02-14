
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int db_addr_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int VAR_7 ;
 int FUNC_5 (int) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (int ,int) ;

void
FUNC_8(void)
{
 uint32_t VAR_8, VAR_9, VAR_10;
 uint32_t VAR_11;
 boolean_t VAR_12;
 int VAR_13;

 if (!FUNC_4()) {
  FUNC_2("Architecture does not support HW "
      "breakpoints/watchpoints\n");
  return;
 }

 FUNC_2("\nhardware watchpoints:\n");
 FUNC_2("  watch    status        type  len     address              symbol\n");
 FUNC_2("  -----  --------  ----------  ---  ----------  ------------------\n");
 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
  VAR_8 = FUNC_7(VAR_1, VAR_13);
  if ((VAR_8 & VAR_3) != 0)
   VAR_12 = VAR_6;
  else
   VAR_12 = VAR_5;

  VAR_10 = FUNC_0(VAR_8);
  VAR_9 = FUNC_1(VAR_8);
  VAR_11 = FUNC_7(VAR_2, VAR_13) & VAR_0;
  FUNC_2("  %-5d  %-8s  %10s  %3d  0x%08x  ", VAR_13,
      VAR_12 ? "enabled" : "disabled",
      VAR_12 ? FUNC_6(VAR_10) : "",
      VAR_12 ? FUNC_5(VAR_9) : 0,
      VAR_11);
  FUNC_3((db_addr_t)VAR_11, VAR_4);
  FUNC_2("\n");
 }
}
