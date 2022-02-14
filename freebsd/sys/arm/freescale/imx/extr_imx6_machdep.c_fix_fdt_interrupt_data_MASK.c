
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socipar ;
typedef int phandle_t ;
typedef int gpcipar ;
typedef int gicxref ;
typedef int gicipar ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,int*,int) ;
 int FUNC_2 (int,char*,int*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(void)
{
 phandle_t VAR_0, VAR_1, VAR_2;
 phandle_t VAR_3, VAR_4, VAR_5;
 phandle_t VAR_6, VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0("/soc");
 if (VAR_7 == -1)
     return;
 VAR_8 = FUNC_1(VAR_7, "interrupt-parent", &VAR_6,
     sizeof(VAR_6));
 if (VAR_8 <= 0)
  return;


 VAR_1 = FUNC_0("/soc/interrupt-controller@00a01000");
 if (VAR_1 == -1)
  VAR_1 = FUNC_0("/soc/interrupt-controller@a01000");
 if (VAR_1 == -1) {
  VAR_1 = FUNC_0("/interrupt-controller@00a01000");
  if (VAR_1 == -1)
   VAR_1 = FUNC_0("/interrupt-controller@a01000");
  if (VAR_1 == -1)
   return;
 }
 VAR_2 = FUNC_3(VAR_1);


 VAR_8 = FUNC_1(VAR_1, "interrupt-parent", &VAR_0,
     sizeof(VAR_0));
 if (VAR_8 <= 0)
  VAR_0 = VAR_2;

 VAR_4 = FUNC_0("/soc/aips-bus@02000000/gpc@020dc000");
 if (VAR_4 == -1)
  VAR_4 = FUNC_0("/soc/aips-bus@2000000/gpc@20dc000");
 if (VAR_4 == -1)
  return;
 VAR_8 = FUNC_1(VAR_4, "interrupt-parent", &VAR_3,
     sizeof(VAR_3));
 if (VAR_8 <= 0)
  return;
 VAR_5 = FUNC_3(VAR_4);

 if (VAR_6 != VAR_5 || VAR_3 != VAR_2 || VAR_0 != VAR_2)
  return;

 VAR_2 = FUNC_4(VAR_2);
 FUNC_2(VAR_7, "interrupt-parent", &VAR_2, sizeof(VAR_2));
}
