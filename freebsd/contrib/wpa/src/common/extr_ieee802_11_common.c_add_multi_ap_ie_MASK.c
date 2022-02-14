
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;

size_t FUNC_1(u8 *VAR_4, size_t VAR_5, u8 VAR_6)
{
 u8 *VAR_7 = VAR_4;

 if (VAR_5 < 9)
  return 0;

 *VAR_7++ = VAR_3;
 *VAR_7++ = 7;
 FUNC_0(VAR_7, VAR_2);
 VAR_7 += 3;
 *VAR_7++ = VAR_0;
 *VAR_7++ = VAR_1;
 *VAR_7++ = 1;
 *VAR_7++ = VAR_6;

 return VAR_7 - VAR_4;
}
