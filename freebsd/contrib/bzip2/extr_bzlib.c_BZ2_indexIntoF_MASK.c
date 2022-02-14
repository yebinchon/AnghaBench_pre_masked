
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Int32 ;



__inline__ Int32 FUNC_0 ( Int32 VAR_0, Int32 *VAR_1 )
{
   Int32 VAR_2, VAR_3, VAR_4;
   VAR_2 = 0;
   VAR_3 = 256;
   do {
      VAR_4 = (VAR_2 + VAR_3) >> 1;
      if (VAR_0 >= VAR_1[VAR_4]) VAR_2 = VAR_4; else VAR_3 = VAR_4;
   }
   while (VAR_3 - VAR_2 != 1);
   return VAR_2;
}
