
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (void*,int*,int*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int const*,size_t) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*,int ,int) ;

int FUNC_6(const u8 *VAR_1, size_t VAR_2, size_t VAR_3,
       const u8 *VAR_4[], const size_t *VAR_5, u8 *VAR_6)
{
 void *VAR_7;
 u8 VAR_8[VAR_0], VAR_9[VAR_0];
 const u8 *VAR_10, *VAR_11;
 size_t VAR_12, VAR_13, VAR_14, VAR_15;

 if (FUNC_0())
  return -1;

 VAR_7 = FUNC_3(VAR_1, VAR_2);
 if (VAR_7 == ((void*)0))
  return -1;
 FUNC_5(VAR_8, 0, VAR_0);

 VAR_15 = 0;
 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++)
  VAR_15 += VAR_5[VAR_13];
 VAR_14 = VAR_15;

 VAR_13 = 0;
 VAR_10 = VAR_4[0];
 VAR_11 = VAR_10 + VAR_5[0];

 while (VAR_14 >= VAR_0) {
  for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
   VAR_8[VAR_12] ^= *VAR_10++;
   if (VAR_10 >= VAR_11) {




    if (VAR_12 + 1 == VAR_0 &&
        VAR_14 == VAR_0)
     break;
    VAR_13++;
    VAR_10 = VAR_4[VAR_13];
    VAR_11 = VAR_10 + VAR_5[VAR_13];
   }
  }
  if (VAR_14 > VAR_0)
   FUNC_1(VAR_7, VAR_8, VAR_8);
  VAR_14 -= VAR_0;
 }

 FUNC_5(VAR_9, 0, VAR_0);
 FUNC_1(VAR_7, VAR_9, VAR_9);
 FUNC_4(VAR_9);

 if (VAR_14 || VAR_15 == 0) {
  for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {
   VAR_8[VAR_12] ^= *VAR_10++;
   if (VAR_10 >= VAR_11) {




    if (VAR_12 + 1 == VAR_14)
     break;
    VAR_13++;
    VAR_10 = VAR_4[VAR_13];
    VAR_11 = VAR_10 + VAR_5[VAR_13];
   }
  }
  VAR_8[VAR_14] ^= 0x80;
  FUNC_4(VAR_9);
 }

 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
  VAR_9[VAR_12] ^= VAR_8[VAR_12];
 FUNC_1(VAR_7, VAR_9, VAR_6);
 FUNC_2(VAR_7);
 return 0;
}
