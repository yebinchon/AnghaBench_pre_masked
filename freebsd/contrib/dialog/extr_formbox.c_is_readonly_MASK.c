
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; scalar_t__ text_flen; } ;
typedef TYPE_1__ DIALOG_FORMITEM ;



__attribute__((used)) static bool
FUNC_0(DIALOG_FORMITEM * VAR_0)
{
    return ((VAR_0->type & 2) != 0) || (VAR_0->text_flen <= 0);
}
