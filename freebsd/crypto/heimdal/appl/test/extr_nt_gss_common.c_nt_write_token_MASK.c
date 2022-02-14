
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* gss_buffer_t ;
struct TYPE_4__ {int length; unsigned char* value; } ;
typedef int OM_uint32 ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int,unsigned char*,int) ;

void
FUNC_3 (int VAR_0, gss_buffer_t VAR_1)
{
    unsigned char VAR_2[4];
    uint32_t VAR_3;
    OM_uint32 VAR_4;

    VAR_3 = VAR_1->length;

    VAR_2[0] = (VAR_3 >> 0) & 0xFF;
    VAR_2[1] = (VAR_3 >> 8) & 0xFF;
    VAR_2[2] = (VAR_3 >> 16) & 0xFF;
    VAR_2[3] = (VAR_3 >> 24) & 0xFF;

    if (FUNC_2 (VAR_0, VAR_2, 4) != 4)
 FUNC_0 (1, "write");
    if (FUNC_2 (VAR_0, VAR_1->value, VAR_3) != VAR_3)
 FUNC_0 (1, "write");

    FUNC_1 (&VAR_4, VAR_1);
}
