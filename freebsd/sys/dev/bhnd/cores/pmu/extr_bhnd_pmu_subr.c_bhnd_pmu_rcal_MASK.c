
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int chip_id; } ;
struct bhnd_pmu_softc {int chipc_dev; TYPE_1__ cid; } ;
struct TYPE_4__ {int chipstatus; } ;


 int FUNC_0 (int ) ;


 int FUNC_1 (struct bhnd_pmu_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct bhnd_pmu_softc*,int ,int) ;
 int FUNC_4 (struct bhnd_pmu_softc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct bhnd_pmu_softc*,int ,int) ;
 int VAR_4 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (int *) ;
 TYPE_2__* VAR_5 ;

void
FUNC_10(struct bhnd_pmu_softc *VAR_6)
{
 uint32_t VAR_7;
 uint32_t VAR_8;
 uint8_t VAR_9;
 bool VAR_10;


 VAR_10 = 0;

 switch (VAR_6->cid.chip_id) {
 case 129:
 case 128:

  FUNC_5(VAR_6, VAR_0, 1);


  FUNC_1(VAR_6, VAR_1, ~0x04);

  if (VAR_6->cid.chip_id == 129) {
   VAR_7 = FUNC_0(VAR_6->chipc_dev);
   if (FUNC_2(VAR_7, VAR_4))
    VAR_10 = 1;
  }


  FUNC_1(VAR_6, VAR_1, 0x04);


  for (int VAR_11 = 0; VAR_11 < (10 * 1000 * 1000); VAR_11++) {
   VAR_7 = FUNC_0(VAR_6->chipc_dev);

   if (VAR_7 & 0x08)
    break;

   FUNC_6(10);
  }
  FUNC_7((VAR_7 & 0x08) != 0, ("rcal completion timeout"));

  if (VAR_10) {
   VAR_9 = 0x6;
  } else {

   VAR_9 = (uint8_t) (VAR_7 >> 5) & 0x0f;
  }

  FUNC_8("RCal completed, status 0x%x, code 0x%x\n",
      FUNC_9(&VAR_5->chipstatus), VAR_9);


  FUNC_5(VAR_6, VAR_2, 0);
  VAR_8 = FUNC_4(VAR_6, VAR_3);
  VAR_8 &= ~((uint32_t) 0x07 << 29);
  VAR_8 |= (uint32_t) (VAR_9 & 0x07) << 29;
  FUNC_5(VAR_6, VAR_3, VAR_8);

  FUNC_5(VAR_6, VAR_2, 1);
  VAR_8 = FUNC_4(VAR_6, VAR_3);
  VAR_8 &= ~(uint32_t) 0x01;
  VAR_8 |= (uint32_t) ((VAR_9 >> 3) & 0x01);
  FUNC_5(VAR_6, VAR_3, VAR_8);


  FUNC_5(VAR_6, VAR_0, 0);
  VAR_8 = FUNC_4(VAR_6, VAR_1);
  VAR_8 &= ~((uint32_t) 0x03 << 30);
  VAR_8 |= (uint32_t) (VAR_9 & 0x03) << 30;
  FUNC_5(VAR_6, VAR_1, VAR_8);

  FUNC_5(VAR_6, VAR_0, 1);
  VAR_8 = FUNC_4(VAR_6, VAR_1);
  VAR_8 &= ~(uint32_t) 0x03;
  VAR_8 |= (uint32_t) ((VAR_9 >> 2) & 0x03);
  FUNC_5(VAR_6, VAR_1, VAR_8);


  FUNC_5(VAR_6, VAR_0, 0);
  FUNC_3(VAR_6, VAR_1, (0x01 << 29));


  FUNC_5(VAR_6, VAR_0, 1);
  FUNC_1(VAR_6, VAR_1, ~0x04);
  break;
 default:
  break;
 }
}
