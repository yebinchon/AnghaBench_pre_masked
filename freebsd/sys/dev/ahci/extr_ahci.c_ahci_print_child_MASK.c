
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 intptr_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,int) ;

int
FUNC_4(device_t VAR_2, device_t VAR_3)
{
 intptr_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 VAR_4 = (intptr_t)FUNC_2(VAR_3);
 if ((VAR_4 & VAR_0) == 0)
  VAR_5 += FUNC_3(" at channel %d", (int)VAR_4 & VAR_1);
 VAR_5 += FUNC_0(VAR_2, VAR_3);
 return (VAR_5);
}
