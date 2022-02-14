
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_3__ {char* Description; } ;
typedef TYPE_1__ AH_DEVICE_ID ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,char*) ;

void
FUNC_3 (
    UINT32 VAR_1)
{
    char VAR_2[VAR_0];
    const AH_DEVICE_ID *VAR_3;




    FUNC_1 (VAR_2, VAR_1);
    FUNC_2 ("EisaId (\"%s\")", VAR_2);



    VAR_3 = FUNC_0 (VAR_2);
    if (VAR_3)
    {
        FUNC_2 (" /* %s */", VAR_3->Description);
    }
}
