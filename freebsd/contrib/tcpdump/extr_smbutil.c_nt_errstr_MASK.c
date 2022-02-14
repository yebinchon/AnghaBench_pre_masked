
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int ret ;
struct TYPE_2__ {char const* name; scalar_t__ code; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int,char*,scalar_t__) ;

const char *
FUNC_1(uint32_t VAR_1)
{
    static char VAR_2[128];
    int VAR_3;

    VAR_2[0] = 0;

    for (VAR_3 = 0; VAR_0[VAR_3].name; VAR_3++) {
 if (VAR_1 == VAR_0[VAR_3].code)
     return VAR_0[VAR_3].name;
    }

    FUNC_0(VAR_2, sizeof(VAR_2), "0x%08x", VAR_1);
    return VAR_2;
}
