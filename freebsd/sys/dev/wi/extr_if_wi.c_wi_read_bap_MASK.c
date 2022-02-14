
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct wi_softc {int sc_bap_id; int sc_bap_off; } ;


 int FUNC_0 (struct wi_softc*,int ,int *,int) ;
 int VAR_0 ;
 int FUNC_1 (struct wi_softc*,int,int) ;

__attribute__((used)) static int
FUNC_2(struct wi_softc *VAR_1, int VAR_2, int VAR_3, void *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;

 if (VAR_5 == 0)
  return 0;
 if (VAR_2 != VAR_1->sc_bap_id || VAR_3 != VAR_1->sc_bap_off) {
  if ((VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3)) != 0)
   return VAR_6;
 }
 VAR_7 = (VAR_5 + 1) / 2;
 FUNC_0(VAR_1, VAR_0, (u_int16_t *)VAR_4, VAR_7);
 VAR_1->sc_bap_off += VAR_7 * 2;
 return 0;
}
