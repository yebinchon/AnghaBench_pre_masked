
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void
FUNC_2(void)
{

 if (VAR_0 > 640) {
  FUNC_1("Preposterous BIOS basemem of %uK, truncating to 640K\n",
   VAR_0);
  VAR_0 = 640;
 }

 FUNC_0(VAR_0);
}
