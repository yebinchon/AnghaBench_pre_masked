
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct alc_softc {int alc_phyaddr; int alc_dev; TYPE_1__* alc_ident; } ;
struct TYPE_2__ {int deviceid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct alc_softc*,int ) ;
 int FUNC_1 (struct alc_softc*,int ,int) ;
 int FUNC_2 (struct alc_softc*,int ,int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct alc_softc *VAR_13)
{
 uint32_t VAR_14;

 switch (VAR_13->alc_ident->deviceid) {
 case 134:
 case 130:
 case 129:
 case 128:
 case 133:
 case 132:
 case 131:
  VAR_14 = FUNC_0(VAR_13, VAR_0);
  VAR_14 &= ~(VAR_4 | VAR_7 |
      VAR_3 | VAR_9);
  VAR_14 |= VAR_5 | VAR_6 |
      VAR_11;
  VAR_14 |= VAR_8 | VAR_10;
  FUNC_2(VAR_13, VAR_0, VAR_14);
  break;
 case 138:
 case 137:
 case 136:
 case 135:
  FUNC_4(VAR_13->alc_dev, VAR_13->alc_phyaddr,
      VAR_12, VAR_1 | VAR_2);
  break;
 default:

  FUNC_1(VAR_13, VAR_0, VAR_4 |
      VAR_11 | VAR_8 |
      VAR_10);
  FUNC_3(1000);
  break;
 }
}
