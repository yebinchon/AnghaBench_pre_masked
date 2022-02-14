
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct rtc8583_softc* ich_arg; int ich_func; } ;
struct rtc8583_softc {TYPE_1__ init_hook; int dev; int busdev; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 struct rtc8583_softc* FUNC_2 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 struct rtc8583_softc *VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 VAR_3->dev = VAR_2;
 VAR_3->busdev = FUNC_1(VAR_3->dev);





 VAR_3->init_hook.ich_func = VAR_1;
 VAR_3->init_hook.ich_arg = VAR_3;
 if (FUNC_0(&VAR_3->init_hook) != 0)
  return (VAR_0);

 return (0);
}
