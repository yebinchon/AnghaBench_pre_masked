
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
typedef TYPE_1__ gss_iov_buffer_desc ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ FUNC_0 (int ) ;

gss_iov_buffer_desc *
FUNC_1(gss_iov_buffer_desc *VAR_0, int VAR_1, OM_uint32 VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
 if (VAR_2 == FUNC_0(VAR_0[VAR_3].type))
     return &VAR_0[VAR_3];
    return ((void*)0);
}
