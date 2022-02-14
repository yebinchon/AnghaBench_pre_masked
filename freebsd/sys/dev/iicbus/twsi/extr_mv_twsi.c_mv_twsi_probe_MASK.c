
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct twsi_softc {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {int ocd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct twsi_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 TYPE_1__* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3)
{
 struct twsi_softc *VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (!FUNC_3(VAR_3))
  return (VAR_1);

 if (!FUNC_2(VAR_3, VAR_2)->ocd_data)
  return (VAR_1);

 FUNC_1(VAR_3, "Marvell Integrated I2C Bus Controller");
 return (VAR_0);
}
