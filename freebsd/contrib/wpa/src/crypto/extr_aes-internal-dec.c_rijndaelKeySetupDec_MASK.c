
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int rk ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int*,int const*,int) ;

__attribute__((used)) static int FUNC_6(u32 VAR_0[], const u8 VAR_1[], int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 u32 VAR_6;


 VAR_3 = FUNC_5(VAR_0, VAR_1, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 for (VAR_4 = 0, VAR_5 = 4*VAR_3; VAR_4 < VAR_5; VAR_4 += 4, VAR_5 -= 4) {
  VAR_6 = VAR_0[VAR_4 ]; VAR_0[VAR_4 ] = VAR_0[VAR_5 ]; VAR_0[VAR_5 ] = VAR_6;
  VAR_6 = VAR_0[VAR_4 + 1]; VAR_0[VAR_4 + 1] = VAR_0[VAR_5 + 1]; VAR_0[VAR_5 + 1] = VAR_6;
  VAR_6 = VAR_0[VAR_4 + 2]; VAR_0[VAR_4 + 2] = VAR_0[VAR_5 + 2]; VAR_0[VAR_5 + 2] = VAR_6;
  VAR_6 = VAR_0[VAR_4 + 3]; VAR_0[VAR_4 + 3] = VAR_0[VAR_5 + 3]; VAR_0[VAR_5 + 3] = VAR_6;
 }


 for (VAR_4 = 1; VAR_4 < VAR_3; VAR_4++) {
  VAR_0 += 4;
  for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
   VAR_0[VAR_5] = FUNC_0(FUNC_4((VAR_0[VAR_5] >> 24) )) ^
    FUNC_1(FUNC_4((VAR_0[VAR_5] >> 16) & 0xff)) ^
    FUNC_2(FUNC_4((VAR_0[VAR_5] >> 8) & 0xff)) ^
    FUNC_3(FUNC_4((VAR_0[VAR_5] ) & 0xff));
  }
 }

 return VAR_3;
}
