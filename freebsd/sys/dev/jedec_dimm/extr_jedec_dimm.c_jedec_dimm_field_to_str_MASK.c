
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct jedec_dimm_softc {int dev; int smbus; int spd_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,int ,int,int*) ;
 int FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_4(struct jedec_dimm_softc *VAR_5, char *VAR_6, size_t VAR_7,
    uint16_t VAR_8, uint16_t VAR_9, bool VAR_10)
{
 uint8_t VAR_11;
 int VAR_12;
 int VAR_13;
 bool VAR_14;
 if (VAR_8 < VAR_4) {
  VAR_14 = 0;
 } else if (VAR_8 < (2 * VAR_4)) {
  VAR_14 = 1;
  VAR_13 = FUNC_2(VAR_5->smbus,
      (VAR_1 | VAR_3), 0, 0);
  if (VAR_13 != 0) {
   FUNC_0(VAR_5->dev,
       "unable to change page for offset 0x%04x: %d\n",
       VAR_8, VAR_13);
  }

  VAR_8 -= VAR_4;
 } else {
  VAR_14 = 0;
  VAR_13 = VAR_0;
  FUNC_0(VAR_5->dev, "invalid offset 0x%04x\n", VAR_8);
  goto out;
 }




 if (VAR_8 >= VAR_4) {
  VAR_13 = VAR_0;
  FUNC_0(VAR_5->dev, "invalid offset 0x%04x\n", VAR_8);
  goto out;
 }
 if ((VAR_8 + VAR_9) >= VAR_4) {
  VAR_13 = VAR_0;
  FUNC_0(VAR_5->dev,
      "(offset + len) would cross page (0x%04x + 0x%04x)\n",
      VAR_8, VAR_9);
  goto out;
 }
 if (VAR_10) {
  if (VAR_7 < (VAR_9 + 1)) {
   VAR_13 = VAR_0;
   FUNC_0(VAR_5->dev,
       "destination too short (%u < %u)\n",
       (uint16_t) VAR_7, (VAR_9 + 1));
   goto out;
  }
 } else {
  if (VAR_7 < ((2 * VAR_9) + 1)) {
   VAR_13 = VAR_0;
   FUNC_0(VAR_5->dev,
       "destination too short (%u < %u)\n",
       (uint16_t) VAR_7, ((2 * VAR_9) + 1));
   goto out;
  }
 }


 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  VAR_13 = FUNC_1(VAR_5->smbus, VAR_5->spd_addr, (VAR_8 + VAR_12), &VAR_11);
  if (VAR_13 != 0) {
   FUNC_0(VAR_5->dev,
       "failed to read byte at 0x%02x: %d\n",
       (VAR_8 + VAR_12), VAR_13);
   goto out;
  }
  if (VAR_10) {

   VAR_6[VAR_12] = VAR_11;
  } else {



   (void) FUNC_3(&VAR_6[(2 * VAR_12)], 3, "%02x", VAR_11);
  }
 }


 if (VAR_10) {
  for (VAR_12 = VAR_7; VAR_12 > 0; VAR_12--) {
   if (VAR_6[VAR_12] == ' ') {
    VAR_6[VAR_12] = 0;
   } else if (VAR_6[VAR_12] == 0) {
    continue;
   } else {
    break;
   }
  }
 }

out:
 if (VAR_14) {
  int VAR_15;

  VAR_15 = FUNC_2(VAR_5->smbus,
      (VAR_1 | VAR_2), 0, 0);
  if (VAR_15 != 0) {
   FUNC_0(VAR_5->dev,
       "unable to restore page for offset 0x%04x: %d\n",
       VAR_8, VAR_15);
  }
 }

 return (VAR_13);
}
