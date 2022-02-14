
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct rtwn_softc {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (struct rtwn_softc*,int ) ;
 int FUNC_5 (struct rtwn_softc*,int ,int ,int ) ;
 int FUNC_6 (struct rtwn_softc*,int) ;

uint32_t
FUNC_7(struct rtwn_softc *VAR_4, int VAR_5, uint8_t VAR_6)
{
 uint32_t VAR_7, VAR_8;

 VAR_8 = FUNC_4(VAR_4, FUNC_2(VAR_5));
 VAR_7 = (VAR_8 & VAR_0) ? 1 : 0;

 FUNC_5(VAR_4, VAR_1,
     VAR_2, VAR_6);
 FUNC_6(VAR_4, 20);

 VAR_8 = FUNC_4(VAR_4, VAR_7 ? FUNC_1(VAR_5) :
     FUNC_3(VAR_5));

 return (FUNC_0(VAR_8, VAR_3));
}
