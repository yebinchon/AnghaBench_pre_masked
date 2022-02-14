
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int ACPI_OBJECT_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

char *
FUNC_0 (
    char *VAR_5,
    char **VAR_6,
    ACPI_OBJECT_TYPE *VAR_7)
{
    char *VAR_8;
    UINT32 VAR_9;
    ACPI_OBJECT_TYPE VAR_10 = VAR_2;




    if (!VAR_5 || !(*VAR_5))
    {
        return (((void*)0));
    }



    if (*VAR_5 == ' ')
    {
        while (*VAR_5 && (*VAR_5 == ' '))
        {
            VAR_5++;
        }

        if (!(*VAR_5))
        {
            return (((void*)0));
        }
    }

    switch (*VAR_5)
    {
    case '"':



        VAR_5++;
        VAR_8 = VAR_5;
        VAR_10 = VAR_4;



        while (*VAR_5 && (*VAR_5 != '"'))
        {
            VAR_5++;
        }
        break;

    case '(':



        VAR_5++;
        VAR_8 = VAR_5;
        VAR_10 = VAR_0;



        while (*VAR_5 && (*VAR_5 != ')'))
        {
            VAR_5++;
        }
        break;

    case '{':



        VAR_5++;
        VAR_8 = VAR_5;
        VAR_10 = VAR_1;



        while (*VAR_5 && (*VAR_5 != '}'))
        {
            VAR_5++;
        }
        break;

    case '[':



        VAR_5++;
        VAR_9 = 1;
        VAR_8 = VAR_5;
        VAR_10 = VAR_3;



        while (*VAR_5)
        {


            if (*VAR_5 == '"')
            {


                VAR_5++;
                while (*VAR_5 && (*VAR_5 != '"'))
                {
                    VAR_5++;
                }
                if (!(*VAR_5))
                {
                    break;
                }
            }
            else if (*VAR_5 == '[')
            {
                VAR_9++;
            }
            else if (*VAR_5 == ']')
            {
                VAR_9--;
                if (VAR_9 == 0)
                {
                    break;
                }
            }

            VAR_5++;
        }
        break;

    default:

        VAR_8 = VAR_5;



        while (*VAR_5 && (*VAR_5 != ' '))
        {
            VAR_5++;
        }
        break;
    }

    if (!(*VAR_5))
    {
        *VAR_6 = ((void*)0);
    }
    else
    {
        *VAR_5 = 0;
        *VAR_6 = VAR_5 + 1;
    }

    *VAR_7 = VAR_10;
    return (VAR_8);
}
