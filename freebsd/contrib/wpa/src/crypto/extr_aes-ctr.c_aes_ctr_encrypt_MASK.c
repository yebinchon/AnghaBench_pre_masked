
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 int VAR_0 ;
 int FUNC_0 (void*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (scalar_t__ const*,size_t) ;
 int FUNC_3 (scalar_t__*,scalar_t__ const*,int) ;

int FUNC_4(const u8 *VAR_1, size_t VAR_2, const u8 *VAR_3,
      u8 *VAR_4, size_t VAR_5)
{
 void *VAR_6;
 size_t VAR_7, VAR_8, VAR_9 = VAR_5;
 int VAR_10;
 u8 *VAR_11 = VAR_4;
 u8 VAR_12[VAR_0], VAR_13[VAR_0];

 VAR_6 = FUNC_2(VAR_1, VAR_2);
 if (VAR_6 == ((void*)0))
  return -1;
 FUNC_3(VAR_12, VAR_3, VAR_0);

 while (VAR_9 > 0) {
  FUNC_0(VAR_6, VAR_12, VAR_13);

  VAR_8 = (VAR_9 < VAR_0) ? VAR_9 : VAR_0;
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
   VAR_11[VAR_7] ^= VAR_13[VAR_7];
  VAR_11 += VAR_8;
  VAR_9 -= VAR_8;

  for (VAR_10 = VAR_0 - 1; VAR_10 >= 0; VAR_10--) {
   VAR_12[VAR_10]++;
   if (VAR_12[VAR_10])
    break;
  }
 }
 FUNC_1(VAR_6);
 return 0;
}
