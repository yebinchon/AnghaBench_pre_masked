
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int t_HcFrame ;
struct TYPE_4__ {size_t nextSeqNumLocation; size_t* seqNum; int ** p_Frm; int h_FmPcd; } ;
typedef TYPE_1__ t_FmHc ;


 int FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ,size_t) ;
 size_t VAR_0 ;

__attribute__((used)) static __inline__ t_HcFrame * FUNC_3(t_FmHc *VAR_1, uint32_t *VAR_2)
{
    uint32_t VAR_3;

    FUNC_0(VAR_1);

    VAR_3 = FUNC_1(VAR_1->h_FmPcd);

    if (VAR_1->nextSeqNumLocation == VAR_0)
    {

        FUNC_2(VAR_1->h_FmPcd, VAR_3);
        return ((void*)0);
    }

    *VAR_2 = VAR_1->seqNum[VAR_1->nextSeqNumLocation];
    VAR_1->nextSeqNumLocation++;

    FUNC_2(VAR_1->h_FmPcd, VAR_3);
    return VAR_1->p_Frm[*VAR_2];
}
