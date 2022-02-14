
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;


 int * FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (char*) ;

void
FUNC_8 (
    char *VAR_8,
    char *VAR_9,
    char *VAR_10)
{
    UINT32 VAR_11 = 0;
    UINT32 VAR_12 = 0;
    UINT32 VAR_13 = 0;


    FUNC_4 (VAR_8);
    FUNC_4 (VAR_10);

    if (VAR_9)
    {
        if (VAR_5)
        {
            FUNC_1 (VAR_5);
            VAR_5 = ((void*)0);
        }

        VAR_5 = FUNC_0 (FUNC_7 (VAR_9) + 1);
        if (!VAR_5)
        {
            FUNC_3 ("Failed to allocate method name (%s)\n",
                VAR_9);
            return;
        }

        FUNC_6 (VAR_5, VAR_9);
    }

    if (!FUNC_5 (VAR_8, "ENABLE") ||
        !FUNC_5 (VAR_8, "METHOD") ||
        !FUNC_5 (VAR_8, "OPCODE"))
    {
        if (!FUNC_5 (VAR_8, "ENABLE"))
        {


            VAR_11 = VAR_7;
            VAR_12 = VAR_6;
        }
        else
        {


            VAR_11 = VAR_1;
            VAR_12 = VAR_0;
        }

        VAR_13 = VAR_2;

        if (!FUNC_5 (VAR_8, "OPCODE"))
        {
            VAR_13 |= VAR_4;
        }

        if (VAR_10 && !FUNC_5 (VAR_10, "ONCE"))
        {
            VAR_13 |= VAR_3;
        }
    }

    (void) FUNC_2 (VAR_5,
        VAR_11, VAR_12, VAR_13);
}
