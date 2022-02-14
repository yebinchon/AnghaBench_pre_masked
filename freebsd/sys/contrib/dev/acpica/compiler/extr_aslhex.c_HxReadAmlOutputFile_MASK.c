
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_2__ {int Handle; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (size_t,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int ,int ) ;

__attribute__((used)) static UINT32
FUNC_4 (
    UINT8 *VAR_4)
{
    UINT32 VAR_5;


    VAR_5 = FUNC_3 (VAR_4, 1, VAR_3,
        VAR_2[VAR_0].Handle);

    if (FUNC_2 (VAR_2[VAR_0].Handle))
    {
        FUNC_1 (VAR_0, VAR_1);
        FUNC_0 ();
    }

    return (VAR_5);
}
