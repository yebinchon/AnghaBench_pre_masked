
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
typedef int i64 ;
struct TYPE_3__ {size_t const* new_state_base; int * num_bits; } ;
typedef TYPE_1__ FSE_dtable ;


 size_t FUNC_0 (int const* const,int const,int * const) ;

__attribute__((used)) static inline void FUNC_1(const FSE_dtable *const VAR_0,
                                    u16 *const VAR_1, const u8 *const VAR_2,
                                    i64 *const VAR_3) {
    const u8 VAR_4 = VAR_0->num_bits[*VAR_1];
    const u16 VAR_5 = FUNC_0(VAR_2, VAR_4, VAR_3);
    *VAR_1 = VAR_0->new_state_base[*VAR_1] + VAR_5;
}
