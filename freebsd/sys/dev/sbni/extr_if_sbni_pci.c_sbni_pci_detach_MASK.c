
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbni_softc {scalar_t__ slave_sc; } ;
typedef int device_t ;


 int VAR_0 ;
 struct sbni_softc* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct sbni_softc*) ;
 int FUNC_3 (struct sbni_softc*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct sbni_softc *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 FUNC_2(VAR_2);
 if (VAR_2->slave_sc)
  FUNC_2(VAR_2);

 FUNC_3(VAR_2);
 if (VAR_2->slave_sc)
  FUNC_1(VAR_2->slave_sc, VAR_0);
 return (0);
}
