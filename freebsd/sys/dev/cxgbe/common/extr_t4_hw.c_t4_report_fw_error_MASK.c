
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,char*,char const* const,int) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*,int ) ;

__attribute__((used)) static void FUNC_4(struct adapter *VAR_3)
{
 static const char *const VAR_4[] = {
  "Crash",
  "During Device Preparation",
  "During Device Configuration",
  "During Device Initialization",
  "Unexpected Event",
  "Insufficient Airflow",
  "Device Shutdown",
  "Reserved",
 };
 u32 VAR_5;

 VAR_5 = FUNC_3(VAR_3, VAR_0);
 if (VAR_5 & VAR_2) {
  VAR_3->flags &= ~VAR_1;
  FUNC_0(VAR_3, "firmware reports adapter error: %s (0x%08x)\n",
      VAR_4[FUNC_1(VAR_5)], VAR_5);
  if (VAR_5 != 0xffffffff)
   FUNC_2(VAR_3);
 }
}
