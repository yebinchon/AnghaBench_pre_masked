
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (void*,int*,int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int const*,int) ;
 int FUNC_3 (int*,int const*) ;

__attribute__((used)) static void FUNC_4(void *VAR_1, const u8 *VAR_2, const u8 *VAR_3, size_t VAR_4, u8 *VAR_5)
{
 size_t VAR_6, VAR_7, VAR_8;
 u8 VAR_9[VAR_0], VAR_10[VAR_0];
 const u8 *VAR_11 = VAR_3;
 u8 *VAR_12 = VAR_5;

 if (VAR_4 == 0)
  return;

 VAR_7 = VAR_4 / 16;

 FUNC_2(VAR_9, VAR_2, VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  FUNC_0(VAR_1, VAR_9, VAR_12);
  FUNC_3(VAR_12, VAR_11);
  VAR_11 += VAR_0;
  VAR_12 += VAR_0;
  FUNC_1(VAR_9);
 }

 VAR_8 = VAR_3 + VAR_4 - VAR_11;
 if (VAR_8) {

  FUNC_0(VAR_1, VAR_9, VAR_10);
  for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++)
   *VAR_12++ = *VAR_11++ ^ VAR_10[VAR_6];
 }
}
