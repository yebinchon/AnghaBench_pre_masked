
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

void
FUNC_5(void)
{
 int VAR_2 = FUNC_1(VAR_2);
 uint32_t VAR_3;

 VAR_3 = (VAR_2 == 0) ? FUNC_2() : FUNC_3();
 FUNC_0(VAR_3 == 1, ("CPU %d: unexpected IPIs: %#x", VAR_2, VAR_3));
 FUNC_4(~(VAR_0 << VAR_2));
}
