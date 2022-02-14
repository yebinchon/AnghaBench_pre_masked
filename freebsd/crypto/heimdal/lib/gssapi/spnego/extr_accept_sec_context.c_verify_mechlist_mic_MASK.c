
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int data; int length; } ;
typedef TYPE_1__ heim_octet_string ;
typedef TYPE_2__* gssspnego_ctx ;
typedef int gss_buffer_t ;
struct TYPE_9__ {int value; int length; } ;
typedef TYPE_3__ gss_buffer_desc ;
struct TYPE_8__ {int negotiated_ctx_id; scalar_t__ verified_mic; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ,int ,TYPE_3__*,int *) ;

__attribute__((used)) static OM_uint32
FUNC_1
    (OM_uint32 *VAR_3,
     gssspnego_ctx VAR_4,
     gss_buffer_t VAR_5,
     heim_octet_string *VAR_6
    )
{
    OM_uint32 VAR_7;
    gss_buffer_desc VAR_8;

    if (VAR_4->verified_mic) {

 *VAR_3 = 0;
 return VAR_2;
    }

    if (VAR_6 == ((void*)0)) {
 *VAR_3 = 0;
 return VAR_1;
    }

    VAR_8.length = VAR_6->length;
    VAR_8.value = VAR_6->data;

    VAR_7 = FUNC_0(VAR_3,
    VAR_4->negotiated_ctx_id,
    VAR_5,
    &VAR_8,
    ((void*)0));

    if (VAR_7 != VAR_0)
 VAR_7 = VAR_1;

    return VAR_7;
}
