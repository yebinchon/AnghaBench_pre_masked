
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;

__attribute__((used)) static u_int32_t
FUNC_1(u_int32_t VAR_2)
{
 u_int32_t VAR_3;

 VAR_3 = 0;
 VAR_3 |= (VAR_2 & VAR_1)? 0x2 : 0;
 VAR_3 |= (FUNC_0(VAR_2) > 1)? 0x4 : 0;
 VAR_3 |= (VAR_2 & VAR_0)? 0x8 : 0;

 return VAR_3;
}
