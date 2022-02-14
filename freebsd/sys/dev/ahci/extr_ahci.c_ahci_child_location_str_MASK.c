
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 intptr_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t,char*,int) ;

int
FUNC_2(device_t VAR_2, device_t VAR_3, char *VAR_4,
    size_t VAR_5)
{
 intptr_t VAR_6;

 VAR_6 = (intptr_t)FUNC_0(VAR_3);
 if ((VAR_6 & VAR_0) == 0)
  FUNC_1(VAR_4, VAR_5, "channel=%d", (int)VAR_6 & VAR_1);
 return (0);
}
