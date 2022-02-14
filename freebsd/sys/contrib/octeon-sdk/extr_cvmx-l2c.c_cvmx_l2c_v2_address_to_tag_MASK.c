
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

uint32_t FUNC_0(uint64_t VAR_4)
{




    if ( (VAR_4 > ( (256 * 1024 * 1024) -1)) && (VAR_4 < (512 * 1024 * 1024)) ) return (uint32_t) (-1);
    if (VAR_4 > (512 * 1024 * 1024)) VAR_4 = VAR_4 - (256 * 1024 * 1024) ;
    VAR_4 = VAR_4 & 0x7FFFFFFFFULL;
    return (uint32_t )(VAR_4 >> VAR_0);
}
