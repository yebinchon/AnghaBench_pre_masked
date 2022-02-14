
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct saf1761_otg_td {int ep_index; } ;
struct saf1761_otg_softc {int sc_dv_addr; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct saf1761_otg_softc*,int ) ;
 int FUNC_2 (struct saf1761_otg_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct saf1761_otg_softc*,int) ;

__attribute__((used)) static uint8_t
FUNC_4(struct saf1761_otg_softc *VAR_6, struct saf1761_otg_td *VAR_7)
{
 uint32_t VAR_8;

 if (VAR_7->ep_index == 0) {

  FUNC_2(VAR_6, VAR_2, VAR_5);

  VAR_8 = FUNC_1(VAR_6, VAR_0);


  if ((VAR_8 & VAR_1) != 0) {
   FUNC_0(5, "Faking complete\n");
   return (0);
  }
 }

 FUNC_2(VAR_6, VAR_2,
     (VAR_7->ep_index << VAR_4) |
     VAR_3);

 VAR_8 = FUNC_1(VAR_6, VAR_0);


 if ((VAR_8 & VAR_1) != 0)
  return (1);

 if (VAR_6->sc_dv_addr != 0xFF) {

  FUNC_3(VAR_6, VAR_6->sc_dv_addr);
 }
 return (0);
}
