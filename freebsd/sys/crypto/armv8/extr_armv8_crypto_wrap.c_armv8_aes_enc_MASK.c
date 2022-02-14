
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8x16_t ;


 int FUNC_0 (int ,int const) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int const) ;

__attribute__((used)) static uint8x16_t
FUNC_3(int VAR_0, const uint8x16_t *VAR_1, const uint8x16_t VAR_2)
{
 uint8x16_t VAR_3;
 int VAR_4;

 VAR_3 = VAR_2;
 for (VAR_4 = 0; VAR_4 < VAR_0 - 1; VAR_4 += 2) {
  VAR_3 = FUNC_0(VAR_3, VAR_1[VAR_4]);
  VAR_3 = FUNC_1(VAR_3);
  VAR_3 = FUNC_0(VAR_3, VAR_1[VAR_4 + 1]);
  VAR_3 = FUNC_1(VAR_3);
 }

 VAR_3 = FUNC_0(VAR_3, VAR_1[VAR_0 - 1]);
 VAR_3 = FUNC_1(VAR_3);
 VAR_3 = FUNC_0(VAR_3, VAR_1[VAR_0]);
 VAR_3 = FUNC_2(VAR_3, VAR_1[VAR_0 + 1]);

 return (VAR_3);
}
