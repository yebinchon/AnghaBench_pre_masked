
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmamux_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct dmamux_softc*,int,int ,int) ;
 struct dmamux_softc* VAR_3 ;

int
FUNC_2(int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct dmamux_softc *VAR_8;
 int VAR_9;

 VAR_8 = VAR_3;

 FUNC_1(VAR_8, VAR_4, FUNC_0(VAR_6), 0x0);

 VAR_9 = 0;
 if (VAR_7)
  VAR_9 |= (VAR_0);

 VAR_9 &= ~(VAR_1 << VAR_2);
 VAR_9 |= (VAR_5 << VAR_2);

 FUNC_1(VAR_8, VAR_4, FUNC_0(VAR_6), VAR_9);

 return (0);
}
