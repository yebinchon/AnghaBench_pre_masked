
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_uint64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static int FUNC_4(void)
{
    apr_uint64_t VAR_1;
    VAR_1 = FUNC_1();
    FUNC_3((unsigned int)(((VAR_1 >> 32) ^ VAR_1) & 0xffffffff));

    return FUNC_2() & 0x0FFFF;
}
