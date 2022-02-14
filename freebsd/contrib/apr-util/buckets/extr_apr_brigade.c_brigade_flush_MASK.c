
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ endpos; scalar_t__ curpos; } ;
struct brigade_vprintf_data_t {scalar_t__ cbuff; TYPE_1__ vbuff; int ctx; int * flusher; int b; } ;
typedef int apr_vformatter_buff_t ;
typedef scalar_t__ apr_status_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static apr_status_t FUNC_1(apr_vformatter_buff_t *VAR_2)
{






    struct brigade_vprintf_data_t *VAR_3 = (struct brigade_vprintf_data_t*)VAR_2;
    apr_status_t VAR_4 = VAR_1;

    VAR_4 = FUNC_0(VAR_3->b, *VAR_3->flusher, VAR_3->ctx, VAR_3->cbuff,
                          VAR_0);

    if(VAR_4 != VAR_1) {
      return -1;
    }

    VAR_3->vbuff.curpos = VAR_3->cbuff;
    VAR_3->vbuff.endpos = VAR_3->cbuff + VAR_0;

    return VAR_4;
}
