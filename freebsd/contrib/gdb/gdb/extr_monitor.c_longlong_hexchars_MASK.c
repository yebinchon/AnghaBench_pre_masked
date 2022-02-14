
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void** VAR_0 ;
 int FUNC_0 (unsigned char*) ;

__attribute__((used)) static char *
FUNC_1 (unsigned long long VAR_1,
     char *VAR_2)
{
  if (VAR_1 == 0)
    {
      *VAR_2++ = '0';
      return VAR_2;
    }
  else
    {
      static unsigned char VAR_3[8];
      unsigned char *VAR_4, *VAR_5;
      unsigned char VAR_6, VAR_7;
      int VAR_8 = 1;
      VAR_4 = VAR_3;
      VAR_5 = VAR_4 + 8;
      {
 unsigned long long *VAR_9;
 VAR_9 = (unsigned long long *) VAR_4;
 *VAR_9 = VAR_1;
      }
      FUNC_0 (VAR_3);
      while (VAR_4 < VAR_5)
 {
   VAR_6 = *VAR_4++;
   if (VAR_8)
     {
       if (VAR_6 == 0)
  continue;
       else
  VAR_8 = 0;
     }
   VAR_7 = VAR_6 >> 4;
   *VAR_2++ = VAR_0[VAR_7];
   VAR_7 = VAR_6 & 0x0f;
   *VAR_2++ = VAR_0[VAR_7];
 }
      return VAR_2;
    }
}
