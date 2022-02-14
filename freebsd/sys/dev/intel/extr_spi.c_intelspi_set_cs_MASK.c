
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct intelspi_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct intelspi_softc*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct intelspi_softc*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_2(struct intelspi_softc *VAR_6, int VAR_7)
{
 uint32_t VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_1);
 VAR_8 &= ~(VAR_4);
 VAR_8 |= VAR_5;

 if (VAR_7 == VAR_0)
  VAR_8 |= VAR_2;
 else
  VAR_8 |= VAR_3;

 FUNC_1(VAR_6, VAR_1, VAR_8);
}
