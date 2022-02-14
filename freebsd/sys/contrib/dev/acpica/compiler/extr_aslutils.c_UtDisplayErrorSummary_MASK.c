
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int BOOLEAN ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_1 (
    UINT32 VAR_12)
{
    BOOLEAN VAR_13;


    VAR_13 = VAR_10 ||
        ((VAR_7[VAR_0] > 0) && !VAR_9);

    if (VAR_13)
    {
        FUNC_0 (VAR_12, "\nCompilation failed. ");
    }
    else
    {
        FUNC_0 (VAR_12, "\nCompilation successful. ");
    }

    FUNC_0 (VAR_12,
        "%u Errors, %u Warnings, %u Remarks",
        VAR_7[VAR_0],
        VAR_7[VAR_4] +
            VAR_7[VAR_5] +
            VAR_7[VAR_6],
        VAR_7[VAR_3]);

    if (VAR_8 != VAR_1)
    {
        if (VAR_10)
        {
            FUNC_0 (VAR_12,
                "\nNo AML files were generated due to syntax error(s)\n");
            return;
        }
        else if (VAR_13)
        {
            FUNC_0 (VAR_12,
                "\nNo AML files were generated due to compiler error(s)\n");
            return;
        }

        FUNC_0 (VAR_12, ", %u Optimizations",
            VAR_7[VAR_2]);

        if (VAR_11)
        {
            FUNC_0 (VAR_12, ", %u Constants Folded", VAR_11);
        }
    }

    FUNC_0 (VAR_12, "\n");
}
