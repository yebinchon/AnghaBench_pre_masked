
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1, int VAR_2, caddr_t VAR_3)
{
 device_t VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = 0;
 int VAR_6;

 switch (VAR_2) {
 case 128:

  VAR_6 = *(int *)VAR_3;
  FUNC_1(VAR_4);
  VAR_5 = FUNC_3(VAR_4, VAR_1, VAR_6);
  FUNC_4(VAR_4);
  break;

 case 129:

  FUNC_1(VAR_4);
  VAR_5 = FUNC_2(VAR_4, VAR_1);
  FUNC_4(VAR_4);
  break;

 default:
  VAR_5 = VAR_0;
 }

 return (VAR_5);
}
