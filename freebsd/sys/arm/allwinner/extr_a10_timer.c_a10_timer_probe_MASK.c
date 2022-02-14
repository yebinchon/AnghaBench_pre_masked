
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct a10_timer_softc {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ ocd_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int VAR_4 ;
 struct a10_timer_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 TYPE_1__* FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_5)
{
 struct a10_timer_softc *VAR_6;




 VAR_6 = FUNC_1(VAR_5);

 if (FUNC_3(VAR_5, VAR_4)->ocd_data == 0)
  return (VAR_3);
 FUNC_2(VAR_5, "Allwinner timer");
 return (VAR_2);
}
