
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int Handle; } ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t,int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;

void
FUNC_6 (
    void)
{
    BOOLEAN VAR_7;


    FUNC_0 (VAR_0, "Starting preprocessing phase\n\n");


    FUNC_2 (VAR_1, 0);
    FUNC_3 ();



    do
    {
        FUNC_5 ();
        VAR_7 = FUNC_4 ();

    } while (VAR_7);



    FUNC_1 (VAR_1);
    VAR_5[VAR_1].Handle = VAR_5[VAR_2].Handle;
    VAR_3 = VAR_5[VAR_1].Handle;



    FUNC_2 (VAR_1, 0);
    if (!VAR_6)
    {
        VAR_4 = 0;
    }

    FUNC_0 (VAR_0, "Preprocessing phase complete \n\n");
}
