
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,unsigned char,unsigned char) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (char*,char,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static long
FUNC_7 (char *VAR_3,
     long VAR_4)
{
  unsigned char VAR_5;
  long VAR_6;
  int VAR_7;

  VAR_5 = 0;
  VAR_6 = 0;

  while (1)
    {

      VAR_7 = FUNC_6 (VAR_2);
      switch (VAR_7)
 {
 case 128:
   if (VAR_1)
     FUNC_1 ("Timeout in mid-packet, retrying\n", VAR_0);
   return -1;
 case '$':
   if (VAR_1)
     FUNC_1 ("Saw new packet start in middle of old one\n",
       VAR_0);
   return -1;
 case '#':
   {
     unsigned char VAR_8;
     int VAR_9 = 0;
     int VAR_10 = 0;

     VAR_3[VAR_6] = '\0';

     VAR_9 = FUNC_6 (VAR_2);
     if (VAR_9 >= 0)
       VAR_10 = FUNC_6 (VAR_2);

     if (VAR_9 == 128 || VAR_10 == 128)
       {
  if (VAR_1)
    FUNC_1 ("Timeout in checksum, retrying\n", VAR_0);
  return -1;
       }
     else if (VAR_9 < 0 || VAR_10 < 0)
       {
  if (VAR_1)
    FUNC_1 ("Communication error in checksum\n", VAR_0);
  return -1;
       }

     VAR_8 = (FUNC_2 (VAR_9) << 4) | FUNC_2 (VAR_10);
     if (VAR_5 == VAR_8)
              return VAR_6;

     if (VAR_1)
       {
  FUNC_0 (VAR_0,
         "Bad checksum, sentsum=0x%x, csum=0x%x, buf=",
      VAR_8, VAR_5);
  FUNC_1 (VAR_3, VAR_0);
  FUNC_1 ("\n", VAR_0);
       }


     return -1;
   }
 case '*':
          {
     int VAR_11;
      VAR_5 += VAR_7;

     VAR_7 = FUNC_6 (VAR_2);
     VAR_5 += VAR_7;
     VAR_11 = VAR_7 - ' ' + 3;



     if (VAR_11 > 0 && VAR_11 <= 255
  && VAR_6 > 0
                && VAR_6 + VAR_11 - 1 < VAR_4 - 1)
       {
  FUNC_3 (&VAR_3[VAR_6], VAR_3[VAR_6 - 1], VAR_11);
  VAR_6 += VAR_11;
  continue;
       }

     VAR_3[VAR_6] = '\0';
     FUNC_4 ("Repeat count %d too large for buffer: ", VAR_11);
     FUNC_5 (VAR_3);
     FUNC_5 ("\n");
     return -1;
   }
 default:
   if (VAR_6 < VAR_4 - 1)
     {
       VAR_3[VAR_6++] = VAR_7;
       VAR_5 += VAR_7;
       continue;
     }

   VAR_3[VAR_6] = '\0';
   FUNC_5 ("Remote packet too long: ");
   FUNC_5 (VAR_3);
   FUNC_5 ("\n");

   return -1;
 }
    }
}
