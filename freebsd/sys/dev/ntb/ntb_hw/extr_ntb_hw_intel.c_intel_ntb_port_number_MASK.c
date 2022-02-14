
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_softc {scalar_t__ dev_type; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 struct ntb_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1)
{
 struct ntb_softc *VAR_2 = FUNC_0(VAR_1);

 return (VAR_2->dev_type == VAR_0 ? 0 : 1);
}
