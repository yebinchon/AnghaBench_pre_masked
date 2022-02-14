
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aw_ccu_softc {int mtx; } ;
typedef int device_t ;


 struct aw_ccu_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0)
{
 struct aw_ccu_softc *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 FUNC_1(&VAR_1->mtx);
}
