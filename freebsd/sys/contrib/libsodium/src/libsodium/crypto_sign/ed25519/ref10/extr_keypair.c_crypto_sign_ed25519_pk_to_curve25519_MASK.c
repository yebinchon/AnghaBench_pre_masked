
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Y; } ;
typedef TYPE_1__ ge25519_p3 ;
typedef int fe25519 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (unsigned char*,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,unsigned char const*) ;
 scalar_t__ FUNC_7 (unsigned char const*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;

int
FUNC_9(unsigned char *VAR_0,
                                     const unsigned char *VAR_1)
{
    ge25519_p3 VAR_2;
    fe25519 VAR_3;
    fe25519 VAR_4;

    if (FUNC_7(VAR_1) != 0 ||
        FUNC_6(&VAR_2, VAR_1) != 0 ||
        FUNC_8(&VAR_2) == 0) {
        return -1;
    }
    FUNC_0(VAR_4);
    FUNC_4(VAR_4, VAR_4, VAR_2.Y);
    FUNC_0(VAR_3);
    FUNC_1(VAR_3, VAR_3, VAR_2.Y);
    FUNC_2(VAR_4, VAR_4);
    FUNC_3(VAR_3, VAR_3, VAR_4);
    FUNC_5(VAR_0, VAR_3);

    return 0;
}
