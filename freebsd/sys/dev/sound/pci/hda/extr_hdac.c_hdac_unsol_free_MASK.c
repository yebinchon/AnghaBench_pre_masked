
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_softc {int unsol_registered; } ;
typedef int device_t ;


 struct hdac_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct hdac_softc*) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, device_t VAR_1, int VAR_2)
{
 struct hdac_softc *VAR_3 = FUNC_0(VAR_0);

 VAR_3->unsol_registered--;
 FUNC_1(VAR_3);
}
