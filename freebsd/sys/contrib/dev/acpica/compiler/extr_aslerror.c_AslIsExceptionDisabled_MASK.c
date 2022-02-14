
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef size_t UINT32 ;
typedef int UINT16 ;
typedef int BOOLEAN ;







 size_t FUNC_0 (int,int ) ;
 size_t* VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static BOOLEAN
FUNC_1 (
    UINT8 VAR_5,
    UINT16 VAR_6)
{
    UINT32 VAR_7;
    UINT32 VAR_8;


    switch (VAR_5)
    {
    case 129:
    case 128:



        if (VAR_5 > VAR_2)
        {
            return (VAR_4);
        }


    case 130:
    case 131:
    case 132:




        VAR_7 = FUNC_0 (VAR_5, VAR_6);
        for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
        {


            if (VAR_7 == VAR_0[VAR_8])
            {
                return (VAR_4);
            }
        }
        break;

    default:
        break;
    }

    return (VAR_3);
}
