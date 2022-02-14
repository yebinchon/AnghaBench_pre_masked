
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct elink_params {struct bxe_softc* sc; scalar_t__ port; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bxe_softc*,int) ;
 int FUNC_2 (struct bxe_softc*,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_3(struct elink_params *VAR_8, uint8_t VAR_9)
{
 uint8_t VAR_10 = VAR_8->port;
 struct bxe_softc *VAR_11 = VAR_8->sc;
 uint32_t VAR_12, VAR_13 = (VAR_10) ? VAR_1 : VAR_0;
 uint32_t VAR_14;

 if (FUNC_1(VAR_11, VAR_3) &
     VAR_2) {




  VAR_12 = FUNC_1(VAR_11, VAR_13 + VAR_7);
  FUNC_2(VAR_11, VAR_13 + VAR_7,
         (VAR_12 & ~(1<<1)));
  FUNC_2(VAR_11, VAR_13 + VAR_7,
         (VAR_12 | (1<<1)));
  FUNC_0(VAR_11, "Disable XMAC on port %x\n", VAR_10);
  VAR_14 = FUNC_1(VAR_11, VAR_13 + VAR_6);
  if (VAR_9)
   VAR_14 |= (VAR_5 | VAR_4);
  else
   VAR_14 &= ~(VAR_5 | VAR_4);
  FUNC_2(VAR_11, VAR_13 + VAR_6, VAR_14);
 }
}
