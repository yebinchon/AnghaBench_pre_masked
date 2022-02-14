
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int FUNC_0 (int ,char*,int,int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0, device_t VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_3 = FUNC_1(VAR_1);
 VAR_4 = FUNC_3(VAR_1);
 VAR_5 = FUNC_2(VAR_1);



 switch (VAR_4) {
 case 9:


  return 0;
 case 11:
  return 10;
 default:
  FUNC_0(VAR_0, "no IRQ mapping for %d/%d/%d/%d\n", VAR_3, VAR_4, VAR_5, VAR_2);

 }
 return (0);

}
