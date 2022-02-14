
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_2__ {int ich_arg; int ich_func; } ;
struct adm1030_softc {TYPE_1__ enum_hook; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,int ,int ,int ,char*,char*) ;
 int FUNC_1 (struct sysctl_oid*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 struct adm1030_softc* FUNC_3 (int ) ;
 struct sysctl_ctx_list* FUNC_4 (int ) ;
 struct sysctl_oid* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_7)
{
 struct adm1030_softc *VAR_8;
 struct sysctl_ctx_list *VAR_9;
 struct sysctl_oid *VAR_10;

 VAR_8 = FUNC_3(VAR_7);

 VAR_8->enum_hook.ich_func = VAR_5;
 VAR_8->enum_hook.ich_arg = VAR_7;






 if (FUNC_2(&VAR_8->enum_hook) != 0)
  return (VAR_3);

 VAR_9 = FUNC_4(VAR_7);
 VAR_10 = FUNC_5(VAR_7);
 FUNC_0(VAR_9, FUNC_1(VAR_10), VAR_4, "pwm",
   VAR_2 | VAR_1 | VAR_0, VAR_7,
   0, VAR_6, "I", "Fan PWM Rate");

 return (0);
}
