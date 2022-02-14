
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int uint32_t ;
struct glxsb_softc {int sc_rnghz; int sc_rngco; int sc_sr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,void (*) (void*),struct glxsb_softc*) ;
 int FUNC_2 (int*,int,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_4)
{
 struct glxsb_softc *VAR_5 = VAR_4;
 uint32_t VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_5->sc_sr, VAR_2);
 if (VAR_6 & VAR_3) {
  VAR_7 = FUNC_0(VAR_5->sc_sr, VAR_1);


  FUNC_2(&VAR_7, sizeof(VAR_7), VAR_0);
 }

 FUNC_1(&VAR_5->sc_rngco, VAR_5->sc_rnghz, FUNC_3, VAR_5);
}
