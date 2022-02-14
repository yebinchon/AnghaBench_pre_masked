
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 () ;

int
FUNC_1(unsigned char *VAR_0)
{
 uint32_t VAR_1;

 VAR_1 = FUNC_0();

 VAR_0[0] = 'b';
 VAR_0[1] = 's';
 VAR_0[2] = 'd';
 VAR_0[3] = (VAR_1 >> 24) & 0xff;
 VAR_0[4] = (VAR_1 >> 16) & 0xff;
 VAR_0[5] = (VAR_1 >> 8) & 0xff;

 return (0);
}
