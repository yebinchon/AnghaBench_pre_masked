
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef size_t UINT16 ;


 int VAR_0 ;
 size_t FUNC_0 (int ,size_t) ;
 size_t* VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static UINT8
FUNC_1 (
    UINT8 VAR_3,
    UINT16 VAR_4)
{
    UINT16 VAR_5;
    UINT16 VAR_6;


    VAR_6 = FUNC_0 (VAR_3, VAR_4);

    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
    {
        if (VAR_6 == VAR_1[VAR_5])
        {
            return (VAR_0);
        }
    }

    return (VAR_3);
}
