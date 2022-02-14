
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct anadig_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct anadig_softc*,int ) ;
 int FUNC_1 (struct anadig_softc*,int ,int) ;
 struct anadig_softc* VAR_5 ;

uint32_t
FUNC_2(uint32_t VAR_6, uint32_t VAR_7, uint32_t VAR_8)
{
 struct anadig_softc *VAR_9;
 int VAR_10;

 VAR_9 = VAR_5;





 VAR_10 = FUNC_0(VAR_9, VAR_0);
 VAR_10 &= ~(VAR_3 << VAR_4);
 VAR_10 |= (VAR_6 << VAR_4);
 FUNC_1(VAR_9, VAR_0, VAR_10);
 FUNC_1(VAR_9, VAR_2, VAR_7);
 FUNC_1(VAR_9, VAR_1, VAR_8);

 return (0);
}
