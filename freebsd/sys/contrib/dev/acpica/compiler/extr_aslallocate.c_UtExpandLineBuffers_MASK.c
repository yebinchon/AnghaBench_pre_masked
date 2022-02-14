
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (scalar_t__*,int,int) ;

void
FUNC_2 (
    void)
{
    UINT32 VAR_7;




    VAR_7 = VAR_4 * 2;
    if (VAR_1)
    {
        FUNC_0 (VAR_0,
            "Increasing line buffer size from %u to %u\n",
            VAR_4, VAR_7);
    }

    FUNC_1 (&VAR_1, VAR_4, VAR_7);
    FUNC_1 (&VAR_6, VAR_4, VAR_7);
    FUNC_1 (&VAR_5, VAR_4, VAR_7);
    FUNC_1 (&VAR_2, VAR_4, VAR_7);

    VAR_3 = VAR_1;
    VAR_4 = VAR_7;
}
