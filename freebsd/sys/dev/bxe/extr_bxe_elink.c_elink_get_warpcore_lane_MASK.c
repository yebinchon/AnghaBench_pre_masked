
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct elink_phy {int dummy; } ;
struct elink_params {int port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bxe_softc*,int ) ;
 int FUNC_1 (struct bxe_softc*) ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;

__attribute__((used)) static uint8_t FUNC_3(struct elink_phy *VAR_6,
      struct elink_params *VAR_7)
{
 uint8_t VAR_8 = 0;
 struct bxe_softc *VAR_9 = VAR_7->sc;
 uint32_t VAR_10, VAR_11;
 uint8_t VAR_12, VAR_13;

 VAR_12 = FUNC_1(VAR_9);
 VAR_13 = VAR_7->port;

 if (FUNC_2(VAR_9)) {
  uint32_t VAR_14, VAR_15;


  VAR_11 = FUNC_0(VAR_9, VAR_1);
  if (VAR_11 & 0x1)
   VAR_10 = (VAR_11 & 0x2);
  else
   VAR_10 = FUNC_0(VAR_9, VAR_0);

  if (VAR_10)
   VAR_12 = VAR_12 ^ 1;


  VAR_15 = FUNC_0(VAR_9, VAR_3);
  if (VAR_15 & 0x1)
   VAR_14 = (VAR_15 & 0x2);
  else
   VAR_14 = FUNC_0(VAR_9, VAR_2);

  if (VAR_14)
   VAR_13 = VAR_13 ^ 1;

  VAR_8 = (VAR_13<<1) + VAR_12;
 } else {


  VAR_11 =
   FUNC_0(VAR_9, VAR_5);
  if (VAR_11 & 0x1) {
   VAR_10 = (VAR_11 & 0x2);
  } else {
   VAR_10 =
    FUNC_0(VAR_9, VAR_4);
  }
  if (VAR_10)
   VAR_12 = VAR_12 ^ 1;

  VAR_8 = VAR_12 << 1 ;
 }
 return VAR_8;
}
