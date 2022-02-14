
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char UINT8 ;
struct TYPE_3__ {int Offset; int Line; } ;
typedef int FILE ;
typedef scalar_t__ BOOLEAN ;
typedef TYPE_1__ ASL_FILE_STATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,int,int *) ;

__attribute__((used)) static void
FUNC_1 (
    FILE *VAR_2,
    ASL_FILE_STATUS *VAR_3)
{
    UINT8 VAR_4;
    BOOLEAN VAR_5 = VAR_0;


    while (FUNC_0 (&VAR_4, 1, 1, VAR_2) == 1)
    {


        if (VAR_5)
        {
            if (VAR_4 == '/')
            {
                VAR_3->Offset++;
                return;
            }

            if (VAR_4 != '*')
            {


                VAR_5 = VAR_0;
            }
        }
        else if (VAR_4 == '*')
        {
            VAR_5 = VAR_1;
        }



        if (VAR_4 == 0x0A)
        {
            VAR_3->Line++;
        }

        VAR_3->Offset++;
    }
}
