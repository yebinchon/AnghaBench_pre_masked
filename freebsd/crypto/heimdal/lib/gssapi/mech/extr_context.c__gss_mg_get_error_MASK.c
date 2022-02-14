
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t length; int value; } ;
struct TYPE_5__ {size_t length; int value; } ;
struct mg_thread_ctx {int maj_stat; int min_stat; TYPE_2__ min_error; TYPE_1__ maj_error; int mech; } ;
typedef TYPE_3__* gss_buffer_t ;
typedef int * gss_OID ;
struct TYPE_7__ {size_t length; int * value; } ;
typedef int OM_uint32 ;




 int VAR_0 ;
 int VAR_1 ;
 struct mg_thread_ctx* FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int * const) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,size_t) ;

OM_uint32
FUNC_4(const gss_OID VAR_2, OM_uint32 VAR_3,
    OM_uint32 VAR_4, gss_buffer_t VAR_5)
{
    struct mg_thread_ctx *VAR_6;

    VAR_6 = FUNC_0();
    if (VAR_6 == ((void*)0))
 return VAR_0;
    switch (VAR_3) {
    case 129: {
 if (VAR_4 != VAR_6->maj_stat || VAR_6->maj_error.length == 0)
     break;
 VAR_5->value = FUNC_2(VAR_6->maj_error.length + 1);
 VAR_5->length = VAR_6->maj_error.length;
 FUNC_3(VAR_5->value, VAR_6->maj_error.value, VAR_6->maj_error.length);
        ((char *) VAR_5->value)[VAR_5->length] = '\0';
 return VAR_1;
    }
    case 128: {
 if (VAR_4 != VAR_6->min_stat || VAR_6->min_error.length == 0)
     break;
 VAR_5->value = FUNC_2(VAR_6->min_error.length + 1);
 VAR_5->length = VAR_6->min_error.length;
 FUNC_3(VAR_5->value, VAR_6->min_error.value, VAR_6->min_error.length);
        ((char *) VAR_5->value)[VAR_5->length] = '\0';
 return VAR_1;
    }
    }
    VAR_5->value = ((void*)0);
    VAR_5->length = 0;
    return VAR_0;
}
