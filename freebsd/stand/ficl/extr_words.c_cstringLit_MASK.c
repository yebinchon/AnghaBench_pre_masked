
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* text; scalar_t__ count; } ;
struct TYPE_5__ {int pStack; scalar_t__ ip; } ;
typedef scalar_t__ IPTYPE ;
typedef TYPE_1__ FICL_VM ;
typedef TYPE_2__ FICL_STRING ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(FICL_VM *VAR_0)
{
    FICL_STRING *VAR_1 = (FICL_STRING *)(VAR_0->ip);

    char *VAR_2 = VAR_1->text;
    VAR_2 += VAR_1->count + 1;
    VAR_2 = FUNC_0(VAR_2);
    VAR_0->ip = (IPTYPE)(void *)VAR_2;

    FUNC_1(VAR_0->pStack, VAR_1);
    return;
}
