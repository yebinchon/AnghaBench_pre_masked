
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
 int const VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int const FUNC_0 (int ,int) ;
 int FUNC_1 (struct rtwn_softc*) ;
 int FUNC_2 (struct rtwn_softc*,scalar_t__) ;
 int FUNC_3 (struct rtwn_softc*,int,int,int const) ;

void
FUNC_4(struct rtwn_softc *VAR_7)
{
 const uint8_t VAR_8 = VAR_4 | FUNC_0(VAR_0, 3);

 if (FUNC_2(VAR_7, VAR_6 + 3) & 0x80)
  FUNC_1(VAR_7);
 else {

  FUNC_3(VAR_7, VAR_5, VAR_2,
      VAR_8 | FUNC_0(VAR_1, VAR_3));

  FUNC_3(VAR_7, 0xf008, 0x18, 0);
 }
}
