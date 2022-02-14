
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct rtwn_softc {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct rtwn_softc*,int ) ;
 int FUNC_5 (struct rtwn_softc*,int ,int,int) ;

uint32_t
FUNC_6(struct rtwn_softc *VAR_6, int VAR_7, uint8_t VAR_8)
{
 uint32_t VAR_9, VAR_10;


 if (VAR_8 != VAR_5)
  FUNC_5(VAR_6, VAR_0, 0, 0x08);

 VAR_10 = FUNC_4(VAR_6, FUNC_2(VAR_7));
 VAR_9 = (VAR_10 & VAR_1) ? 1 : 0;

 FUNC_5(VAR_6, VAR_2,
     VAR_3, VAR_8);

 VAR_10 = FUNC_4(VAR_6, VAR_9 ? FUNC_1(VAR_7) :
     FUNC_3(VAR_7));


 if (VAR_8 != VAR_5)
  FUNC_5(VAR_6, VAR_0, 0x08, 0);

 return (FUNC_0(VAR_10, VAR_4));
}
