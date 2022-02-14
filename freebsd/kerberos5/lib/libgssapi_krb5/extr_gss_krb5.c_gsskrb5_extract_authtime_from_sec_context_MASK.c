
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned char time_t ;
typedef scalar_t__ gss_ctx_id_t ;
typedef TYPE_2__* gss_buffer_set_t ;
struct TYPE_7__ {int count; TYPE_1__* elements; } ;
struct TYPE_6__ {int length; unsigned char* value; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__,int ,TYPE_2__**) ;
 int FUNC_1 (scalar_t__*,TYPE_2__**) ;

OM_uint32
FUNC_2(OM_uint32 *VAR_6,
       gss_ctx_id_t VAR_7,
       time_t *VAR_8)
{
    gss_buffer_set_t VAR_9 = VAR_1;
    OM_uint32 VAR_10;

    if (VAR_7 == VAR_2) {
 *VAR_6 = VAR_0;
 return VAR_5;
    }

    VAR_10 =
 FUNC_0 (VAR_6,
     VAR_7,
     VAR_3,
     &VAR_9);
    if (VAR_10)
 return VAR_10;

    if (VAR_9 == VAR_1) {
 FUNC_1(VAR_6, &VAR_9);
 *VAR_6 = VAR_0;
 return VAR_5;
    }

    if (VAR_9->count != 1) {
 FUNC_1(VAR_6, &VAR_9);
 *VAR_6 = VAR_0;
 return VAR_5;
    }

    if (VAR_9->elements[0].length != 4) {
 FUNC_1(VAR_6, &VAR_9);
 *VAR_6 = VAR_0;
 return VAR_5;
    }

    {
 unsigned char *VAR_11 = VAR_9->elements[0].value;
 *VAR_8 = (VAR_11[3] <<24) | (VAR_11[2] << 16) |
     (VAR_11[1] << 8) | (VAR_11[0] << 0);
    }

    FUNC_1(VAR_6, &VAR_9);

    *VAR_6 = 0;
    return VAR_4;
}
