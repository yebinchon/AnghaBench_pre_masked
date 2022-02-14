
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 size_t VAR_0 ;
 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (void*,int *,int *) ;
 int FUNC_2 (int *,int const*) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, size_t VAR_2, const u8 *VAR_3, size_t VAR_4, u8 *VAR_5,
    u8 *VAR_6)
{
 size_t VAR_7 = VAR_4 % VAR_0;
 size_t VAR_8;


 for (VAR_8 = 1; VAR_8 <= VAR_4 / VAR_0; VAR_8++) {
  FUNC_0(&VAR_6[VAR_0 - 2], VAR_8);

  FUNC_1(VAR_1, VAR_6, VAR_5);
  FUNC_2(VAR_5, VAR_3);
  VAR_5 += VAR_0;
  VAR_3 += VAR_0;
 }
 if (VAR_7) {
  FUNC_0(&VAR_6[VAR_0 - 2], VAR_8);
  FUNC_1(VAR_1, VAR_6, VAR_5);

  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
   *VAR_5++ ^= *VAR_3++;
 }
}
