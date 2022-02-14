
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arswitch_softc {int sc_dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct arswitch_softc*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int,int) ;

int
FUNC_3(struct arswitch_softc *VAR_1, int VAR_2, int VAR_3)
{

 FUNC_1(VAR_1, VAR_0);
 return (FUNC_2(VAR_1->sc_dev,
     FUNC_0(VAR_2), 0xfff, VAR_3));
}
