
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int phandle_t ;
typedef int * device_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int,void**) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1, boolean_t VAR_2)
{
 phandle_t VAR_3;
 device_t VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;
 uint32_t *VAR_9;
 boolean_t VAR_10;

 VAR_3 = FUNC_6(VAR_1);
 VAR_8 = FUNC_3(VAR_3, "resets", sizeof(*VAR_9),
     (void **)&VAR_9);
 if (!VAR_2 && VAR_8 < 2) {
  FUNC_5(VAR_1, "Warning: No resets specified in fdt "
      "data; device may not function.");
  return (VAR_0);
 }
 VAR_10 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7 += 2) {
  VAR_4 = FUNC_2(VAR_9[VAR_7]);
  VAR_5 = VAR_9[VAR_7 + 1];
  if (VAR_4 == ((void*)0)) {
   if (!VAR_2)
    FUNC_5(VAR_1, "Warning: can not find "
        "driver for reset number %u; device may "
        "not function\n", VAR_5);
   VAR_10 = 1;
   continue;
  }
  if (VAR_2)
   VAR_6 = FUNC_0(VAR_4, VAR_5);
  else
   VAR_6 = FUNC_1(VAR_4, VAR_5);
  if (VAR_6 != 0) {
   if (!VAR_2)
    FUNC_5(VAR_1, "Warning: failed to "
        "deassert reset number %u; device may not "
        "function\n", VAR_5);
   VAR_10 = 1;
  }
 }
 FUNC_4(VAR_9);
 return (VAR_10 ? VAR_0 : 0);
}
