
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct intelspi_softc {scalar_t__ sc_written; scalar_t__ sc_len; scalar_t__ sc_read; } ;


 int FUNC_0 (struct intelspi_softc*) ;
 int FUNC_1 (struct intelspi_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(struct intelspi_softc *VAR_4)
{
 int VAR_5;
 uint32_t VAR_6;

 FUNC_0(VAR_4);

 if (VAR_4->sc_written != VAR_4->sc_len ||
     VAR_4->sc_read != VAR_4->sc_len)
  return (0);

 VAR_6 = FUNC_1(VAR_4, VAR_0);
 VAR_5 = ((VAR_6 & VAR_2) == 0) &&
  (VAR_6 & VAR_3);

 if (VAR_5 && !(VAR_6 & VAR_1))
  return (1);

 return (0);
}
