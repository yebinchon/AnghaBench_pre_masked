
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int buf; int len; } ;
struct TYPE_7__ {TYPE_1__ str; } ;
typedef TYPE_2__ XmapVal ;
struct TYPE_8__ {int buf; int len; } ;
typedef TYPE_3__ CStr ;



XmapVal *
FUNC_0(CStr *VAR_0)
{
    static XmapVal VAR_1;
    VAR_1.str.len = VAR_0->len;
    VAR_1.str.buf = VAR_0->buf;
    return &VAR_1;
}
