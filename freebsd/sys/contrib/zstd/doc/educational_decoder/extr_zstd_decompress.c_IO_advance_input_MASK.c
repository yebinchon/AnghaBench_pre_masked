
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; scalar_t__ bit_offset; size_t ptr; } ;
typedef TYPE_1__ istream_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(istream_t *const VAR_0, size_t VAR_1) {
    if (VAR_1 > VAR_0->len) {
         FUNC_1();
    }
    if (VAR_0->bit_offset != 0) {
        FUNC_0("Attempting to operate on a non-byte aligned stream");
    }

    VAR_0->ptr += VAR_1;
    VAR_0->len -= VAR_1;
}
