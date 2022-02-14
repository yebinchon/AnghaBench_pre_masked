
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_2__ {int Handle; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (size_t,int ) ;
 size_t FUNC_2 (char*,int,size_t,int ) ;

void
FUNC_3 (
    UINT32 VAR_5,
    void *VAR_6,
    UINT32 VAR_7)
{
    UINT32 VAR_8;




    VAR_8 = FUNC_2 ((char *) VAR_6, 1, VAR_7, VAR_3[VAR_5].Handle);
    if (VAR_8 != VAR_7)
    {
        FUNC_1 (VAR_5, VAR_2);
        FUNC_0 ();
    }

    if ((VAR_5 == VAR_0) && VAR_4)
    {


        VAR_8 = FUNC_2 ((char *) VAR_6, 1, VAR_7,
            VAR_3[VAR_1].Handle);
        if (VAR_8 != VAR_7)
        {
            FUNC_1 (VAR_5, VAR_2);
            FUNC_0 ();
        }
    }
}
