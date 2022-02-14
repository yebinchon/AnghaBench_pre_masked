
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwmbus_ivars {int pi_channel; } ;
typedef int device_t ;


 struct pwmbus_ivars* FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,size_t,char*,char*,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0, device_t VAR_1, char *VAR_2, size_t VAR_3)
{
 struct pwmbus_ivars *VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 FUNC_3(VAR_2, VAR_3, "hwdev=%s channel=%u",
     FUNC_1(FUNC_2(VAR_0)), VAR_4->pi_channel);

 return (0);
}
