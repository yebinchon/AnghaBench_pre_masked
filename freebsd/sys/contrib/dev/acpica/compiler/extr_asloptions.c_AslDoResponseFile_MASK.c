
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char**,int ) ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_1 (char*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,int ,int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*,char*) ;
 char* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7 (
    char *VAR_7)
{
    char *VAR_8 = VAR_4;
    FILE *VAR_9;
    int VAR_10 = 0;
    int VAR_11;
    int VAR_12;


    VAR_9 = FUNC_4 (VAR_7, "r");
    if (!VAR_9)
    {
        FUNC_5 ("Could not open command file %s, %s\n",
            VAR_7, FUNC_6 (VAR_6));
        return (-1);
    }



    VAR_11 = VAR_1;
    VAR_12 = VAR_2;





    while (FUNC_3 (VAR_3, VAR_0, VAR_9))
    {


        FUNC_1 (VAR_3, VAR_4);



        VAR_1 = 0;
        VAR_2 = 0;

        VAR_10 = FUNC_0 (1, &VAR_8, VAR_5);
        if (VAR_10)
        {
            FUNC_5 ("Invalid option in command file %s: %s\n",
                VAR_7, VAR_3);
            break;
        }
    }



    VAR_1 = VAR_11;
    VAR_2 = VAR_12;

    FUNC_2 (VAR_9);
    return (VAR_10);
}
