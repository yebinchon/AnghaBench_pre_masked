
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct tpm_softc {int sc_bahm; int sc_batm; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int,int ) ;

int
FUNC_2(struct tpm_softc *VAR_3, void *VAR_4, int VAR_5)
{
 u_int8_t *VAR_6;
 int VAR_7;

 for (VAR_6 = VAR_4, VAR_7 = VAR_5; VAR_7--; FUNC_0(VAR_1)) {
  if (!VAR_7 && VAR_5 != VAR_0) {
   FUNC_1(VAR_3->sc_batm, VAR_3->sc_bahm, 1,
       VAR_2);
   FUNC_0(VAR_1);
  }
  FUNC_1(VAR_3->sc_batm, VAR_3->sc_bahm, 0, *VAR_6++);
 }

 return 0;
}
