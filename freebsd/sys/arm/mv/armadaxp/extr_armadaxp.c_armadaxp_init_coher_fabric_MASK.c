
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

void
FUNC_3(void)
{
 uint32_t VAR_2, VAR_3, VAR_4;

 VAR_3 = FUNC_0();
 VAR_4 = (1 << VAR_3) - 1;
 VAR_2 = FUNC_1(VAR_1);
 VAR_2 |= (VAR_4 << 24);
 FUNC_2(VAR_1, VAR_2);

 VAR_2 = FUNC_1(VAR_0);
 VAR_2 |= (VAR_4 << 24);
 VAR_2 |= (1 << 15);
 FUNC_2(VAR_0, VAR_2);
}
