
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pwm_channel_t ;
typedef int phandle_t ;
typedef int device_t ;


 int FUNC_0 (int ,char*,char const*,int*) ;
 int FUNC_1 (int ,int ,int,int *) ;

int
FUNC_2(device_t VAR_0, phandle_t VAR_1, const char *VAR_2,
    pwm_channel_t *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_1, "pwm-names", VAR_2, &VAR_5);
 if (VAR_4 != 0)
  return (VAR_4);

 return (FUNC_1(VAR_0, VAR_1, VAR_5, VAR_3));
}
