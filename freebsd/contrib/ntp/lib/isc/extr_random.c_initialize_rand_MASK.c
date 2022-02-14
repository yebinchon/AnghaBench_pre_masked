
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 () ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(void)
{

 unsigned int VAR_0 = FUNC_0();





 VAR_0 = ((VAR_0 << 16) & 0xffff0000) | ((VAR_0 >> 16) & 0xffff);

 FUNC_1(FUNC_2(((void*)0)) ^ VAR_0);

}
