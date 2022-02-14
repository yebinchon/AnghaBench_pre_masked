
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int FUNC_0 (int*,int ,int,int const*) ;
 int FUNC_1 (int*,int*,int const*,int,int*) ;
 int FUNC_2 (int const) ;

__attribute__((used)) static uint32_t
FUNC_3(const uint16_t *VAR_1, uint16_t *VAR_2)
{
 uint16_t *VAR_3;
 uint16_t VAR_4;

 VAR_3 = VAR_2;
 VAR_2 += 1 + ((VAR_1[0] + 15) >> 4);
 VAR_4 = FUNC_2(VAR_1[1]);
 FUNC_0(VAR_3, VAR_0, sizeof VAR_0, VAR_1);
 return FUNC_1(VAR_3, VAR_3, VAR_1, VAR_4, VAR_2);
}
