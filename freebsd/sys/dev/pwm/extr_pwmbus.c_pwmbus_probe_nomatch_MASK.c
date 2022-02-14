
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwmbus_ivars {int pi_channel; } ;
typedef int device_t ;


 struct pwmbus_ivars* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, device_t VAR_1)
{
 struct pwmbus_ivars *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 != ((void*)0))
  FUNC_1(VAR_0, "<unknown> on channel %u\n",
      VAR_2->pi_channel);

 return;
}
