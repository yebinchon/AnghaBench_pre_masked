
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1(void)
{
 VAR_1 = VAR_2 / (FUNC_0() * 32);
 if (VAR_1 < 16)
  VAR_1 = 16;
 if (VAR_1 * VAR_0 > 4096 * 1024)
  VAR_1 = (4096 * 1024) / VAR_0;
}
