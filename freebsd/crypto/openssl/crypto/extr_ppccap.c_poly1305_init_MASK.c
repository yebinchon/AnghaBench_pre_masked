
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (void*,unsigned char const*) ;
 int FUNC_1 (void*,unsigned char const*) ;

int FUNC_2(void *VAR_6, const unsigned char VAR_7[16], void *VAR_8[2])
{
    if (sizeof(size_t) == 4 && (VAR_0 & VAR_1)) {
        FUNC_0(VAR_6, VAR_7);
        VAR_8[0] = (void*)(uintptr_t)VAR_3;
        VAR_8[1] = (void*)(uintptr_t)VAR_5;
    } else {
        FUNC_1(VAR_6, VAR_7);
        VAR_8[0] = (void*)(uintptr_t)VAR_2;
        VAR_8[1] = (void*)(uintptr_t)VAR_4;
    }
    return 1;
}
