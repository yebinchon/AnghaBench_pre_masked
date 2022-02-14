
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int VAR_9 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static UINT32
FUNC_1 (
    UINT32 VAR_10)
{

    if (VAR_10 == VAR_8)
    {
        return (VAR_5);
    }



    if (VAR_10 <= VAR_9)
    {





        switch (VAR_10)
        {
        case 136:

            return (VAR_1 | VAR_2);

        case 128:
        case 141:

            return (VAR_1);

        case 129:

            return (VAR_6);

        case 137:

            return (VAR_1 | VAR_3);

        case 140:

            return (VAR_1 | VAR_0);

        case 139:

            return (VAR_4 | VAR_2);

        case 138:



            return (0);

        default:

            return (1 << (VAR_10 - 1));
        }
    }



    switch (VAR_10)
    {
    case 132:
    case 134:
    case 133:



        return (VAR_1 | VAR_3);

    case 135:

        return (VAR_4);


    case 131:
    case 130:

        return (VAR_7);

    default:

        FUNC_0 ("Unhandled encoded type: %X\n", VAR_10);
        return (0);
    }
}
