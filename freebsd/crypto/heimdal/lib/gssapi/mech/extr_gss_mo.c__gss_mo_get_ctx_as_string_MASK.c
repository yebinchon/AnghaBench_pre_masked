
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ctx; } ;
typedef TYPE_1__ gss_mo_desc ;
typedef int gss_const_OID ;
typedef TYPE_2__* gss_buffer_t ;
struct TYPE_6__ {int length; int * value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

int
FUNC_2(gss_const_OID VAR_2, gss_mo_desc *VAR_3, gss_buffer_t VAR_4)
{
    if (VAR_4) {
 VAR_4->value = FUNC_0((char *)VAR_3->ctx);
 if (VAR_4->value == ((void*)0))
     return VAR_1;
 VAR_4->length = FUNC_1((char *)VAR_3->ctx);
    }
    return VAR_0;
}
