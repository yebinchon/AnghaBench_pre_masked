
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cx_chan_t ;


 int FUNC_0 (int *,unsigned char*,int,int ) ;

void FUNC_1 (cx_chan_t *VAR_0, int VAR_1)
{
 static unsigned char VAR_2 [128];
 unsigned char *VAR_3;

 VAR_3 = VAR_2;
 *VAR_3++ = 0;
 *VAR_3++ = 0x81;

 if (VAR_1 > 10000)
  VAR_1 = 10000;
 if (VAR_1 < 10)
  VAR_1 = 10;
 while (VAR_1 > 0) {
  int VAR_4 = 250;
  if (VAR_4 > VAR_1)
   VAR_4 = VAR_1;
  VAR_1 -= VAR_4;
  *VAR_3++ = 0;
  *VAR_3++ = 0x82;
  *VAR_3++ = VAR_4;
 }
 *VAR_3++ = 0;
 *VAR_3++ = 0x83;

 FUNC_0 (VAR_0, VAR_2, VAR_3-VAR_2, 0);
}
