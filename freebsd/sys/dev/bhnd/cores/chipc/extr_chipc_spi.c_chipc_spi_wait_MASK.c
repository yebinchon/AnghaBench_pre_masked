
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chipc_spi_softc {int sc_dev; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct chipc_spi_softc*,int ) ;

__attribute__((used)) static int
FUNC_2(struct chipc_spi_softc *VAR_4)
{
 int VAR_5;

 for (VAR_5 = VAR_3; VAR_5 > 0; VAR_5--)
  if (!(FUNC_1(VAR_4, VAR_0) & VAR_1))
   break;

 if (VAR_5 > 0)
  return (0);

 FUNC_0(VAR_4->sc_dev, "busy: CTL=0x%x DATA=0x%x",
     FUNC_1(VAR_4, VAR_0),
     FUNC_1(VAR_4, VAR_2));
 return (-1);
}
