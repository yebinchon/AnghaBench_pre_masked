
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Z; int Y; int X; } ;
typedef TYPE_1__ ge25519_p3 ;
typedef int fe25519 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

int
FUNC_5(const ge25519_p3 *VAR_1)
{
    fe25519 VAR_2;
    fe25519 VAR_3;
    fe25519 VAR_4;
    fe25519 VAR_5;
    fe25519 VAR_6;
    fe25519 VAR_7;

    FUNC_3(VAR_2, VAR_1->X);
    FUNC_3(VAR_3, VAR_1->Y);
    FUNC_3(VAR_4, VAR_1->Z);
    FUNC_4(VAR_6, VAR_3, VAR_2);
    FUNC_2(VAR_6, VAR_6, VAR_4);

    FUNC_2(VAR_7, VAR_2, VAR_3);
    FUNC_2(VAR_7, VAR_7, VAR_0);
    FUNC_3(VAR_5, VAR_4);
    FUNC_0(VAR_7, VAR_7, VAR_5);
    FUNC_4(VAR_6, VAR_6, VAR_7);

    return FUNC_1(VAR_6);
}
