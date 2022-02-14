
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long* VAR_1 ;

void
FUNC_0(void)
{
    static int VAR_2 = 0;
    unsigned long VAR_3, VAR_4;
    unsigned int VAR_5, VAR_6;

    if(VAR_2) return;
    VAR_4 = VAR_0;
    for (VAR_5 = 0; VAR_5 < 256; VAR_5++) {
 VAR_3 = VAR_5;
 for (VAR_6 = 8; VAR_6 > 0; VAR_6--) {
     if (VAR_3 & 1) {
  VAR_3 = (VAR_3 >> 1) ^ VAR_4;
     } else {
  VAR_3 >>= 1;
     }
 }
 VAR_1[VAR_5] = VAR_3;
    }
    VAR_2 = 1;
}
