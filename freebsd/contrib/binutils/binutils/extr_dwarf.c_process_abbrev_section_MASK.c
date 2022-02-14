
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long,unsigned long,int) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int * VAR_0 ;
 unsigned long FUNC_2 (unsigned char*,unsigned int*,int ) ;

__attribute__((used)) static unsigned char *
FUNC_3 (unsigned char *VAR_1, unsigned char *VAR_2)
{
  if (VAR_0 != ((void*)0))
    return ((void*)0);

  while (VAR_1 < VAR_2)
    {
      unsigned int VAR_3;
      unsigned long VAR_4;
      unsigned long VAR_5;
      unsigned long VAR_6;
      int VAR_7;

      VAR_4 = FUNC_2 (VAR_1, & VAR_3, 0);
      VAR_1 += VAR_3;




      if (VAR_4 == 0)
 return VAR_1 == VAR_2 ? ((void*)0) : VAR_1;

      VAR_5 = FUNC_2 (VAR_1, & VAR_3, 0);
      VAR_1 += VAR_3;

      VAR_7 = *VAR_1++;

      FUNC_0 (VAR_4, VAR_5, VAR_7);

      do
 {
   unsigned long VAR_8;

   VAR_6 = FUNC_2 (VAR_1, & VAR_3, 0);
   VAR_1 += VAR_3;

   VAR_8 = FUNC_2 (VAR_1, & VAR_3, 0);
   VAR_1 += VAR_3;

   if (VAR_6 != 0)
     FUNC_1 (VAR_6, VAR_8);
 }
      while (VAR_6 != 0);
    }

  return ((void*)0);
}
