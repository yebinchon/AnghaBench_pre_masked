
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(
     int VAR_1,
     int VAR_2,
     int VAR_3,
     int VAR_4,
     int VAR_5,
     unsigned char *VAR_6,
     int *VAR_7,
     int VAR_8
)
{
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20,
                 VAR_21, VAR_22;
 int VAR_23;

 VAR_9 = 5250 * 1000;


 VAR_16 = VAR_1 + VAR_2;
 VAR_10 = (2 * (VAR_16 / 1000) + (VAR_9 / 1000)) / (2 * VAR_9 / 1000);
 VAR_15 = VAR_10 * VAR_9;
 VAR_17 = VAR_15 - VAR_1 - VAR_3;


 for (VAR_23 = 1; VAR_23 < 3; VAR_23++) {
  if (!FUNC_0(VAR_15, VAR_17, VAR_4, VAR_5)) {
   break;
  }
  if (VAR_15 < VAR_16) {
   VAR_10 += VAR_23;
  } else {
   VAR_10 -= VAR_23;
  }

  VAR_15 = VAR_10 * VAR_9;
  VAR_17 = VAR_15 - VAR_1 - VAR_3;
 }


 VAR_13 = VAR_15 / 1000 / 1000;

 if (VAR_0) {
  if (VAR_13 > 1890) {
   VAR_14 = 0;
  } else if (VAR_13 > 1720) {
   VAR_14 = 1;
  } else if (VAR_13 > 1530) {
   VAR_14 = 2;
  } else if (VAR_13 > 1370) {
   VAR_14 = 3;
  } else {
   VAR_14 = 4;
  }
 } else {
  if (VAR_13 > 1790) {
   VAR_14 = 0;
  } else if (VAR_13 > 1617) {
   VAR_14 = 1;
  } else if (VAR_13 > 1449) {
   VAR_14 = 2;
  } else if (VAR_13 > 1291) {
   VAR_14 = 3;
  } else {
   VAR_14 = 4;
  }
 }

 *VAR_7 = VAR_14;


 VAR_11 = VAR_10 / 8;
 VAR_12 = VAR_10 - (VAR_11 * 8);
 VAR_18 = VAR_17 / VAR_9;
 VAR_19 = VAR_18 / 8;
 VAR_20 = VAR_18 - (VAR_19 * 8);

 VAR_21 = ((VAR_17 / 1000) % (VAR_9 / 1000)) * 3780 / (VAR_9 / 1000);
 VAR_22 = (VAR_20 + 8 * VAR_19) * VAR_9 + VAR_21 * (VAR_9 / 1000) / 3780 * 1000;

 if (VAR_12 < 0 || VAR_12 > 7 || VAR_11 < 17 || VAR_11 > 48 || VAR_20 < 0 ||
     VAR_20 > 7 || VAR_19 < 17 || VAR_19 > 30) {
  FUNC_1("MT2032: parameter out of range\n");
  return -1;
 }

 VAR_6[0] = VAR_11 - 1;
 VAR_6[1] = VAR_12 | (VAR_14 << 4);
 VAR_6[2] = 0x86;
 VAR_6[3] = 0x0f;
 VAR_6[4] = 0x1f;
 VAR_6[5] = (VAR_19 - 1) | (VAR_20 << 5);
 if (VAR_1 < 400 * 1000 * 1000) {
  VAR_6[6] = 0xe4;
 } else {
  VAR_6[6] = 0xf4;
 }

 VAR_6[7] = 8 + VAR_8;
 VAR_6[8] = 0xc3;
 VAR_6[9] = 0x4e;
 VAR_6[10] = 0xec;
 VAR_6[11] = (VAR_21 & 0xff);
 VAR_6[12] = (VAR_21 >> 8) | 0x80;

 return 0;
}
