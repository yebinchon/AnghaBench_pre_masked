
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int in_hex; int out_hex; int key_hex; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,int,unsigned char*,unsigned long long,unsigned char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (unsigned char*,unsigned char*,int) ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (unsigned char*,size_t,int ,int,int *,int *,int *) ;
 scalar_t__ FUNC_6 (size_t) ;
 int FUNC_7 (int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int
FUNC_8(void)
{
    unsigned char *VAR_3;
    unsigned char *VAR_4;
    unsigned char *VAR_5;
    unsigned char *VAR_6;
    size_t VAR_7 = 0U;
    size_t VAR_8;

    VAR_5 = (unsigned char *) FUNC_6(VAR_1);
    VAR_6 = (unsigned char *) FUNC_6(VAR_0);
    VAR_3 = (unsigned char *) FUNC_6(VAR_0);
    do {
        FUNC_0(FUNC_7(VAR_2[VAR_7].key_hex) == 2 * VAR_1);
        FUNC_5(VAR_5, VAR_1,
                       VAR_2[VAR_7].key_hex, FUNC_7(VAR_2[VAR_7].key_hex),
                       ((void*)0), ((void*)0), ((void*)0));
        FUNC_0(FUNC_7(VAR_2[VAR_7].out_hex) == 2 * VAR_0);
        FUNC_5(VAR_3, VAR_0,
                       VAR_2[VAR_7].out_hex, FUNC_7(VAR_2[VAR_7].out_hex),
                       ((void*)0), ((void*)0), ((void*)0));
        VAR_8 = FUNC_7(VAR_2[VAR_7].in_hex) / 2;
        VAR_4 = (unsigned char *) FUNC_6(VAR_8);
        FUNC_5(VAR_4, VAR_8, VAR_2[VAR_7].in_hex, FUNC_7(VAR_2[VAR_7].in_hex),
                       ((void*)0), ((void*)0), ((void*)0));
        FUNC_1(VAR_6, VAR_0,
                           VAR_4, (unsigned long long) VAR_8,
                           VAR_5, VAR_1);
        if (FUNC_2(VAR_6, VAR_3, VAR_0) != 0) {
            FUNC_3("Test vector #%u failed\n", (unsigned int) VAR_7);
        }
        FUNC_4(VAR_4);
    } while (++VAR_7 < (sizeof VAR_2) / (sizeof VAR_2[0]));
    FUNC_4(VAR_5);
    FUNC_4(VAR_6);
    FUNC_4(VAR_3);

    return 0;
}
