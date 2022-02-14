
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {int member_0; int member_1; } ;



__attribute__((used)) static const char *
FUNC_0(uint8_t VAR_0[2])
{
    struct es_version {
        uint8_t es_version[2];
        const char *name;
    };

    const int VAR_1 = 2;
    struct es_version VAR_2[] = {
        {{0x00, 0x01}, "X25519-XSalsa20Poly1305"},
        {{0x00, 0x02}, "X25519-XChacha20Poly1305"},
    };
    int VAR_3;
    for(VAR_3=0; VAR_3 < VAR_1; VAR_3++){
        if(VAR_2[VAR_3].es_version[0] == VAR_0[0] &&
           VAR_2[VAR_3].es_version[1] == VAR_0[1]){
            return VAR_2[VAR_3].name;
        }
    }
    return ((void*)0);
}
