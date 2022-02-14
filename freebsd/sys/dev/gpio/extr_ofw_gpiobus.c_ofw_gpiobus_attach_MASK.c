
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phandle_t ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int ,int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_0)
{
 int VAR_1;
 phandle_t VAR_2;

 VAR_1 = FUNC_6(VAR_0);
 if (VAR_1 != 0)
  return (VAR_1);
 FUNC_5(VAR_0);
 FUNC_3(VAR_0);



 for (VAR_2 = FUNC_0(FUNC_7(VAR_0)); VAR_2 != 0;
     VAR_2 = FUNC_2(VAR_2)) {
  if (!FUNC_1(VAR_2, "gpios"))
   continue;
  if (FUNC_8(VAR_0, ((void*)0), VAR_2) == ((void*)0))
   continue;
 }

 return (FUNC_4(VAR_0));
}
