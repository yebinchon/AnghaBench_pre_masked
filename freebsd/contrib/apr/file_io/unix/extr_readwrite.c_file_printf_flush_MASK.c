
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ curpos; } ;
struct apr_file_printf_data {scalar_t__ buf; TYPE_1__ vbuff; int fptr; } ;
typedef int apr_vformatter_buff_t ;


 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_1(apr_vformatter_buff_t *VAR_0)
{
    struct apr_file_printf_data *VAR_1 = (struct apr_file_printf_data *)VAR_0;

    if (FUNC_0(VAR_1->fptr, VAR_1->buf,
                            VAR_1->vbuff.curpos - VAR_1->buf, ((void*)0))) {
        return -1;
    }

    VAR_1->vbuff.curpos = VAR_1->buf;
    return 0;
}
