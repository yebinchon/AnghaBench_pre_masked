
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_3__ {int Line; int Offset; } ;
typedef int FILE ;
typedef TYPE_1__ ASL_FILE_STATUS ;


 int FUNC_0 (int*,int,int,int *) ;

__attribute__((used)) static void
FUNC_1 (
    FILE *VAR_0,
    ASL_FILE_STATUS *VAR_1)
{
    UINT8 VAR_2;


    while (FUNC_0 (&VAR_2, 1, 1, VAR_0) == 1)
    {
        VAR_1->Offset++;



        if (VAR_2 == 0x0A)
        {
            VAR_1->Line++;
            return;
        }
    }
}
