
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct cfi_softc {int sc_width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cfi_softc*,int) ;
 int FUNC_1 (struct cfi_softc*) ;
 int FUNC_2 (struct cfi_softc*,int,int ) ;

uint8_t
FUNC_3(struct cfi_softc *VAR_2, u_int VAR_3)
{
 uint8_t VAR_4;

 FUNC_2(VAR_2, VAR_0 * VAR_2->sc_width, VAR_1);
 VAR_4 = FUNC_0(VAR_2, VAR_3 * VAR_2->sc_width);
 FUNC_1(VAR_2);
 return (VAR_4);
}
