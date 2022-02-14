
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t UINT8 ;
struct TYPE_2__ {char* EventName; int Valid; int StartTime; } ;


 size_t VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;

UINT8
FUNC_2 (
    char *VAR_4)
{

    if (VAR_2 >= VAR_0)
    {
        FUNC_1 ("Ran out of compiler event structs!\n");
        return (VAR_2);
    }



    VAR_1[VAR_2].StartTime = FUNC_0 ();
    VAR_1[VAR_2].EventName = VAR_4;
    VAR_1[VAR_2].Valid = VAR_3;
    return (VAR_2++);
}
