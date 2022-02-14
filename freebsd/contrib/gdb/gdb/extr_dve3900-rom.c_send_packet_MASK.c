
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hdr ;


 unsigned char VAR_0 ;
 int FUNC_0 (unsigned char*,int) ;

__attribute__((used)) static void
FUNC_1 (char VAR_1, unsigned char *VAR_2, int VAR_3, int VAR_4)
{
  unsigned char VAR_5[4];
  int VAR_6 = VAR_3;
  int VAR_7, VAR_8;


  if (VAR_1 == 'p')
    VAR_6++;


  if (VAR_6 > 0)
    VAR_6 += 2;


  VAR_5[0] = VAR_0;
  VAR_5[1] = VAR_1;
  VAR_5[2] = VAR_6 & 0xff;
  VAR_5[3] = (VAR_6 >> 8) & 0xff;
  FUNC_0 (VAR_5, sizeof (VAR_5));

  if (VAR_6)
    {

      FUNC_0 (VAR_2, VAR_3);


      if (VAR_1 == 'p')
 {
   VAR_5[0] = VAR_4;
   FUNC_0 (VAR_5, 1);
 }


      VAR_7 = 0;
      for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
 {
   int VAR_9 = (VAR_2[VAR_8] & 0xff);
   if (VAR_8 & 1)
     VAR_7 += VAR_9;
   else
     VAR_7 += VAR_9 << 8;
 }
      if (VAR_1 == 'p')
 {
   if (VAR_3 & 1)
     VAR_7 += (VAR_4 & 0xff);
   else
     VAR_7 += (VAR_4 & 0xff) << 8;
 }
      VAR_7 = (VAR_7 & 0xffff) + ((VAR_7 >> 16) & 0xffff);
      VAR_7 += (VAR_7 >> 16) & 1;
      VAR_7 = ~VAR_7;

      VAR_5[0] = (VAR_7 >> 8) & 0xff;
      VAR_5[1] = VAR_7 & 0xff;
      FUNC_0 (VAR_5, 2);
    }
}
