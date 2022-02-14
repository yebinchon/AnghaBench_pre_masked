
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_3__ {char* EventName; scalar_t__ StartTime; scalar_t__ EndTime; scalar_t__ Valid; } ;
typedef TYPE_1__ ASL_EVENT_INFO ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2 (
    void)
{
    ASL_EVENT_INFO *VAR_7;
    UINT32 VAR_8;
    UINT32 VAR_9;
    UINT32 VAR_10;
    UINT32 VAR_11;


    VAR_7 = VAR_5;

    FUNC_0 (VAR_3, "\n\nElapsed time for major events\n\n");
    if (VAR_4)
    {
        FUNC_1 ("\nElapsed time for major events\n\n");
    }

    for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
    {
        if (VAR_7->Valid)
        {


            VAR_8 = (UINT32) (VAR_7->EndTime - VAR_7->StartTime);

            VAR_9 = VAR_8 / VAR_1;
            VAR_10 = VAR_8 / VAR_0;



            if ((VAR_9 - (VAR_10 * VAR_2)) >= 500)
            {
                VAR_10++;
            }

            FUNC_0 (VAR_3, "%8u usec %8u msec - %s\n",
                VAR_9, VAR_10, VAR_7->EventName);

            if (VAR_4)
            {
                FUNC_1 ("%8u usec %8u msec - %s\n",
                    VAR_9, VAR_10, VAR_7->EventName);
            }
        }

        VAR_7++;
    }
}
