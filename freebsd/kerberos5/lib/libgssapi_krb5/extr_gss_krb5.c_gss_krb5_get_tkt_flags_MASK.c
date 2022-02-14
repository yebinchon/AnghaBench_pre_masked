
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ gss_ctx_id_t ;
typedef TYPE_2__* gss_buffer_set_t ;
struct TYPE_7__ {int count; TYPE_1__* elements; } ;
struct TYPE_6__ {int length; int* value; } ;
typedef int OM_uint32 ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*,scalar_t__,int ,TYPE_2__**) ;
 int FUNC_1 (int*,TYPE_2__**) ;

OM_uint32
FUNC_2(OM_uint32 *VAR_6,
         gss_ctx_id_t VAR_7,
         OM_uint32 *VAR_8)
{

    OM_uint32 VAR_9;
    gss_buffer_set_t VAR_10 = VAR_1;

    if (VAR_7 == VAR_2) {
 *VAR_6 = VAR_0;
 return VAR_5;
    }

    VAR_9 =
 FUNC_0 (VAR_6,
     VAR_7,
     VAR_3,
     &VAR_10);
    if (VAR_9)
 return VAR_9;

    if (VAR_10 == VAR_1 ||
 VAR_10->count != 1 ||
 VAR_10->elements[0].length < 4) {
 FUNC_1(VAR_6, &VAR_10);
 *VAR_6 = VAR_0;
 return VAR_5;
    }

    {
 const u_char *VAR_11 = VAR_10->elements[0].value;
 *VAR_8 = (VAR_11[0] << 0) | (VAR_11[1] << 8) | (VAR_11[2] << 16) | (VAR_11[3] << 24);
    }

    FUNC_1(VAR_6, &VAR_10);
    return VAR_4;
}
