
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int phandle_t ;
typedef int paddr ;
typedef int bus_size_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,char*,int *,int) ;
 scalar_t__ FUNC_2 (int ,int ,int,int ,int *) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(bus_size_t VAR_2)
{
 uint32_t VAR_3;
 bus_addr_t VAR_4;
 phandle_t VAR_5;

 if (FUNC_4(VAR_2) == 0)
  goto end;

 VAR_5 = FUNC_0("/soc/rstmgr");
 if (VAR_5 == -1)
  goto end;

 if ((FUNC_1(VAR_5, "reg", &VAR_3, sizeof(VAR_3))) > 0) {
  if (FUNC_2(VAR_1, VAR_3, 0x8, 0, &VAR_4) == 0) {
   FUNC_3(VAR_1, VAR_4,
       VAR_2, VAR_0);
  }
 }

end:
 while (1);
}
