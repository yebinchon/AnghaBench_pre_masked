
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {size_t rnd32_outleft; int * rnd32; int nonce; int key; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char*,unsigned long long,unsigned char*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static uint32_t
FUNC_8(void)
{
    uint32_t VAR_2;
    int VAR_3;

    FUNC_0(sizeof VAR_1.rnd32 >= (sizeof VAR_1.key) + (sizeof VAR_2));
    FUNC_0(((sizeof VAR_1.rnd32) - (sizeof VAR_1.key))
                    % sizeof VAR_2 == (size_t) 0U);
    if (VAR_1.rnd32_outleft <= (size_t) 0U) {
        FUNC_5();
        FUNC_0(sizeof VAR_1.nonce == VAR_0);
        VAR_3 = FUNC_2((unsigned char *) VAR_1.rnd32,
                                    (unsigned long long) sizeof VAR_1.rnd32,
                                    (unsigned char *) &VAR_1.nonce,
                                    VAR_1.key);
        FUNC_1(VAR_3 == 0);
        VAR_1.rnd32_outleft = (sizeof VAR_1.rnd32) - (sizeof VAR_1.key);
        FUNC_6();
        FUNC_7(&VAR_1.rnd32[VAR_1.rnd32_outleft]);
        FUNC_4(&VAR_1.rnd32[VAR_1.rnd32_outleft], 0, sizeof VAR_1.key);
        VAR_1.nonce++;
    }
    VAR_1.rnd32_outleft -= sizeof VAR_2;
    FUNC_3(&VAR_2, &VAR_1.rnd32[VAR_1.rnd32_outleft], sizeof VAR_2);
    FUNC_4(&VAR_1.rnd32[VAR_1.rnd32_outleft], 0, sizeof VAR_2);

    return VAR_2;
}
