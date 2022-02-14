
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mos_softc {int sc_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mos_softc*,int ) ;
 int FUNC_1 (struct mos_softc*,int ,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void
FUNC_3(struct mos_softc *VAR_7)
{
 uint8_t VAR_8;

 VAR_8 = FUNC_0(VAR_7, VAR_0);
 VAR_8 &= ~(VAR_3 | VAR_1 | VAR_4 |
     VAR_2);

 FUNC_1(VAR_7, VAR_0, VAR_8);


 FUNC_1(VAR_7, VAR_5, 0);


 FUNC_2(&VAR_7->sc_mtx, VAR_6 / 128);
 return;
}
