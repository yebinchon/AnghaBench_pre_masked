
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwmbus_ivars {int pi_channel; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 struct pwmbus_ivars* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0, device_t VAR_1)
{
 struct pwmbus_ivars *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_1);

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 VAR_3 += FUNC_3(" channel %u", VAR_2->pi_channel);
 VAR_3 += FUNC_0(VAR_0, VAR_1);

 return (VAR_3);
}
