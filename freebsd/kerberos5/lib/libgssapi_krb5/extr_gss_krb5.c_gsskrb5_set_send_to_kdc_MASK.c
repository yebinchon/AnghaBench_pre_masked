
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gsskrb5_send_to_kdc {int dummy; } ;
struct TYPE_3__ {int length; struct gsskrb5_send_to_kdc* value; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,TYPE_1__*) ;

OM_uint32
FUNC_1(struct gsskrb5_send_to_kdc *VAR_2)
{
    gss_buffer_desc VAR_3;
    OM_uint32 VAR_4;

    if (VAR_2) {
 VAR_3.value = VAR_2;
 VAR_3.length = sizeof(*VAR_2);
    } else {
 VAR_3.value = ((void*)0);
 VAR_3.length = 0;
    }

    FUNC_0(&VAR_4, ((void*)0),
     VAR_0, &VAR_3);

    return (VAR_1);
}
