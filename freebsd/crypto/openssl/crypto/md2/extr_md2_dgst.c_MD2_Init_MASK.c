
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; int cksm; int state; scalar_t__ num; } ;
typedef TYPE_1__ MD2_CTX ;


 int FUNC_0 (int ,int ,int) ;

int FUNC_1(MD2_CTX *VAR_0)
{
    VAR_0->num = 0;
    FUNC_0(VAR_0->state, 0, sizeof(VAR_0->state));
    FUNC_0(VAR_0->cksm, 0, sizeof(VAR_0->cksm));
    FUNC_0(VAR_0->data, 0, sizeof(VAR_0->data));
    return 1;
}
