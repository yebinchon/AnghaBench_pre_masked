
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pl310_softc {int sc_io_coherent; } ;
typedef int platform_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pl310_softc*,int ) ;
 int FUNC_1 (struct pl310_softc*,int ,int) ;

void
FUNC_2(platform_t VAR_7, struct pl310_softc *VAR_8)
{
 uint32_t VAR_9;





 VAR_9 = FUNC_0(VAR_8, VAR_0);
 VAR_9 |= VAR_2;
 FUNC_1(VAR_8, VAR_0, VAR_9);

 FUNC_1(VAR_8, VAR_1, VAR_4 |
     VAR_3 | VAR_6 |
     VAR_5);


 VAR_8->sc_io_coherent = 1;
}
