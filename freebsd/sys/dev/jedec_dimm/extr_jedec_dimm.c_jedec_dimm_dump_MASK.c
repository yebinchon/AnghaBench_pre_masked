
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct jedec_dimm_softc {int dev; int smbus; int spd_addr; } ;
typedef enum dram_type { ____Placeholder_dram_type } dram_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int *,int,int *,int ) ;
 int FUNC_2 (int ,int ,int,int *) ;
 int FUNC_3 (int ,int,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct jedec_dimm_softc *VAR_4, enum dram_type VAR_5)
{
 int VAR_6;
 int VAR_7;
 bool VAR_8;
 uint8_t VAR_9[512];

 VAR_8 = 0;

 for (VAR_6 = 0; VAR_6 < 256; VAR_6++) {
  VAR_7 = FUNC_2(VAR_4->smbus, VAR_4->spd_addr, VAR_6, &VAR_9[VAR_6]);
  if (VAR_7 != 0) {
   FUNC_0(VAR_4->dev,
       "unable to read page0:0x%02x: %d\n", VAR_6, VAR_7);
   goto out;
  }
 }




 if (VAR_5 == VAR_0) {
  VAR_8 = 1;
  VAR_7 = FUNC_3(VAR_4->smbus,
      (VAR_1 | VAR_3), 0, 0);
  if (VAR_7 != 0) {




   FUNC_0(VAR_4->dev, "unable to change page: %d\n",
       VAR_7);
  }



  for (VAR_6 = 0; VAR_6 < 256; VAR_6++) {
   VAR_7 = FUNC_2(VAR_4->smbus, VAR_4->spd_addr, VAR_6,
       &VAR_9[256 + VAR_6]);
   if (VAR_7 != 0) {
    FUNC_0(VAR_4->dev,
        "unable to read page1:0x%02x: %d\n", VAR_6, VAR_7);
    goto out;
   }
  }
 }


 FUNC_1(VAR_9, (VAR_8 ? 512 : 256), ((void*)0), 0);

out:
 if (VAR_8) {
  int VAR_10;

  VAR_10 = FUNC_3(VAR_4->smbus,
      (VAR_1 | VAR_2), 0, 0);
  if (VAR_10 != 0) {
   FUNC_0(VAR_4->dev, "unable to restore page: %d\n",
       VAR_10);
  }
 }
 return (VAR_7);
}
