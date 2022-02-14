
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;


 int VAR_0 ;
 int FUNC_0 (void*,unsigned int*,unsigned int*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (unsigned int const*,size_t) ;
 int FUNC_3 (unsigned int*,unsigned int const*,int) ;
 int FUNC_4 (unsigned int*,int,int) ;

int FUNC_5(const u8 *VAR_1, size_t VAR_2, int VAR_3, const u8 *VAR_4, u8 *VAR_5)
{
 u8 *VAR_6, *VAR_7, VAR_8[VAR_0];
 int VAR_9, VAR_10;
 void *VAR_11;
 unsigned int VAR_12;

 VAR_6 = VAR_5;
 VAR_7 = VAR_5 + 8;


 FUNC_4(VAR_6, 0xa6, 8);
 FUNC_3(VAR_7, VAR_4, 8 * VAR_3);

 VAR_11 = FUNC_2(VAR_1, VAR_2);
 if (VAR_11 == ((void*)0))
  return -1;
 for (VAR_10 = 0; VAR_10 <= 5; VAR_10++) {
  VAR_7 = VAR_5 + 8;
  for (VAR_9 = 1; VAR_9 <= VAR_3; VAR_9++) {
   FUNC_3(VAR_8, VAR_6, 8);
   FUNC_3(VAR_8 + 8, VAR_7, 8);
   FUNC_0(VAR_11, VAR_8, VAR_8);
   FUNC_3(VAR_6, VAR_8, 8);
   VAR_12 = VAR_3 * VAR_10 + VAR_9;
   VAR_6[7] ^= VAR_12;
   VAR_6[6] ^= VAR_12 >> 8;
   VAR_6[5] ^= VAR_12 >> 16;
   VAR_6[4] ^= VAR_12 >> 24;
   FUNC_3(VAR_7, VAR_8 + 8, 8);
   VAR_7 += 8;
  }
 }
 FUNC_1(VAR_11);







 return 0;
}
