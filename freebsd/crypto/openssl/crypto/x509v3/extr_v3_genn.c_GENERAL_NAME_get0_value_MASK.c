
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* other; void* otherName; void* ia5; void* dirn; void* ip; void* rid; } ;
struct TYPE_5__ {int type; TYPE_1__ d; } ;
typedef TYPE_2__ GENERAL_NAME ;
void *FUNC_0(const GENERAL_NAME *VAR_0, int *VAR_1)
{
    if (VAR_1)
        *VAR_1 = VAR_0->type;
    switch (VAR_0->type) {
    case 128:
    case 134:
        return VAR_0->d.other;

    case 131:
        return VAR_0->d.otherName;

    case 133:
    case 135:
    case 129:
        return VAR_0->d.ia5;

    case 136:
        return VAR_0->d.dirn;

    case 132:
        return VAR_0->d.ip;

    case 130:
        return VAR_0->d.rid;

    default:
        return ((void*)0);
    }
}
