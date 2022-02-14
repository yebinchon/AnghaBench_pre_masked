
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct elink_vars {int line_speed; scalar_t__ duplex; } ;
struct elink_params {int port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bxe_softc*,char*) ;
 int FUNC_1 (struct bxe_softc*,char*,int) ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (struct bxe_softc*,scalar_t__,int) ;
 int FUNC_3 (struct bxe_softc*,scalar_t__,int) ;
 int FUNC_4 (struct elink_params*,struct elink_vars*,int ,int) ;

__attribute__((used)) static elink_status_t FUNC_5(struct elink_params *VAR_11,
         struct elink_vars *VAR_12)
{
 struct bxe_softc *VAR_13 = VAR_11->sc;
 uint8_t VAR_14 = VAR_11->port;
 uint16_t VAR_15 = 0;

 FUNC_0(VAR_13, "setting link speed & duplex\n");
 FUNC_2(VAR_13, VAR_10 + VAR_14*0x400 +
         VAR_9,
         (VAR_4 |
   VAR_8 |
   VAR_5));
 switch (VAR_12->line_speed) {
 case 131:
  VAR_15 |= VAR_8;
  break;

 case 130:
  VAR_15 |= VAR_7;
  break;

 case 129:
  VAR_15 |= VAR_6;
  break;

 case 128:
  VAR_15 |= (VAR_4 | VAR_6);
  break;

 default:

  FUNC_1(VAR_13, "Invalid line_speed 0x%x\n",
      VAR_12->line_speed);
  return VAR_2;
 }

 if (VAR_12->duplex == VAR_0)
  VAR_15 |= VAR_5;
 FUNC_3(VAR_13,
        VAR_10 + VAR_14*0x400 + VAR_9,
        VAR_15);

 FUNC_4(VAR_11, VAR_12, VAR_1, VAR_12->line_speed);
 return VAR_3;
}
