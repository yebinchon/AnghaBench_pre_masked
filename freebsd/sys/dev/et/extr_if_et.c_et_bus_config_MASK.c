
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct et_softc {int sc_flags; int dev; scalar_t__ sc_expcap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;


 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int ,char*,scalar_t__,...) ;
 void* FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,scalar_t__,int,int) ;

__attribute__((used)) static int
FUNC_4(struct et_softc *VAR_15)
{
 uint32_t VAR_16, VAR_17;
 uint16_t VAR_18, VAR_19;





 FUNC_1(VAR_15->dev, VAR_4, 1);
 VAR_16 = FUNC_1(VAR_15->dev, VAR_4, 1);
 if (VAR_16 & VAR_2) {
  FUNC_0(VAR_15->dev, "EEPROM status error 0x%02x\n", VAR_16);
  return (VAR_0);
 }



 if ((VAR_15->sc_flags & VAR_1) == 0)
  return (0);





 VAR_16 = FUNC_1(VAR_15->dev,
     VAR_15->sc_expcap + VAR_14, 4);
 VAR_17 = VAR_16 & VAR_11;

 switch (VAR_17) {
 case 129:
  VAR_18 = VAR_7;
  VAR_19 = VAR_9;
  break;

 case 128:
  VAR_18 = VAR_8;
  VAR_19 = VAR_10;
  break;

 default:
  VAR_18 = FUNC_1(VAR_15->dev, VAR_3, 2);
  VAR_19 = FUNC_1(VAR_15->dev,
      VAR_6, 2);
  FUNC_0(VAR_15->dev, "ack latency %u, replay timer %u\n",
         VAR_18, VAR_19);
  break;
 }
 if (VAR_18 != 0) {
  FUNC_3(VAR_15->dev, VAR_3, VAR_18, 2);
  FUNC_3(VAR_15->dev, VAR_6, VAR_19,
      2);
 }




 VAR_16 = FUNC_1(VAR_15->dev, VAR_5, 4);
 VAR_16 &= ~(VAR_12 | VAR_13);

 VAR_16 |= 0x00005000;

 VAR_16 |= 0x00028000;
 FUNC_3(VAR_15->dev, VAR_5, VAR_16, 4);




 FUNC_2(VAR_15->dev, 2048);

 return (0);
}
