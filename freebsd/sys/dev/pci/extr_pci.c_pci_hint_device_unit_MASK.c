
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int me2 ;
typedef int me1 ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int*,char const*,int*,char*,int *) ;
 int FUNC_5 (char const*,int,char*,char const**) ;
 int FUNC_6 (char*,int,char*,int,int,int,...) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

__attribute__((used)) static void
FUNC_8(device_t VAR_0, device_t VAR_1, const char *VAR_2, int *VAR_3)
{
 int VAR_4, VAR_5;
 const char *VAR_6;
 char VAR_7[24], VAR_8[32];
 uint8_t VAR_9, VAR_10, VAR_11;
 uint32_t VAR_12;

 VAR_12 = FUNC_1(VAR_1);
 VAR_9 = FUNC_0(VAR_1);
 VAR_10 = FUNC_3(VAR_1);
 VAR_11 = FUNC_2(VAR_1);
 FUNC_6(VAR_7, sizeof(VAR_7), "pci%u:%u:%u", VAR_9, VAR_10, VAR_11);
 FUNC_6(VAR_8, sizeof(VAR_8), "pci%u:%u:%u:%u", VAR_12, VAR_9, VAR_10, VAR_11);
 VAR_4 = 0;
 while (FUNC_4(&VAR_4, VAR_2, &VAR_5, "at", ((void*)0)) == 0) {
  FUNC_5(VAR_2, VAR_5, "at", &VAR_6);
  if (FUNC_7(VAR_6, VAR_7) != 0 && FUNC_7(VAR_6, VAR_8) != 0)
   continue;
  *VAR_3 = VAR_5;
  return;
 }
}
