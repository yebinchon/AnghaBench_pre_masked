
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int type ;
typedef int size ;
typedef int phandle_t ;
typedef int addr ;


 int FUNC_0 (int ,char*,int*,int) ;
 int FUNC_1 (int ,char*,char*,int) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3(phandle_t VAR_0, uint32_t *VAR_1, uint32_t *VAR_2, int *VAR_3)
{
 char VAR_4[64];
 uint32_t VAR_5, VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = FUNC_0(VAR_0, "#address-cells", &VAR_5, sizeof(VAR_5));
 if (VAR_8 == -1)
  VAR_5 = 2;
 VAR_8 = FUNC_0(VAR_0, "#size-cells", &VAR_6, sizeof(VAR_6));
 if (VAR_8 == -1)
  VAR_6 = 1;
 VAR_7 = 0;
 if (VAR_5 == 3 && VAR_6 == 2) {
  VAR_8 = FUNC_1(VAR_0, "device_type", VAR_4, sizeof(VAR_4));
  if (VAR_8 != -1) {
   VAR_4[sizeof(VAR_4) - 1] = '\0';
   if (FUNC_2(VAR_4, "pci") == 0 ||
       FUNC_2(VAR_4, "pciex")== 0)
    VAR_7 = 1;
  }
 }
 if (VAR_1 != ((void*)0))
  *VAR_1 = VAR_5;
 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_6;
 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_7;
}
