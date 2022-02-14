
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* pNext; struct TYPE_4__** ppPredecessors; scalar_t__ nPredecessors; } ;
typedef TYPE_1__ TSort ;


 int FUNC_0 (int) ;

__attribute__((used)) static TSort *FUNC_1(TSort *VAR_0,int VAR_1)
{
    int VAR_2;
    TSort *VAR_3=((void*)0);
    TSort *VAR_4=((void*)0);

    for(VAR_2=0 ; VAR_2 < VAR_1 ; ++VAR_2) {
        int VAR_5,VAR_6,VAR_7;

        for(VAR_5=0 ; ; ++VAR_5) {
            if(VAR_5 == VAR_1)
                FUNC_0(0);
            if(!VAR_0[VAR_5].pNext) {
                if(VAR_0[VAR_5].nPredecessors) {
                    for(VAR_7=0 ; ; ++VAR_7) {
                        FUNC_0(VAR_7 < VAR_1);
                        if(VAR_0[VAR_5].ppPredecessors[VAR_7])
                            break;
                    }
                    for(VAR_6=0 ; ; ++VAR_6) {
                        FUNC_0(VAR_6 < VAR_1);
                        if(&VAR_0[VAR_6] == VAR_0[VAR_5].ppPredecessors[VAR_7]) {
                            VAR_5=VAR_6-1;
                            break;
                        }
                    }
                } else
                    break;
            }
        }
        if(VAR_4)
            VAR_4->pNext=&VAR_0[VAR_5];
        else
            VAR_3=&VAR_0[VAR_5];
        VAR_4=&VAR_0[VAR_5];
        VAR_4->pNext=VAR_4;
        for(VAR_6=0 ; VAR_6 < VAR_1 ; ++VAR_6)
            for(VAR_7=0 ; VAR_7 < VAR_1 ; ++VAR_7)
                if(VAR_0[VAR_6].ppPredecessors[VAR_7] == &VAR_0[VAR_5]) {
                    --VAR_0[VAR_6].nPredecessors;
                    VAR_0[VAR_6].ppPredecessors[VAR_7]=((void*)0);
                    break;
                }
    }
    VAR_4->pNext=((void*)0);
    return VAR_3;
}
