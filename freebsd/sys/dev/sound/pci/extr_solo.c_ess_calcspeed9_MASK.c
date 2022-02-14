
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static u_int8_t
FUNC_1(int *VAR_0)
{
 int VAR_1, VAR_2, VAR_3, VAR_4;
 u_int8_t VAR_5, VAR_6;



 VAR_1 = *VAR_0;
 VAR_5 = 128 - (793800 / VAR_1);
 VAR_2 = 793800 / (128 - VAR_5);

 VAR_6 = 128 - (768000 / VAR_1);
 VAR_3 = 768000 / (128 - VAR_6);
 VAR_6 |= 0x80;

 VAR_4 = (FUNC_0(VAR_1 - VAR_2) < FUNC_0(VAR_1 - VAR_3))? 1 : 0;

 *VAR_0 = VAR_4? VAR_2 : VAR_3;
 return VAR_4? VAR_5 : VAR_6;
}
