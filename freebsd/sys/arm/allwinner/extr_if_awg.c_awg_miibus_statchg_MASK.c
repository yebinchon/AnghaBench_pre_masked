
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct awg_softc {int link_task; } ;
typedef int device_t ;


 struct awg_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(device_t VAR_1)
{
 struct awg_softc *VAR_2;

 VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_0, &VAR_2->link_task);
}
