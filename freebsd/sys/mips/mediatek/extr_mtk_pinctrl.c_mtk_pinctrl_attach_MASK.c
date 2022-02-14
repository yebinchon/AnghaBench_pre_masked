
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{

 if (FUNC_0(VAR_3) != 0) {
  FUNC_1(VAR_3, "Only one pin control allowed\n");
  return (VAR_0);
 }

 if (VAR_2)
  FUNC_1(VAR_3, "GPIO mode start: 0x%08x\n",
      FUNC_4(VAR_1));

 FUNC_3(VAR_3, ((void*)0));
 FUNC_2(VAR_3);

 if (VAR_2)
  FUNC_1(VAR_3, "GPIO mode end  : 0x%08x\n",
      FUNC_4(VAR_1));

 return (0);
}
