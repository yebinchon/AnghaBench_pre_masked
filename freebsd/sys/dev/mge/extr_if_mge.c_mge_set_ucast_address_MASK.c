
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct mge_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct mge_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct mge_softc *VAR_1, uint8_t VAR_2, uint8_t VAR_3)
{
 uint32_t VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_2 &= 0xf;
 VAR_4 = VAR_2 / VAR_0;
 VAR_5 = (VAR_2 % VAR_0) * 8;
 VAR_6 = (1 | (VAR_3 << 1)) << VAR_5;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if ( VAR_7 == VAR_4)
   FUNC_1(VAR_1, FUNC_0(VAR_7), VAR_6);
  else
   FUNC_1(VAR_1, FUNC_0(VAR_7), 0);
 }
}
