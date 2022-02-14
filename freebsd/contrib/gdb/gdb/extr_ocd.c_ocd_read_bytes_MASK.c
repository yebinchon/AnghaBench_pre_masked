
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,unsigned char*,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,int) ;
 unsigned char* FUNC_4 (char,int*,int ) ;
 int FUNC_5 (char*,int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_6 (CORE_ADDR VAR_4, char *VAR_5, int VAR_6)
{
  char VAR_7[256 + 10];
  unsigned char *VAR_8;
  int VAR_9;

  VAR_9 = VAR_6;

  VAR_7[0] = VAR_1;
  VAR_7[5] = 1;

  while (VAR_6 > 0)
    {
      int VAR_10;
      int VAR_11;
      int VAR_12, VAR_13;

      VAR_10 = FUNC_2 (VAR_6, 256 - 7);

      VAR_7[1] = VAR_4 >> 24;
      VAR_7[2] = VAR_4 >> 16;
      VAR_7[3] = VAR_4 >> 8;
      VAR_7[4] = VAR_4;

      VAR_7[6] = VAR_10;

      FUNC_5 (VAR_7, 7);
      VAR_8 = FUNC_4 (VAR_1, &VAR_11, VAR_3);
      if (VAR_11 < 4)
 FUNC_0 ("Truncated response packet from OCD device");

      VAR_12 = VAR_8[1];
      VAR_13 = VAR_8[2];

      if (VAR_13 == 0x11)
 {
   CORE_ADDR VAR_14;

   VAR_14 = VAR_8[3] << 24;
   VAR_14 |= VAR_8[4] << 16;
   VAR_14 |= VAR_8[5] << 8;
   VAR_14 |= VAR_8[6];
   VAR_10 = VAR_14 - VAR_4;

   VAR_6 -= VAR_10;

   VAR_2 = VAR_0;

   break;
 }
      else if (VAR_13 != 0)
 FUNC_3 ("ocd_read_bytes:", VAR_13);

      FUNC_1 (VAR_5, &VAR_8[4], VAR_10);

      VAR_6 -= VAR_10;
      VAR_4 += VAR_10;
      VAR_5 += VAR_10;
    }

  return VAR_9 - VAR_6;
}
