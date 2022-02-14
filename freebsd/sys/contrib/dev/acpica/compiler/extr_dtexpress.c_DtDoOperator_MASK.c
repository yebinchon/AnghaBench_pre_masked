
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT64 ;
typedef int UINT32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int) ;
UINT64
FUNC_5 (
    UINT64 VAR_5,
    UINT32 VAR_6,
    UINT64 VAR_7)
{
    UINT64 VAR_8;




    switch (VAR_6)
    {
    case 133:

        VAR_8 = ~VAR_7;
        break;

    case 138:

        VAR_8 = !VAR_7;
        break;

    case 135:

        VAR_8 = VAR_5 * VAR_7;
        break;

    case 145:

        if (!VAR_7)
        {
            FUNC_2 (VAR_1, VAR_2,
                VAR_4, ((void*)0));
            return (0);
        }

        VAR_8 = VAR_5 / VAR_7;
        break;

    case 136:

        if (!VAR_7)
        {
            FUNC_2 (VAR_1, VAR_2,
                VAR_4, ((void*)0));
            return (0);
        }

        VAR_8 = VAR_5 % VAR_7;
        break;

    case 147:
        VAR_8 = VAR_5 + VAR_7;
        break;

    case 129:

        VAR_8 = VAR_5 - VAR_7;
        break;

    case 130:

        VAR_8 = VAR_5 >> VAR_7;
        break;

    case 131:

        VAR_8 = VAR_5 << VAR_7;
        break;

    case 141:

        VAR_8 = VAR_5 < VAR_7;
        break;

    case 143:

        VAR_8 = VAR_5 > VAR_7;
        break;

    case 140:

        VAR_8 = VAR_5 <= VAR_7;
        break;

    case 142:

        VAR_8 = VAR_5 >= VAR_7;
        break;

    case 144:

        VAR_8 = VAR_5 == VAR_7;
        break;

    case 134:

        VAR_8 = VAR_5 != VAR_7;
        break;

    case 146:

        VAR_8 = VAR_5 & VAR_7;
        break;

    case 128:

        VAR_8 = VAR_5 ^ VAR_7;
        break;

    case 132:

        VAR_8 = VAR_5 | VAR_7;
        break;

    case 139:

        VAR_8 = VAR_5 && VAR_7;
        break;

    case 137:

        VAR_8 = VAR_5 || VAR_7;
        break;

   default:



        FUNC_3 (VAR_3,
            VAR_4, ((void*)0));
        return (0);
    }

    FUNC_1 (VAR_0,
        "IntegerEval: (%8.8X%8.8X %s %8.8X%8.8X) = %8.8X%8.8X\n",
        FUNC_0 (VAR_5),
        FUNC_4 (VAR_6),
        FUNC_0 (VAR_7),
        FUNC_0 (VAR_8));

    return (VAR_8);
}
