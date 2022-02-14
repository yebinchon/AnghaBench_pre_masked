
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 size_t VAR_0 ;
 int FUNC_0 (void*,int *,int *) ;
 int FUNC_1 (int *,int const*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, const u8 *VAR_2, size_t VAR_3, u8 *VAR_4)
{
 size_t VAR_5 = VAR_3 % VAR_0;
 size_t VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3 / VAR_0; VAR_6++) {

  FUNC_1(VAR_4, VAR_2);
  VAR_2 += VAR_0;
  FUNC_0(VAR_1, VAR_4, VAR_4);
 }
 if (VAR_5) {

  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
   VAR_4[VAR_6] ^= *VAR_2++;
  FUNC_0(VAR_1, VAR_4, VAR_4);
 }
}
