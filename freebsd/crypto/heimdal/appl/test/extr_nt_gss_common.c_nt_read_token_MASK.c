
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* gss_buffer_t ;
struct TYPE_3__ {int length; unsigned char* value; } ;


 int FUNC_0 (int,char*) ;
 unsigned char* FUNC_1 (int) ;
 int FUNC_2 (int,unsigned char*,int) ;

void
FUNC_3 (int VAR_0, gss_buffer_t VAR_1)
{
    unsigned char VAR_2[4];
    uint32_t VAR_3;

    if (FUNC_2(VAR_0, VAR_2, 4) != 4)
 FUNC_0 (1, "read");
    VAR_3 = (VAR_2[0] << 0)
 | (VAR_2[1] << 8)
 | (VAR_2[2] << 16)
 | (VAR_2[3] << 24);

    VAR_1->length = VAR_3;
    VAR_1->value = FUNC_1(VAR_3);
    if (FUNC_2 (VAR_0, VAR_1->value, VAR_3) != VAR_3)
 FUNC_0 (1, "read");
}
