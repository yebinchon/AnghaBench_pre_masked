
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct elink_params {int port; struct bxe_softc* sc; } ;
struct elink_ets_params {int dummy; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct bxe_softc*,int ,int const) ;

__attribute__((used)) static elink_status_t FUNC_1(const struct elink_params *VAR_9,
      const struct elink_ets_params *VAR_10,
      const uint8_t VAR_11,
      const uint8_t VAR_12)
{
 struct bxe_softc *VAR_13 = VAR_9->sc;
 const uint8_t VAR_14 = VAR_9->port;
 const uint8_t VAR_15 = 0x7 | (VAR_11 << 3);
 const uint8_t VAR_16 = VAR_11;
 const uint8_t VAR_17 = VAR_12 << 3;
 const uint8_t VAR_18 = VAR_12;

 FUNC_0(VAR_13, (VAR_14) ? VAR_3 :
        VAR_1, VAR_15);

 FUNC_0(VAR_13, (VAR_14) ? VAR_6 :
        VAR_5 , VAR_16);

 FUNC_0(VAR_13, (VAR_14) ? VAR_4 :
        VAR_2,
        VAR_17);

 FUNC_0(VAR_13, (VAR_14) ? VAR_8 :
        VAR_7,
        VAR_18);

 return VAR_0;
}
