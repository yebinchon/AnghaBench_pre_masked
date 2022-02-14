
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (unsigned char const) ;
 int VAR_0 ;

size_t
FUNC_1(uint16_t *VAR_1, size_t VAR_2,
       const char *VAR_3, size_t VAR_4,
       int VAR_5, int *VAR_6)
{
    const unsigned char *VAR_7;
    size_t VAR_8, VAR_9;
    int VAR_10;
    uint16_t VAR_11;



    VAR_10 = 0;
    VAR_7 = (const unsigned char *)VAR_3;
    VAR_8 = VAR_9 = 0;
    while (VAR_8<VAR_4) {
 if (VAR_7[VAR_8] < 0x80)
     VAR_11 = VAR_7[VAR_8++];
 else if ((VAR_5 & VAR_0)
   && (VAR_8 >= VAR_4 || !(((VAR_7[VAR_8+1])&0xc0) == 0x80))
   && VAR_7[VAR_8]>=0xa0) {

     VAR_11 = VAR_7[VAR_8++];
 }
 else if (VAR_7[VAR_8] < 0xc0 || VAR_7[VAR_8] >= 0xf5) {


     VAR_10++;
     VAR_8++;
     continue;
 }
 else if (VAR_7[VAR_8] < 0xe0) {
     if (VAR_8 >= VAR_4 || !(((VAR_7[VAR_8+1])&0xc0) == 0x80)) {
  VAR_8++;
  VAR_10++;
  continue;
     }
     VAR_11 = ((VAR_7[VAR_8] & 0x3f) << 6) | (VAR_7[VAR_8+1] & 0x3f);
     VAR_8 += 2;
     if (VAR_11 < 0x80) {

  VAR_10++;
  continue;
     }
 }
 else if (VAR_7[VAR_8] < 0xf0) {
     if (VAR_8 >= VAR_4-2
  || !(((VAR_7[VAR_8+1])&0xc0) == 0x80) || !(((VAR_7[VAR_8+2])&0xc0) == 0x80)) {
  VAR_8++;
  VAR_10++;
  continue;
     }
     VAR_11 = ((VAR_7[VAR_8] & 0x0f) << 12) | ((VAR_7[VAR_8+1] & 0x3f) << 6)
  | (VAR_7[VAR_8+2] & 0x3f);
     VAR_8 += 3;
     if (VAR_11 < 0x800 || (VAR_11 & 0xdf00) == 0xd800 ) {

  VAR_10++;
  continue;
     }
 }
 else {
     uint32_t VAR_12;


     if (VAR_8 >= VAR_4-3 || !(((VAR_7[VAR_8+1])&0xc0) == 0x80)
  || !(((VAR_7[VAR_8+2])&0xc0) == 0x80) || !(((VAR_7[VAR_8+3])&0xc0) == 0x80)) {
  VAR_8++;
  VAR_10++;

  continue;
     }
     VAR_12 = ((VAR_7[VAR_8] & 0x03) << 18) | ((VAR_7[VAR_8+1] & 0x3f) << 12)
   | ((VAR_7[VAR_8+2] & 0x3f) << 6) | (VAR_7[VAR_8+3] & 0x3f);
     VAR_8 += 4;
     if (VAR_12 < 0x10000) {

  VAR_10++;
  continue;
     }
     if (VAR_1 && VAR_9 < VAR_2)
  VAR_1[VAR_9] = (0xd800 | ((VAR_12-0x10000)>>10));
     VAR_9++;
     VAR_11 = 0xdc00 | ((VAR_12-0x10000) & 0x3ffff);
 }

 if (VAR_1 && VAR_9 < VAR_2)
     VAR_1[VAR_9] = VAR_11;
 VAR_9++;
    }

    if (VAR_6)
 *VAR_6 = VAR_10;

    return VAR_9;


}
