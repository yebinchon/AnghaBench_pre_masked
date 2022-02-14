
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__ accuracy_log; scalar_t__* new_state_base; scalar_t__* num_bits; int * symbols; } ;
typedef TYPE_1__ FSE_dtable ;


 int FUNC_0 () ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(FSE_dtable *const VAR_0, const u8 VAR_1) {
    VAR_0->symbols = FUNC_1(sizeof(u8));
    VAR_0->num_bits = FUNC_1(sizeof(u8));
    VAR_0->new_state_base = FUNC_1(sizeof(u16));

    if (!VAR_0->symbols || !VAR_0->num_bits || !VAR_0->new_state_base) {
        FUNC_0();
    }



    VAR_0->symbols[0] = VAR_1;
    VAR_0->num_bits[0] = 0;
    VAR_0->new_state_base[0] = 0;
    VAR_0->accuracy_log = 0;
}
