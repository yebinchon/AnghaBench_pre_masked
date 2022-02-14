
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int const*,size_t,int const*,int ,int,int,int,unsigned char* const,size_t) ;
 int VAR_6 ;
 int FUNC_1 (unsigned char* const,int ,unsigned long long) ;
 scalar_t__ FUNC_2 (unsigned long long,size_t,int*,int*,int*) ;

int
FUNC_3(unsigned char *const VAR_7,
                                   unsigned long long VAR_8,
                                   const char *const VAR_9,
                                   unsigned long long VAR_10,
                                   const unsigned char *const VAR_11,
                                   unsigned long long VAR_12, size_t VAR_13)
{
    uint32_t VAR_14;
    uint32_t VAR_15;
    uint32_t VAR_16;

    FUNC_1(VAR_7, 0, VAR_8);
    if (VAR_10 > VAR_4 ||
        VAR_8 > VAR_2) {
        VAR_6 = VAR_0;
        return -1;
    }
    if (VAR_8 < VAR_3 ||
        FUNC_2(VAR_12, VAR_13, &VAR_14, &VAR_15, &VAR_16) != 0) {
        VAR_6 = VAR_1;
        return -1;
    }
    return FUNC_0(
        (const uint8_t *) VAR_9, (size_t) VAR_10, (const uint8_t *) VAR_11,
        VAR_5, (uint64_t)(1) << VAR_14,
        VAR_16, VAR_15, VAR_7, (size_t) VAR_8);
}
