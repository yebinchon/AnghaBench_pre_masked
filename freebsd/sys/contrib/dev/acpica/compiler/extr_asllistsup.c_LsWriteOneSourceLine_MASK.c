
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char UINT8 ;
typedef int UINT32 ;
struct TYPE_2__ {int LineNumber; int Filename; } ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int,char*,...) ;
 scalar_t__ FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int,int) ;
 scalar_t__ VAR_9 ;

UINT32
FUNC_4 (
    UINT32 VAR_10)
{
    UINT8 VAR_11;
    UINT32 VAR_12 = 0;
    UINT32 VAR_13 = 16;
    BOOLEAN VAR_14 = VAR_8;
    BOOLEAN VAR_15 = VAR_8;


    VAR_7++;
    VAR_6->LineNumber++;



    if (FUNC_1 (VAR_3, &VAR_11, 1) != VAR_0)
    {
        return (0);
    }
    if (VAR_11 == '\n')
    {
        return (1);
    }
    if (VAR_10 == VAR_2)
    {
        FUNC_0 (VAR_10, "     *");
    }
    if (VAR_10 == VAR_1)
    {
        FUNC_0 (VAR_10, "; ");
    }

    if (VAR_5)
    {




        FUNC_0 (VAR_10, "%12s %5d%s",
            VAR_6->Filename, VAR_6->LineNumber,
            VAR_4);
    }
    else
    {


        FUNC_0 (VAR_10, "%8u%s", VAR_7,
            VAR_4);
    }



    do
    {
        if (VAR_10 == VAR_2)
        {
            if (VAR_11 == '/')
            {
                VAR_11 = '*';
            }
        }



        VAR_12++;
        if (VAR_12 >= 128)
        {
            if (!VAR_15)
            {
                if ((VAR_11 != '}') &&
                    (VAR_11 != '{'))
                {
                    goto WriteByte;
                }

                VAR_15 = VAR_9;
            }

            if (VAR_11 == '{')
            {
                FUNC_0 (VAR_10, "\n%*s{\n", VAR_13, " ");
                VAR_14 = VAR_9;
                VAR_13 += 4;
                continue;
            }

            else if (VAR_11 == '}')
            {
                if (!VAR_14)
                {
                    FUNC_0 (VAR_10, "\n");
                }

                VAR_14 = VAR_9;
                VAR_13 -= 4;
                FUNC_0 (VAR_10, "%*s}\n", VAR_13, " ");
                continue;
            }



            else if ((VAR_11 == ' ') && VAR_14)
            {
                continue;
            }

            else if (VAR_14)
            {
                VAR_14 = VAR_8;
                FUNC_0 (VAR_10, "%*s", VAR_13, " ");
            }

WriteByte:
            FUNC_2 (VAR_10, &VAR_11, 1);
            if (VAR_11 == '\n')
            {





                FUNC_3 (VAR_7, VAR_10);
                return (1);
            }
        }
        else
        {
            FUNC_2 (VAR_10, &VAR_11, 1);
            if (VAR_11 == '\n')
            {





                FUNC_3 (VAR_7, VAR_10);
                return (1);
            }
        }

    } while (FUNC_1 (VAR_3, &VAR_11, 1) == VAR_0);



    return (0);
}
