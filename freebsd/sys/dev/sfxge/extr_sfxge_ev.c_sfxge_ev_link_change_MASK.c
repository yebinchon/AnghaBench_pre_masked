
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_softc {int dummy; } ;
struct sfxge_evq {struct sfxge_softc* sc; } ;
typedef int efx_link_mode_t ;
typedef int boolean_t ;


 int FUNC_0 (struct sfxge_evq*) ;
 int FUNC_1 (struct sfxge_softc*,int ) ;

__attribute__((used)) static boolean_t
FUNC_2(void *VAR_0, efx_link_mode_t VAR_1)
{
 struct sfxge_evq *VAR_2;
 struct sfxge_softc *VAR_3;

 VAR_2 = (struct sfxge_evq *)VAR_0;
 FUNC_0(VAR_2);

 VAR_3 = VAR_2->sc;

 FUNC_1(VAR_3, VAR_1);

 return (0);
}
