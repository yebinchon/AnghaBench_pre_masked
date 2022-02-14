
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;



__attribute__((used)) static u_int8_t
FUNC_0(int *VAR_0)
{
 int VAR_1 = *VAR_0;
 u_int32_t VAR_2;

 if (VAR_1 > 22000) {
  VAR_2 = (795500 + VAR_1 / 2) / VAR_1;
  VAR_1 = (795500 + VAR_2 / 2) / VAR_2;
  VAR_2 = (256 - VAR_2) | 0x80;
 } else {
  VAR_2 = (397700 + VAR_1 / 2) / VAR_1;
  VAR_1 = (397700 + VAR_2 / 2) / VAR_2;
  VAR_2 = 128 - VAR_2;
 }
 *VAR_0 = VAR_1;
 return VAR_2 & 0x000000ff;
}
