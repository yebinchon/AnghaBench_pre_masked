
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int crypto_generichash_blake2b_state ;


 size_t const VAR_0 ;
 size_t const VAR_1 ;
 size_t const VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ,unsigned char const*,int ) ;

int
FUNC_3(crypto_generichash_blake2b_state *VAR_3,
                                const unsigned char *VAR_4, const size_t VAR_5,
                                const size_t VAR_6)
{
    if (VAR_6 <= 0U || VAR_6 > VAR_1 ||
        VAR_5 > VAR_0) {
        return -1;
    }
    FUNC_0(VAR_6 <= VAR_2);
    FUNC_0(VAR_5 <= VAR_2);
    if (VAR_4 == ((void*)0) || VAR_5 <= 0U) {
        if (FUNC_1(VAR_3, (uint8_t) VAR_6) != 0) {
            return -1;
        }
    } else if (FUNC_2(VAR_3, (uint8_t) VAR_6, VAR_4,
                                (uint8_t) VAR_5) != 0) {
        return -1;
    }
    return 0;
}
