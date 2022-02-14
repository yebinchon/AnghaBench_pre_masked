
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int text_flen; int text_len; } ;
typedef TYPE_1__ DIALOG_FORMITEM ;



__attribute__((used)) static int
FUNC_0(DIALOG_FORMITEM * VAR_0)
{
    return (VAR_0->text_flen > 0
     ? VAR_0->text_flen
     : (VAR_0->text_flen < 0
        ? -VAR_0->text_flen
        : VAR_0->text_len));
}
