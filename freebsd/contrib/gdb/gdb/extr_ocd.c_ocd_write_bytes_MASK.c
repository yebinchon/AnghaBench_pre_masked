
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,int) ;
 unsigned char* FUNC_4 (int ,int*,int ) ;
 int FUNC_5 (char*,int) ;
 int VAR_3 ;
 char VAR_4 ;

int
FUNC_6 (CORE_ADDR VAR_5, char *VAR_6, int VAR_7)
{
  char VAR_8[256 + 10];
  unsigned char *VAR_9;
  int VAR_10;

  VAR_10 = VAR_7;

  VAR_8[0] = VAR_4;
  VAR_8[5] = 1;
  VAR_8[6] = 0;

  while (VAR_7 > 0)
    {
      int VAR_11;
      int VAR_12;
      int VAR_13, VAR_14;

      VAR_11 = FUNC_2 (VAR_7, 256 - 8);

      VAR_8[1] = VAR_5 >> 24;
      VAR_8[2] = VAR_5 >> 16;
      VAR_8[3] = VAR_5 >> 8;
      VAR_8[4] = VAR_5;

      VAR_8[7] = VAR_11;

      FUNC_1 (&VAR_8[8], VAR_6, VAR_11);
      FUNC_5 (VAR_8, 8 + VAR_11);
      VAR_9 = FUNC_4 (VAR_1, &VAR_12, VAR_3);
      if (VAR_12 < 3)
 FUNC_0 ("Truncated response packet from OCD device");

      VAR_13 = VAR_9[1];
      VAR_14 = VAR_9[2];

      if (VAR_14 == 0x11)
 {
   CORE_ADDR VAR_15;

   VAR_15 = VAR_9[3] << 24;
   VAR_15 |= VAR_9[4] << 16;
   VAR_15 |= VAR_9[5] << 8;
   VAR_15 |= VAR_9[6];
   VAR_11 = VAR_15 - VAR_5;

   VAR_7 -= VAR_11;

   VAR_2 = VAR_0;

   break;
 }
      else if (VAR_14 != 0)
 FUNC_3 ("ocd_write_bytes:", VAR_14);

      VAR_7 -= VAR_11;
      VAR_5 += VAR_11;
      VAR_6 += VAR_11;
    }

  return VAR_10 - VAR_7;
}
