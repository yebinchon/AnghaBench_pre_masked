
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int platform_t ;
typedef int phandle_t ;
typedef int paddr ;
typedef int bus_addr_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,char*,int *,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int ,int,int ,int *) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(platform_t VAR_2)
{
 phandle_t VAR_3;
 uint32_t VAR_4;
 bus_addr_t VAR_5;

 if (FUNC_4() == 0)
  goto end;

 VAR_3 = FUNC_0("src");
 if ((VAR_3 != -1) && (FUNC_1(VAR_3, "reg", &VAR_4, sizeof(VAR_4))) > 0) {
  if (FUNC_2(VAR_1, VAR_4, 0x10, 0, &VAR_5) == 0) {
   FUNC_3(VAR_1, VAR_5, 0x00, VAR_0);
  }
 }

end:
 while (1);
}
