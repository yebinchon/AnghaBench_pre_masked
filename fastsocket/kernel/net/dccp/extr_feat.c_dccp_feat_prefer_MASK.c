
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;



__attribute__((used)) static u8 FUNC_0(u8 VAR_0, u8 *VAR_1, u8 VAR_2)
{
 u8 VAR_3, VAR_4 = 0;

 if (VAR_1 != ((void*)0)) {
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
   if (VAR_1[VAR_3] == VAR_0) {
    VAR_1[VAR_3] = VAR_1[0];
    VAR_4++;
   }
  if (VAR_4)
   VAR_1[0] = VAR_0;
 }
 return VAR_4;
}
