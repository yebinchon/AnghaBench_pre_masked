
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
struct hifn_softc {int sc_ramsize; } ;
typedef int int32_t ;
typedef int i ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,int*,int) ;
 scalar_t__ FUNC_2 (struct hifn_softc*,int,int*) ;
 int FUNC_3 (struct hifn_softc*,int,int*) ;

__attribute__((used)) static int
FUNC_4(struct hifn_softc *VAR_2)
{
 u_int32_t VAR_3;
 u_int8_t VAR_4[8];
 u_int8_t VAR_5[sizeof(VAR_4)];
 int32_t VAR_6;

 for (VAR_6 = 0; VAR_6 < sizeof(VAR_4); VAR_6++)
  VAR_4[VAR_6] = VAR_5[VAR_6] = VAR_6 ^ 0x5a;

 for (VAR_6 = VAR_0 - 1; VAR_6 >= 0; VAR_6--) {
  VAR_3 = VAR_6 * VAR_1;
  FUNC_1(&VAR_6, VAR_4, sizeof(VAR_6));
  FUNC_3(VAR_2, VAR_3, VAR_4);
 }

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_3 = VAR_6 * VAR_1;
  FUNC_1(&VAR_6, VAR_5, sizeof(VAR_6));
  if (FUNC_2(VAR_2, VAR_3, VAR_4) < 0)
   return (0);
  if (FUNC_0(VAR_4, VAR_5, sizeof(VAR_4)) != 0)
   return (0);
  VAR_2->sc_ramsize = VAR_3 + VAR_1;
 }

 return (0);
}
