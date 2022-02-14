
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* c; } ;
typedef TYPE_1__ OCB_BLOCK ;


 int FUNC_0 (int*,int,int*) ;

__attribute__((used)) static void FUNC_1(OCB_BLOCK *VAR_0, OCB_BLOCK *VAR_1)
{
    unsigned char VAR_2;





    VAR_2 = VAR_0->c[0] & 0x80;
    VAR_2 >>= 7;
    VAR_2 = (0 - VAR_2) & 0x87;

    FUNC_0(VAR_0->c, 1, VAR_1->c);

    VAR_1->c[15] ^= VAR_2;
}
