
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rtwn_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int const VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int const FUNC_0 (int ,int) ;
 int FUNC_1 (struct rtwn_softc*,int ) ;
 int FUNC_2 (struct rtwn_softc*,int ,int ,int const) ;

void
FUNC_3(struct rtwn_softc *VAR_8)
{
 const uint8_t VAR_9 = VAR_5 | FUNC_0(VAR_0, 3);

 if ((FUNC_1(VAR_8, VAR_7) & 0x30) == 0) {

  FUNC_2(VAR_8, VAR_6, VAR_2,
      VAR_9 | FUNC_0(VAR_1, VAR_4));
 } else {

  FUNC_2(VAR_8, VAR_6, VAR_2,
      VAR_9 | FUNC_0(VAR_1, VAR_3));
 }
}
