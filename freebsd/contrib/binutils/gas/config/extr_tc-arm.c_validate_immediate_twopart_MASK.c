
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;

__attribute__((used)) static unsigned int
FUNC_2 (unsigned int VAR_1,
       unsigned int * VAR_2)
{
  unsigned int VAR_3;
  unsigned int VAR_4;

  for (VAR_4 = 0; VAR_4 < 32; VAR_4 += 2)
    if (((VAR_3 = FUNC_1 (VAR_1, VAR_4)) & 0xff) != 0)
      {
 if (VAR_3 & 0xff00)
   {
     if (VAR_3 & ~ 0xffff)
       continue;
     * VAR_2 = (VAR_3 >> 8) | ((VAR_4 + 24) << 7);
   }
 else if (VAR_3 & 0xff0000)
   {
     if (VAR_3 & 0xff000000)
       continue;
     * VAR_2 = (VAR_3 >> 16) | ((VAR_4 + 16) << 7);
   }
 else
   {
     FUNC_0 (VAR_3 & 0xff000000);
     * VAR_2 = (VAR_3 >> 24) | ((VAR_4 + 8) << 7);
   }

 return (VAR_3 & 0xff) | (VAR_4 << 7);
      }

  return VAR_0;
}
