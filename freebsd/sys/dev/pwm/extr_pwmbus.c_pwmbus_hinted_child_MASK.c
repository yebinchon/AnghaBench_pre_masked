
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwmbus_ivars {int pi_channel; } ;
typedef int device_t ;


 struct pwmbus_ivars* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char const*,int) ;
 int FUNC_2 (char const*,int,char*,int *) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_0, const char *VAR_1, int VAR_2)
{
 struct pwmbus_ivars *VAR_3;
 device_t VAR_4;

 VAR_4 = FUNC_1(VAR_0, 0, VAR_1, VAR_2);





 VAR_3 = FUNC_0(VAR_4);
 FUNC_2(VAR_1, VAR_2, "channel", &VAR_3->pi_channel);
}
