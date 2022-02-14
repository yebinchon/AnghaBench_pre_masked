
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct ath_softc {int ** sc_bslot; } ;


 size_t VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct ath_softc *VAR_1)
{
 u_int VAR_2, VAR_3;

 VAR_3 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_1->sc_bslot[VAR_2] == ((void*)0)) {
   if (VAR_1->sc_bslot[(VAR_2+1)%VAR_0] == ((void*)0) &&
       VAR_1->sc_bslot[(VAR_2-1)%VAR_0] == ((void*)0))
    return VAR_2;
   VAR_3 = VAR_2;

  }
 return VAR_3;
}
