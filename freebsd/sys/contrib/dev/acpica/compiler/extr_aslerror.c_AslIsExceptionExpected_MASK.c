
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT8 ;
typedef size_t UINT32 ;
typedef int UINT16 ;
struct TYPE_2__ {size_t MessageId; int MessageReceived; } ;
typedef int BOOLEAN ;


 size_t FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static BOOLEAN
FUNC_1 (
    UINT8 VAR_4,
    UINT16 VAR_5)
{
    UINT32 VAR_6;
    UINT32 VAR_7;




    VAR_6 = FUNC_0 (VAR_4, VAR_5);
    for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
    {


        if (VAR_6 == VAR_0[VAR_7].MessageId)
        {
            return (VAR_0[VAR_7].MessageReceived = VAR_3);
        }
    }

    return (VAR_2);
}
