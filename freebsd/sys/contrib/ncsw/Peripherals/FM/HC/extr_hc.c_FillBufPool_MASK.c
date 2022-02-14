
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int t_HcFrame ;
struct TYPE_4__ {size_t* seqNum; scalar_t__ nextSeqNumLocation; int ** p_Frm; int dataMemId; } ;
typedef TYPE_1__ t_FmHc ;
typedef int t_Error ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ FUNC_2 (int,int ,int) ;

__attribute__((used)) static t_Error FUNC_3(t_FmHc *VAR_4)
{
    uint32_t VAR_5;

    FUNC_0(VAR_4);

    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
    {





        VAR_4->p_Frm[VAR_5] = (t_HcFrame *)FUNC_2(sizeof(t_HcFrame),
                                                       VAR_4->dataMemId,
                                                       16);

        if (!VAR_4->p_Frm[VAR_5])
            FUNC_1(VAR_3, VAR_0, ("FM HC frames!"));
    }


    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
    {
        VAR_4->seqNum[VAR_5] = VAR_5;
    }
    VAR_4->nextSeqNumLocation = 0;

    return VAR_1;
}
