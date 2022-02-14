
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_4__ {int ResourceType; int SpecificFlags; int Flags; } ;
struct TYPE_5__ {TYPE_1__ Address; } ;
typedef TYPE_2__ AML_RESOURCE ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static void
FUNC_7 (
    AML_RESOURCE *VAR_4,
    UINT8 VAR_5,
    UINT32 VAR_6)
{
    UINT8 VAR_7;
    UINT8 VAR_8;
    UINT8 VAR_9;


    VAR_7 = VAR_4->Address.ResourceType;
    VAR_8 = VAR_4->Address.SpecificFlags;
    VAR_9 = VAR_4->Address.Flags;

    FUNC_2 (VAR_6);



    if ((VAR_7 > 2) && (VAR_7 < 0xC0))
    {
        FUNC_6 (
            "/**** Invalid Resource Type: 0x%X ****/", VAR_7);
        return;
    }



    FUNC_1 (VAR_5);



    if (VAR_7 > 2)
    {
        FUNC_6 ("Space (0x%2.2X, ", VAR_7);
        FUNC_5 (VAR_9);
        FUNC_6 (" 0x%2.2X,", VAR_8);
        return;
    }



    FUNC_6 ("%s (",
        VAR_3 [FUNC_0 (VAR_7)]);



    if (VAR_7 == VAR_1)
    {
        FUNC_4 (VAR_9, VAR_8);
    }
    else
    {
        FUNC_3 (VAR_9);
        if (VAR_7 == VAR_0)
        {
            FUNC_6 (" %s,",
                VAR_2 [FUNC_0 (VAR_8)]);
        }
    }
}
