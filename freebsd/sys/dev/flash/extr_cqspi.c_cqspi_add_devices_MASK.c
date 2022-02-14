
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phandle_t ;
typedef int * device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char*,int) ;
 int * FUNC_5 (int *,scalar_t__,int ,int *,int,int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 phandle_t VAR_2, VAR_3;
 device_t VAR_4;
 int VAR_5;

 VAR_3 = FUNC_3(VAR_1);

 for (VAR_2 = FUNC_0(VAR_3); VAR_2 != 0; VAR_2 = FUNC_1(VAR_2)) {
  VAR_4 =
      FUNC_5(VAR_1, VAR_2, 0, ((void*)0), -1, ((void*)0));
  if (VAR_4 == ((void*)0)) {
   return (VAR_0);
  }

  VAR_5 = FUNC_2(VAR_4);
  if (VAR_5 != 0) {
   FUNC_4("can't probe and attach: %d\n", VAR_5);
  }
 }

 return (0);
}
