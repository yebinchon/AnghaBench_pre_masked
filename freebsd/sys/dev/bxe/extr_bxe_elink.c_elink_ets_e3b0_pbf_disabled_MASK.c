
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct elink_params {int port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (struct bxe_softc*,scalar_t__,int) ;
 int FUNC_1 (struct elink_params const*,scalar_t__ const) ;

__attribute__((used)) static void FUNC_2(const struct elink_params *VAR_15)
{
 struct bxe_softc *VAR_16 = VAR_15->sc;
 const uint8_t VAR_17 = VAR_15->port;
 const uint32_t VAR_18 = VAR_2;
 uint8_t VAR_19 = 0;
 uint32_t VAR_20 = 0;
 uint8_t VAR_21 = 0;





 if (VAR_17)

  FUNC_0(VAR_16, VAR_14 , 0x688);
 else

  FUNC_0(VAR_16, VAR_13 , 0x2C688);


 if (VAR_17)

  FUNC_0(VAR_16, VAR_6, 0x688);
 else

 FUNC_0(VAR_16, VAR_5, 0x2C688);

 FUNC_0(VAR_16, (VAR_17) ? VAR_12 :
     VAR_11 , 0x100);


 FUNC_0(VAR_16, (VAR_17) ? VAR_8 :
     VAR_7 , 0);

 FUNC_0(VAR_16, (VAR_17) ? VAR_10 :
     VAR_9 , 0);



 if (!VAR_17) {
  VAR_20 = VAR_3;
  VAR_21 = VAR_0;
 } else {
  VAR_20 = VAR_4;
  VAR_21 = VAR_1;
 }

 for (VAR_19 = 0; VAR_19 < VAR_21; VAR_19++)
  FUNC_0(VAR_16, VAR_20 + (0x4 * VAR_19), 0);

 FUNC_1(VAR_15, VAR_18);
}
