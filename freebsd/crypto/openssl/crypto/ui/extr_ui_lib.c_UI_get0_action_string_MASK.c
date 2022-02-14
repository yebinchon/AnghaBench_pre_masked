
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* action_desc; } ;
struct TYPE_6__ {TYPE_1__ boolean_data; } ;
struct TYPE_7__ {int type; TYPE_2__ _; } ;
typedef TYPE_3__ UI_STRING ;
const char *FUNC_0(UI_STRING *VAR_0)
{
    switch (VAR_0->type) {
    case 133:
        return VAR_0->_.boolean_data.action_desc;
    case 129:
    case 130:
    case 128:
    case 131:
    case 132:
        break;
    }
    return ((void*)0);
}
