
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char const* const,size_t,unsigned char const* const,size_t,unsigned char* const,size_t) ;

 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 unsigned long long VAR_7 ;
 unsigned long long VAR_8 ;
 unsigned long long VAR_9 ;
 unsigned long long VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (unsigned char* const,int ,unsigned long long) ;

int
FUNC_2(unsigned char *const VAR_13, unsigned long long VAR_14,
                      const char *const VAR_15, unsigned long long VAR_16,
                      const unsigned char *const VAR_17,
                      unsigned long long VAR_18, size_t VAR_19, int VAR_20)
{
    FUNC_1(VAR_13, 0, VAR_14);
    if (VAR_14 > VAR_3) {
        VAR_12 = VAR_1;
        return -1;
    }
    if (VAR_14 < VAR_4) {
        VAR_12 = VAR_2;
        return -1;
    }
    if (VAR_16 > VAR_9 ||
        VAR_18 > VAR_7 ||
        VAR_19 > VAR_5) {
        VAR_12 = VAR_1;
        return -1;
    }
    if (VAR_16 < VAR_10 ||
        VAR_18 < VAR_8 ||
        VAR_19 < VAR_6) {
        VAR_12 = VAR_2;
        return -1;
    }
    switch (VAR_20) {
    case 128:
        if (FUNC_0((uint32_t) VAR_18, (uint32_t) (VAR_19 / 1024U),
                             (uint32_t) 1U, VAR_15, (size_t) VAR_16, VAR_17,
                             (size_t) VAR_11, VAR_13,
                             (size_t) VAR_14) != VAR_0) {
            return -1;
        }
        return 0;
    default:
        VAR_12 = VAR_2;
        return -1;
    }
}
