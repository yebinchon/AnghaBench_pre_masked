
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 char VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 unsigned short FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int FUNC_2(uint8_t *VAR_4, uint8_t *VAR_5,
      int VAR_6, uint8_t *VAR_7,
      int VAR_8)
{
 int VAR_9, VAR_10 = 0, VAR_11 = 0;
 int VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;
 unsigned short VAR_15;
 uint8_t VAR_16;
 const uint8_t VAR_17[] = "0123456789ABCDEF";

 if (VAR_5[0] == '.' &&
     (VAR_6 == 1 || (VAR_6 == 2 && VAR_5[1] == '.'))) {
  VAR_11 = 1;
  VAR_10 = VAR_6;
  FUNC_1(VAR_4, VAR_5, VAR_6);
 } else {
  for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
   VAR_16 = VAR_5[VAR_9];
   if (VAR_16 == '/' || VAR_16 == 0) {
    VAR_11 = 1;
    VAR_16 = VAR_3;
    while (VAR_9 + 1 < VAR_6 &&
      (VAR_5[VAR_9 + 1] == '/' ||
       VAR_5[VAR_9 + 1] == 0))
     VAR_9++;
   }
   if (VAR_16 == VAR_1 &&
     (VAR_6 - VAR_9 - 1) <= VAR_2) {
    if (VAR_6 == VAR_9 + 1)
     VAR_14 = 0;
    else {
     VAR_14 = 1;
     VAR_12 = VAR_9;
     VAR_13 = VAR_10;
    }
   }
   if (VAR_10 < 256)
    VAR_4[VAR_10++] = VAR_16;
   else
    VAR_11 = 1;
  }
 }
 if (VAR_11) {
  uint8_t VAR_18[VAR_2];
  int VAR_19 = 0;

  if (VAR_14) {
   int VAR_20;
   for (VAR_9 = 0;
        VAR_9 < VAR_2 && VAR_12 + VAR_9 + 1 < VAR_6;
        VAR_9++) {
    VAR_16 = VAR_5[VAR_12 + VAR_9 + 1];

    if (VAR_16 == '/' || VAR_16 == 0) {
     VAR_11 = 1;
     VAR_16 = VAR_3;
     while (VAR_12 + VAR_9 + 2 < VAR_6 &&
           (VAR_9 + 1 < VAR_2 &&
      (VAR_5[VAR_12 + VAR_9 + 2] == '/' ||
       VAR_5[VAR_12 + VAR_9 + 2] == 0)))
      VAR_9++;
    }
    VAR_18[VAR_19++] = VAR_16;
   }
   VAR_20 = 250 - VAR_19;
   if (VAR_10 > VAR_20)
    VAR_10 = VAR_20;
   else
    VAR_10 = VAR_13;
  } else if (VAR_10 > 250)
   VAR_10 = 250;
  VAR_4[VAR_10++] = VAR_0;
  VAR_15 = FUNC_0(0, VAR_7, VAR_8);
  VAR_4[VAR_10++] = VAR_17[(VAR_15 & 0xf000) >> 12];
  VAR_4[VAR_10++] = VAR_17[(VAR_15 & 0x0f00) >> 8];
  VAR_4[VAR_10++] = VAR_17[(VAR_15 & 0x00f0) >> 4];
  VAR_4[VAR_10++] = VAR_17[(VAR_15 & 0x000f)];

  if (VAR_14) {
   VAR_4[VAR_10++] = VAR_1;
   for (VAR_9 = 0; VAR_9 < VAR_19; VAR_9++)
    VAR_4[VAR_10++] = VAR_18[VAR_9];
  }
 }

 return VAR_10;
}
