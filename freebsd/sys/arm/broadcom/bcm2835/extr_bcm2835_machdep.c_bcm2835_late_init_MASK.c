
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int platform_t ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int cells ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,int*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(platform_t VAR_0)
{
 phandle_t VAR_1;
 pcell_t VAR_2[2];
 int VAR_3;

 VAR_1 = FUNC_0("/system");
 if (VAR_1 != -1) {
  VAR_3 = FUNC_1(VAR_1, "linux,serial", VAR_2,
      sizeof(VAR_2));
  if (VAR_3 > 0)
   FUNC_3(((uint64_t)VAR_2[0]) << 32 | VAR_2[1]);

  VAR_3 = FUNC_1(VAR_1, "linux,revision", VAR_2,
      sizeof(VAR_2));
  if (VAR_3 > 0)
   FUNC_2(VAR_2[0]);
 }
}
