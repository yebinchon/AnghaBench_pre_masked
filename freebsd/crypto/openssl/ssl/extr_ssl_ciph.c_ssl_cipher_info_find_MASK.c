
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ mask; } ;
typedef TYPE_1__ ssl_cipher_table ;



__attribute__((used)) static int FUNC_0(const ssl_cipher_table * VAR_0,
                                size_t VAR_1, uint32_t VAR_2)
{
    size_t VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++, VAR_0++) {
        if (VAR_0->mask == VAR_2)
            return (int)VAR_3;
    }
    return -1;
}
