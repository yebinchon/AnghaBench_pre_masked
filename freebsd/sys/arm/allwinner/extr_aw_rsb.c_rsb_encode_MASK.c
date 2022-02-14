
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int u_int ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;

__attribute__((used)) static uint32_t
FUNC_1(const uint8_t *VAR_1, u_int VAR_2, u_int VAR_3)
{
 uint32_t VAR_4;
 u_int VAR_5;

 VAR_4 = 0;
 for (VAR_5 = VAR_3; VAR_5 < FUNC_0(VAR_2, 4 + VAR_3); VAR_5++)
  VAR_4 |= ((uint32_t)VAR_1[VAR_5] << ((VAR_5 - VAR_3) * VAR_0));

 return VAR_4;
}
