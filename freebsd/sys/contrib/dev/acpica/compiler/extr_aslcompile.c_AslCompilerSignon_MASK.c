
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;


 char* FUNC_0 (char*,char*) ;
 char* VAR_0 ;
 char* VAR_1 ;






 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int const,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_2 (
    UINT32 VAR_7)
{
    char *VAR_8 = "";
    char *VAR_9;




    switch (VAR_7)
    {
    case 132:
    case 133:

        VAR_8 = "; ";
        break;

    case 128:

        if (VAR_3 == VAR_5)
        {
            VAR_8 = "; ";
        }
        else if ((VAR_3 == VAR_6) ||
                 (VAR_3 == VAR_4))
        {
            FUNC_1 (128, "/*\n");
            VAR_8 = " * ";
        }
        break;

    case 129:
    case 130:
    case 131:

        VAR_8 = " * ";
        break;

    default:



        break;
    }



    if (VAR_2)
    {
        VAR_9 = VAR_0;
    }
    else
    {
        VAR_9 = VAR_1;
    }



    FUNC_1 (VAR_7, "%s\n", VAR_8);
    FUNC_1 (VAR_7, FUNC_0 (VAR_9, VAR_8));
}
