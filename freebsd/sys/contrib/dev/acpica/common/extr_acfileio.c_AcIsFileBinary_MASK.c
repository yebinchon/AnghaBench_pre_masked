
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int FILE ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int,int *) ;
 int FUNC_1 (int *,long,int ) ;
 long FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

BOOLEAN
FUNC_5 (
    FILE *VAR_3)
{
    UINT8 VAR_4;
    BOOLEAN VAR_5 = VAR_0;
    long VAR_6;




    VAR_6 = FUNC_2 (VAR_3);
    while (FUNC_0 (&VAR_4, 1, 1, VAR_3) == 1)
    {
        if (!FUNC_3 (VAR_4) && !FUNC_4 (VAR_4))
        {
            VAR_5 = VAR_2;
            goto Exit;
        }
    }

Exit:
    FUNC_1 (VAR_3, VAR_6, VAR_1);
    return (VAR_5);
}
