
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct tm {int dummy; } ;
typedef int UINT32 ;
struct TYPE_2__ {int Filename; } ;
 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct tm*) ;
 struct tm* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4 (
    UINT32 VAR_6)
{
    struct tm *VAR_7;
    time_t VAR_8;
    char *VAR_9 = "";




    switch (VAR_6)
    {
    case 132:
    case 133:

        VAR_9 = "; ";
        break;

    case 128:

        if (VAR_2 == VAR_4)
        {
            VAR_9 = "; ";
        }
        else if ((VAR_2 == VAR_5) ||
                 (VAR_2 == VAR_3))
        {
            VAR_9 = " * ";
        }
        break;

    case 129:
    case 130:
    case 131:

        VAR_9 = " * ";
        break;

    default:



        break;
    }



    (void) FUNC_3 (&VAR_8);
    VAR_7 = FUNC_2 (&VAR_8);

    FUNC_0 (VAR_6,
        "%sCompilation of \"%s\" - %s%s\n",
        VAR_9, VAR_1[VAR_0].Filename, FUNC_1 (VAR_7),
        VAR_9);

    switch (VAR_6)
    {
    case 129:
    case 130:
    case 131:

        FUNC_0 (VAR_6, " */\n");
        break;

    default:



        break;
    }
}
