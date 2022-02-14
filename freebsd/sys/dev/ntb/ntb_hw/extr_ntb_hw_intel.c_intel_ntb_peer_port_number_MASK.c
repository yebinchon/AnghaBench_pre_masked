
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_softc {scalar_t__ dev_type; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ntb_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_2, int VAR_3)
{
 struct ntb_softc *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3 != 0)
  return (-VAR_0);

 return (VAR_4->dev_type == VAR_1 ? 1 : 0);
}
