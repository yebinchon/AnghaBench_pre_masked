
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t (* record_padding_cb ) (TYPE_1__*,int,size_t,void*) ;} ;
typedef TYPE_1__ SSL ;



void FUNC_0(SSL *VAR_0,
                                     size_t (*VAR_1) (SSL *VAR_2, int VAR_3,
                                                   size_t VAR_4, void *VAR_5))
{
    VAR_0->record_padding_cb = VAR_1;
}
