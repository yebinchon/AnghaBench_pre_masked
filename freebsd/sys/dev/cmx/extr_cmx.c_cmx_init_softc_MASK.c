
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmx_softc {int timeout; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 struct cmx_softc* FUNC_0 (int ) ;

void
FUNC_1(device_t VAR_1)
{
 struct cmx_softc *VAR_2 = FUNC_0(VAR_1);
 VAR_2->dev = VAR_1;
 VAR_2->timeout = VAR_0;
}
