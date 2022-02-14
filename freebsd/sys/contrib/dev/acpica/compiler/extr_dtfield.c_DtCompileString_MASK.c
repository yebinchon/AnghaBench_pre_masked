
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT8 ;
typedef scalar_t__ UINT32 ;
struct TYPE_4__ {char* Value; } ;
typedef TYPE_1__ DT_FIELD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,TYPE_1__*,int ) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int FUNC_2 (int ,char*,scalar_t__,scalar_t__,char*) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (
    UINT8 *VAR_3,
    DT_FIELD *VAR_4,
    UINT32 VAR_5)
{
    UINT32 VAR_6;


    VAR_6 = FUNC_3 (VAR_4->Value);



    if (VAR_6 > VAR_5)
    {
        FUNC_2 (VAR_2,
            "Maximum %u characters, found %u characters [%s]",
            VAR_5, VAR_6, VAR_4->Value);
        FUNC_0 (VAR_0, VAR_1, VAR_4, VAR_2);
        VAR_6 = VAR_5;
    }

    FUNC_1 (VAR_3, VAR_4->Value, VAR_6);
}
