
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thunder_mdio_softc {int * reg_base; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 struct thunder_mdio_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2)
{
 struct thunder_mdio_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->reg_base != ((void*)0)) {
  FUNC_0(VAR_2, VAR_1, VAR_0,
      VAR_3->reg_base);
 }

 return (0);
}
