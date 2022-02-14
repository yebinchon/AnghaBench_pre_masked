
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aesni_softc {int cid; } ;
typedef int device_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 struct aesni_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
 struct aesni_softc *VAR_1;

 VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->cid);

 FUNC_0();

 return (0);
}
