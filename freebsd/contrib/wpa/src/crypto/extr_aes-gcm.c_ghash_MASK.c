
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
typedef int tmp ;


 int FUNC_0 (int const*,int const*,int const*) ;
 int FUNC_1 (int const*,int const*,int) ;
 int FUNC_2 (int const*,int ,int) ;
 int FUNC_3 (int const*,int const*) ;

__attribute__((used)) static void FUNC_4(const u8 *VAR_0, const u8 *VAR_1, size_t VAR_2, u8 *VAR_3)
{
 size_t VAR_4, VAR_5;
 const u8 *VAR_6 = VAR_1;
 u8 VAR_7[16];

 VAR_4 = VAR_2 / 16;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {

  FUNC_3(VAR_3, VAR_6);
  VAR_6 += 16;




  FUNC_0(VAR_3, VAR_0, VAR_7);
  FUNC_1(VAR_3, VAR_7, 16);
 }

 if (VAR_1 + VAR_2 > VAR_6) {

  size_t VAR_8 = VAR_1 + VAR_2 - VAR_6;
  FUNC_1(VAR_7, VAR_6, VAR_8);
  FUNC_2(VAR_7 + VAR_8, 0, sizeof(VAR_7) - VAR_8);


  FUNC_3(VAR_3, VAR_7);




  FUNC_0(VAR_3, VAR_0, VAR_7);
  FUNC_1(VAR_3, VAR_7, 16);
 }


}
