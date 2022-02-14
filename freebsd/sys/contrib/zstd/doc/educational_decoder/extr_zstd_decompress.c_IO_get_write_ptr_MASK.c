
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {size_t len; int * ptr; } ;
typedef TYPE_1__ ostream_t ;


 int FUNC_0 () ;

__attribute__((used)) static inline u8 *FUNC_1(ostream_t *const VAR_0, size_t VAR_1) {
    if (VAR_1 > VAR_0->len) {
        FUNC_0();
    }
    u8 *const VAR_2 = VAR_0->ptr;
    VAR_0->ptr += VAR_1;
    VAR_0->len -= VAR_1;

    return VAR_2;
}
