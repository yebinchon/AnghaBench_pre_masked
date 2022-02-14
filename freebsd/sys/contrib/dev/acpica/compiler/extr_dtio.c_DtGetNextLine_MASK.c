
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT32 ;
typedef int FILE ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 char* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,int *,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,scalar_t__) ;
 int FUNC_6 (int,int *) ;

UINT32
FUNC_7 (
    FILE *VAR_10,
    UINT32 VAR_11)
{
    BOOLEAN VAR_12 = VAR_8;
    UINT32 VAR_13 = 132;
    UINT32 VAR_14;
    UINT32 VAR_15;
    int VAR_16;
    int VAR_17;


    FUNC_5 (VAR_2, 0, VAR_4);
    for (VAR_15 = 0; ;)
    {




        if (VAR_15 >= VAR_4)
        {
            FUNC_2 ();
        }

        VAR_16 = FUNC_4 (VAR_10);
        if (VAR_16 == VAR_7)
        {
            switch (VAR_13)
            {
            case 128:
            case 131:

                FUNC_0 ("**** EOF within comment/string %u\n", VAR_13);
                break;

            default:

                break;
            }



            if (VAR_15 == 0)
            {
                return (VAR_0);
            }
            VAR_16 = '\n';
            VAR_13 = 132;
        }
        else if (VAR_16 == '\r')
        {
            VAR_17 = FUNC_4 (VAR_10);
            if (VAR_17 == '\n')
            {





                VAR_16 = '\n';
            }
            else
            {


                FUNC_6(VAR_17, VAR_10);

                FUNC_1 (VAR_1, ((void*)0),
                    "Carriage return without linefeed detected");
                return (VAR_0);
            }
        }

        switch (VAR_13)
        {
        case 132:



            VAR_2[VAR_15] = (char) VAR_16;
            switch (VAR_16)
            {
            case '/':

                VAR_13 = 129;
                break;

            case '"':

                VAR_13 = 128;
                VAR_12 = VAR_9;
                VAR_15++;
                break;

            case '\\':




                VAR_13 = 133;
                break;

            case '\n':

                VAR_14 = VAR_5;
                VAR_5 = (UINT32) FUNC_3 (VAR_10);
                VAR_3++;





                if ((VAR_15 != 0) && VAR_12)
                {
                    if ((VAR_15 + 1) >= VAR_4)
                    {
                        FUNC_2 ();
                    }

                    VAR_2[VAR_15+1] = 0;
                    return (VAR_14);
                }



                VAR_15 = 0;
                VAR_12 = VAR_8;
                break;

            default:

                if (VAR_16 != ' ')
                {
                    VAR_12 = VAR_9;
                }

                VAR_15++;
                break;
            }
            break;

        case 128:



            VAR_2[VAR_15] = (char) VAR_16;
            VAR_15++;

            switch (VAR_16)
            {
            case '"':

                VAR_13 = 132;
                break;

            case '\\':

                VAR_13 = 134;
                break;

            case '\n':

                if (!(VAR_11 & VAR_6))
                {
                    FUNC_0 (
                        "ERROR at line %u: Unterminated quoted string\n",
                        VAR_3++);
                    VAR_13 = 132;
                }
                break;

            default:

                break;
            }
            break;

        case 134:



            VAR_2[VAR_15] = (char) VAR_16;
            VAR_15++;
            VAR_13 = 128;
            break;

        case 129:



            switch (VAR_16)
            {
            case '*':

                VAR_13 = 131;
                break;

            case '/':

                VAR_13 = 130;
                break;

            default:

                VAR_15++;
                if (VAR_15 >= VAR_4)
                {
                    FUNC_2 ();
                }

                VAR_2[VAR_15] = (char) VAR_16;
                VAR_15++;
                VAR_13 = 132;
                break;
            }
            break;

        case 131:



            switch (VAR_16)
            {
            case '\n':

                VAR_5 = (UINT32) FUNC_3 (VAR_10);
                VAR_3++;
                break;

            case '*':

                VAR_13 = 135;
                break;

            default:

                break;
            }
            break;

        case 130:



            if (VAR_16 == '\n')
            {


                FUNC_6 (VAR_16, VAR_10);
                VAR_13 = 132;
            }
            break;

        case 135:



            switch (VAR_16)
            {
            case '/':

                VAR_13 = 132;
                break;

            case '\n':

                VAR_5 = (UINT32) FUNC_3 (VAR_10);
                VAR_3++;
                break;

            case '*':


                break;

            default:

                VAR_13 = 131;
                break;
            }
            break;

        case 133:

            if (VAR_16 != '\n')
            {




                VAR_15++;

                FUNC_6 (VAR_16, VAR_10);
                VAR_13 = 132;
            }
            else
            {





                VAR_2[VAR_15] = ' ';
                VAR_15++;



                VAR_5 = (UINT32) FUNC_3 (VAR_10);
                VAR_3++;
                VAR_13 = 132;
            }
            break;

        default:

            FUNC_1 (VAR_1, ((void*)0), "Unknown input state");
            return (VAR_0);
        }
    }
}
