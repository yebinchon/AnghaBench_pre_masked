
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_3)
{
 device_t VAR_4 = FUNC_0(VAR_3);

 FUNC_3(VAR_4);
 if (FUNC_5(VAR_4, VAR_3, VAR_2)) {
  FUNC_7(VAR_4);
  FUNC_1(VAR_3, "can't allocate ppbus\n");
  return (0);
 }

 FUNC_2(VAR_3);

 if ((FUNC_6(VAR_4) & VAR_1) ||
  ((FUNC_6(VAR_4) & VAR_0) != VAR_0)) {
  FUNC_4(VAR_4, VAR_3);
  FUNC_7(VAR_4);
  return (0);
 }

 FUNC_4(VAR_4, VAR_3);
 FUNC_7(VAR_4);

 return (1);
}
