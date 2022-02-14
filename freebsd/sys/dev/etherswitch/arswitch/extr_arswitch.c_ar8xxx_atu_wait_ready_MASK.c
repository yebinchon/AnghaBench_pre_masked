
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arswitch_softc {int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct arswitch_softc*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct arswitch_softc *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3, VAR_2);

 VAR_4 = FUNC_1(VAR_3->sc_dev,
     VAR_1,
     VAR_0,
     0,
     1000);

 return (VAR_4);
}
