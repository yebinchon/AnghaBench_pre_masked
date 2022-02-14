
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef size_t uint16_t ;


 int FUNC_0 (size_t const) ;
 int FUNC_1 (int) ;

size_t
FUNC_2(char *VAR_0, size_t VAR_1,
       const uint16_t *VAR_2, size_t VAR_3,
       int VAR_4, int *VAR_5)
{
    uint16_t VAR_6, VAR_7;
    int VAR_8;




    VAR_8 = 0;
    VAR_7 = 0;
    for (VAR_6=0; VAR_6<VAR_3; VAR_6++) {
 if (VAR_2[VAR_6] < 0x80) {
     (VAR_7 > VAR_1-(1) ? VAR_0=((void*)0) : ((void*)0));
     (VAR_0 ? VAR_0[VAR_7] = (VAR_2[VAR_6]) : 0, VAR_7++);
 }
 else if (VAR_2[VAR_6] < 0x800) {
     (VAR_7 > VAR_1-(2) ? VAR_0=((void*)0) : ((void*)0));
     (VAR_0 ? VAR_0[VAR_7] = (0xc0 | (VAR_2[VAR_6]>>6)) : 0, VAR_7++);
     (VAR_0 ? VAR_0[VAR_7] = (0x80 | (VAR_2[VAR_6] & 0x3f)) : 0, VAR_7++);
 }
 else if ((VAR_2[VAR_6] & 0xdc00) == 0xd800) {
     uint32_t VAR_9;

     if (VAR_6 == VAR_3 - 1 || (VAR_2[VAR_6] & 0xdc00) != 0xdc00) {

  VAR_8++;
  continue;
     }
     VAR_6++;
     (VAR_7 > VAR_1-(4) ? VAR_0=((void*)0) : ((void*)0));
     VAR_9 = (((VAR_2[VAR_6]&0x3ff) << 10) | (VAR_2[VAR_6+1]&0x3ff)) + 0x10000;
     (VAR_0 ? VAR_0[VAR_7] = (0xf0 | (VAR_9>>18)) : 0, VAR_7++);
     (VAR_0 ? VAR_0[VAR_7] = (0x80 | ((VAR_9>>12) & 0x3f)) : 0, VAR_7++);
     (VAR_0 ? VAR_0[VAR_7] = (0x80 | ((VAR_9>>6) & 0x3f)) : 0, VAR_7++);
     (VAR_0 ? VAR_0[VAR_7] = (0x80 | (VAR_9 & 0x3f)) : 0, VAR_7++);
 }
 else if ((VAR_2[VAR_6] & 0xdc00) == 0xdc00) {

     VAR_8++;
 }
 else {
     (VAR_7 > VAR_1-(3) ? VAR_0=((void*)0) : ((void*)0));
     (VAR_0 ? VAR_0[VAR_7] = (0xe0 | VAR_2[VAR_6]>>12) : 0, VAR_7++);
     (VAR_0 ? VAR_0[VAR_7] = (0x80 | ((VAR_2[VAR_6]>>6) & 0x3f)) : 0, VAR_7++);
     (VAR_0 ? VAR_0[VAR_7] = (0x80 | (VAR_2[VAR_6] & 0x3f)) : 0, VAR_7++);
 }
    }

    if (VAR_5)
 *VAR_5 = VAR_8;

    return VAR_7;



}
