
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpioiic_softc {int sc_dev; int sc_busdev; } ;


 int FUNC_0 (int ,int ,int,unsigned int*) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(struct gpioiic_softc *VAR_1, int VAR_2)
{
 unsigned int VAR_3;

 FUNC_1(VAR_1->sc_busdev, VAR_1->sc_dev, VAR_2, VAR_0);
 FUNC_0(VAR_1->sc_busdev, VAR_1->sc_dev, VAR_2, &VAR_3);
 return ((int)VAR_3);
}
