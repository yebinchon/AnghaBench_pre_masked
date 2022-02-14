
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t length; int * value; } ;
struct TYPE_5__ {int type; TYPE_1__ buffer; } ;
typedef TYPE_2__ gss_iov_buffer_desc ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t) ;

OM_uint32
FUNC_2(OM_uint32 *VAR_4, gss_iov_buffer_desc *VAR_5, size_t VAR_6)
{
    if (VAR_5->type & VAR_1) {
 if (VAR_5->buffer.length == VAR_6)
     return VAR_2;
 FUNC_0(VAR_5->buffer.value);
    }

    VAR_5->buffer.value = FUNC_1(VAR_6);
    VAR_5->buffer.length = VAR_6;
    if (VAR_5->buffer.value == ((void*)0)) {
 *VAR_4 = VAR_0;
 return VAR_3;
    }
    VAR_5->type |= VAR_1;

    return VAR_2;
}
