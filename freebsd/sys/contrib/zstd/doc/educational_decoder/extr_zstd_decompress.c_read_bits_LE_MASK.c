
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;


 int FUNC_0 (char*) ;

__attribute__((used)) static inline u64 FUNC_1(const u8 *VAR_0, const int VAR_1,
                               const size_t VAR_2) {
    if (VAR_1 > 64) {
        FUNC_0("Attempt to read an invalid number of bits");
    }


    VAR_0 += VAR_2 / 8;
    size_t VAR_3 = VAR_2 % 8;
    u64 VAR_4 = 0;

    int VAR_5 = 0;
    int VAR_6 = VAR_1;
    while (VAR_6 > 0) {
        u64 VAR_7 = VAR_6 >= 8 ? 0xff : (((u64)1 << VAR_6) - 1);


        VAR_4 += (((u64)*VAR_0++ >> VAR_3) & VAR_7) << VAR_5;
        VAR_5 += 8 - VAR_3;
        VAR_6 -= 8 - VAR_3;
        VAR_3 = 0;
    }

    return VAR_4;
}
