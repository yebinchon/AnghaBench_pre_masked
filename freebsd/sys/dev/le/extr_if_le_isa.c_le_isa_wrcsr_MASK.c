
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct le_isa_softc {int sc_rdp; int sc_rres; int sc_rap; } ;
struct lance_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct lance_softc *VAR_1, uint16_t VAR_2, uint16_t VAR_3)
{
 struct le_isa_softc *VAR_4 = (struct le_isa_softc *)VAR_1;

 FUNC_1(VAR_4->sc_rres, VAR_4->sc_rap, VAR_2);
 FUNC_0(VAR_4->sc_rres, VAR_4->sc_rap, 2, VAR_0);
 FUNC_1(VAR_4->sc_rres, VAR_4->sc_rdp, VAR_3);
}
