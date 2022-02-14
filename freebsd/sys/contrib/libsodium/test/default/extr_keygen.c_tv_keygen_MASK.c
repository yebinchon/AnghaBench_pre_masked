
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int key_len; int (* fn ) (unsigned char*) ;int const member_1; int const member_0; } ;
typedef TYPE_1__ KeygenTV ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (unsigned char*) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned char*) ;

__attribute__((used)) static void
FUNC_4(void)
{
    static const KeygenTV VAR_0[] = {
        { 156, 163 },
        { 161, 162 },
        { 170, 171 },
        { 157, 158 },
        { 159, 160 },
        { 152, 155 },
        { 153, 154 },
        { 150, 151 },
        { 148, 149 },
        { 146, 147 },
        { 167, 168 },
        { 166, 169 },
        { 167, 168 },
        { 164, 165 },
        { 142, 143 },
        { 144, 145 },
        { 140, 141 },
        { 138, 139 },
        { 132, 137 },
        { 133, 136 },
        { 134, 135 },
        { 130, 131 },
        { 128, 129 }
    };
    const KeygenTV *VAR_1;
    unsigned char *VAR_2;
    size_t VAR_3;
    int VAR_4;

    for (VAR_3 = 0; VAR_3 < (sizeof VAR_0) / (sizeof VAR_0[0]); VAR_3++) {
        VAR_1 = &VAR_0[VAR_3];
        VAR_2 = (unsigned char *) FUNC_2(VAR_1->key_len);
        VAR_2[VAR_1->key_len - 1U] = 0;
        for (VAR_4 = 0; VAR_4 < 10000; VAR_4++) {
            VAR_1->fn(VAR_2);
            if (VAR_2[VAR_1->key_len - 1U] != 0) {
                break;
            }
        }
        FUNC_1(VAR_2);
        if (VAR_4 >= 10000) {
            FUNC_0("Buffer underflow with test vector %u\n", (unsigned int) VAR_3);
        }
    }
    FUNC_0("tv_keygen: ok\n");
}
