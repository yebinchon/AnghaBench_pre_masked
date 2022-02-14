
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int t_HcFrame ;
struct TYPE_3__ {size_t nextSeqNumLocation; int h_FmPcd; int * seqNum; } ;
typedef TYPE_1__ t_FmHc ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static __inline__ void FUNC_4(t_FmHc *VAR_0, t_HcFrame *VAR_1, uint32_t VAR_2)
{
    uint32_t VAR_3;

    FUNC_3(VAR_1);

    VAR_3 = FUNC_1(VAR_0->h_FmPcd);
    FUNC_0(VAR_0->nextSeqNumLocation);
    VAR_0->nextSeqNumLocation--;
    VAR_0->seqNum[VAR_0->nextSeqNumLocation] = VAR_2;
    FUNC_2(VAR_0->h_FmPcd, VAR_3);
}
