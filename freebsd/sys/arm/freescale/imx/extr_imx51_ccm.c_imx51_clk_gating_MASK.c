
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int) ;

void
FUNC_4(int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 uint32_t VAR_6;

 VAR_5 = FUNC_1(VAR_2);
 VAR_4 = VAR_2 % VAR_0;
 VAR_6 = FUNC_2(VAR_1, FUNC_0(VAR_5));
 VAR_6 &= ~(0x03 << VAR_4 * 2);
 VAR_6 |= (VAR_3 << VAR_4 * 2);
 FUNC_3(VAR_1, FUNC_0(VAR_5), VAR_6);
}
