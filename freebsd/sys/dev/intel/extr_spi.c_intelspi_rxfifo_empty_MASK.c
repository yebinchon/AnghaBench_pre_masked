
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct intelspi_softc {int dummy; } ;


 int FUNC_0 (struct intelspi_softc*) ;
 int FUNC_1 (struct intelspi_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct intelspi_softc *VAR_2)
{
 uint32_t VAR_3;

 FUNC_0(VAR_2);

 VAR_3 = FUNC_1(VAR_2, VAR_0);
 if (VAR_3 & VAR_1)
  return (0);
 else
  return (1);
}
