
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;

int
FUNC_3(int VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = FUNC_2(VAR_1,
     FUNC_0(FUNC_1(VAR_2)));
 return ((VAR_3 >> (VAR_2 % VAR_0) * 2) & 0x03);
}
