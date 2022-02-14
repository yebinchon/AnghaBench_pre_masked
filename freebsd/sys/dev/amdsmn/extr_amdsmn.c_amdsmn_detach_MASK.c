
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdsmn_softc {int smn_lock; } ;
typedef int device_t ;


 struct amdsmn_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

int
FUNC_2(device_t VAR_0)
{
 struct amdsmn_softc *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->smn_lock);
 return (0);
}
