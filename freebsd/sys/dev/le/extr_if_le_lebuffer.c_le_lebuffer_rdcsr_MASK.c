
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct le_lebuffer_softc {int sc_rres; } ;
struct lance_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static uint16_t
FUNC_3(struct lance_softc *VAR_3, uint16_t VAR_4)
{
 struct le_lebuffer_softc *VAR_5 = (struct le_lebuffer_softc *)VAR_3;

 FUNC_2(VAR_5->sc_rres, VAR_1, VAR_4);
 FUNC_0(VAR_5->sc_rres, VAR_1, 2, VAR_0);
 return (FUNC_1(VAR_5->sc_rres, VAR_2));
}
