
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int xy2d; int yminusx; int yplusx; } ;
typedef TYPE_1__ ge25519_precomp ;
struct TYPE_6__ {int Y; int X; int Z; } ;
typedef TYPE_2__ ge25519_p3 ;
typedef int fe25519 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(ge25519_precomp *VAR_1, const ge25519_p3 *VAR_2)
{
    fe25519 VAR_3;
    fe25519 VAR_4;
    fe25519 VAR_5;
    fe25519 VAR_6;

    FUNC_1(VAR_3, VAR_2->Z);
    FUNC_2(VAR_4, VAR_2->X, VAR_3);
    FUNC_2(VAR_5, VAR_2->Y, VAR_3);
    FUNC_0(VAR_1->yplusx, VAR_5, VAR_4);
    FUNC_3(VAR_1->yminusx, VAR_5, VAR_4);
    FUNC_2(VAR_6, VAR_4, VAR_5);
    FUNC_2(VAR_1->xy2d, VAR_6, VAR_0);
}
