
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* rid; void* ip; void* dirn; void* ia5; void* otherName; void* other; } ;
struct TYPE_5__ {int type; TYPE_1__ d; } ;
typedef TYPE_2__ GENERAL_NAME ;
void FUNC_0(GENERAL_NAME *VAR_0, int VAR_1, void *VAR_2)
{
    switch (VAR_1) {
    case 128:
    case 134:
        VAR_0->d.other = VAR_2;
        break;

    case 131:
        VAR_0->d.otherName = VAR_2;
        break;

    case 133:
    case 135:
    case 129:
        VAR_0->d.ia5 = VAR_2;
        break;

    case 136:
        VAR_0->d.dirn = VAR_2;
        break;

    case 132:
        VAR_0->d.ip = VAR_2;
        break;

    case 130:
        VAR_0->d.rid = VAR_2;
        break;
    }
    VAR_0->type = VAR_1;
}
