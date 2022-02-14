
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_7 (
    char *VAR_10)
{
    ACPI_STATUS VAR_11;
    char *VAR_12 = VAR_10;
    char *VAR_13 = VAR_12;


    while (!VAR_8)
    {
        if (VAR_10)
        {
            if (*VAR_12)
            {
                while (*VAR_12)
                {
                    if (*VAR_12 == ',')
                    {

                        *VAR_12 = ' ';
                    }
                    else if (*VAR_12 == ';')
                    {
                        *VAR_12 = '\0';
                        continue;
                    }

                    VAR_12++;
                }

                FUNC_6 (VAR_7, VAR_13, VAR_1);
                VAR_12++;
                VAR_13 = VAR_12;
            }
            else
            {
                return;
            }
        }
        else
        {


            FUNC_1 (VAR_0);



            if (!VAR_9)
            {
                FUNC_4 ("%1c ", VAR_2);
            }
            else
            {
                FUNC_4 ("%1c ", VAR_3);
            }



            VAR_11 = FUNC_3 (VAR_7,
                VAR_1, ((void*)0));
            if (FUNC_0 (VAR_11))
            {
                return;
            }
        }





        FUNC_5 (VAR_6);

        VAR_11 = FUNC_2 (VAR_5,
            VAR_4);
        if (FUNC_0 (VAR_11))
        {
            return;
        }
    }
}
