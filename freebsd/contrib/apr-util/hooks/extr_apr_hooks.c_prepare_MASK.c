
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int apr_pool_t ;
struct TYPE_9__ {int nPredecessors; struct TYPE_9__** ppPredecessors; TYPE_1__* pData; int * pNext; } ;
struct TYPE_8__ {scalar_t__* aszSuccessors; int szName; scalar_t__* aszPredecessors; } ;
typedef TYPE_1__ TSortData ;
typedef TYPE_2__ TSort ;


 TYPE_2__* FUNC_0 (int *,int) ;
 TYPE_2__** FUNC_1 (int *,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int,int,int ) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static TSort *FUNC_4(apr_pool_t *VAR_1,TSortData *VAR_2,int VAR_3)
{
    TSort *VAR_4=FUNC_0(VAR_1,VAR_3*sizeof *VAR_4);
    int VAR_5;

    FUNC_2(VAR_2,VAR_3,sizeof *VAR_2,VAR_0);
    for(VAR_5=0 ; VAR_5 < VAR_3 ; ++VAR_5) {
        VAR_4[VAR_5].nPredecessors=0;
        VAR_4[VAR_5].ppPredecessors=FUNC_1(VAR_1,VAR_3*sizeof *VAR_4[VAR_5].ppPredecessors);
        VAR_4[VAR_5].pNext=((void*)0);
        VAR_4[VAR_5].pData=&VAR_2[VAR_5];
    }

    for(VAR_5=0 ; VAR_5 < VAR_3 ; ++VAR_5) {
        int VAR_6,VAR_7;

        for(VAR_6=0 ; VAR_2[VAR_5].aszPredecessors && VAR_2[VAR_5].aszPredecessors[VAR_6] ; ++VAR_6)
            for(VAR_7=0 ; VAR_7 < VAR_3 ; ++VAR_7)
                if(!FUNC_3(VAR_2[VAR_7].szName,VAR_2[VAR_5].aszPredecessors[VAR_6])) {
                    int VAR_8;

                    for(VAR_8=0 ; VAR_8 < VAR_4[VAR_5].nPredecessors ; ++VAR_8)
                        if(VAR_4[VAR_5].ppPredecessors[VAR_8] == &VAR_4[VAR_7])
                            goto got_it;
                    VAR_4[VAR_5].ppPredecessors[VAR_4[VAR_5].nPredecessors]=&VAR_4[VAR_7];
                    ++VAR_4[VAR_5].nPredecessors;
                got_it:
                    break;
                }
        for(VAR_6=0 ; VAR_2[VAR_5].aszSuccessors && VAR_2[VAR_5].aszSuccessors[VAR_6] ; ++VAR_6)
            for(VAR_7=0 ; VAR_7 < VAR_3 ; ++VAR_7)
                if(!FUNC_3(VAR_2[VAR_7].szName,VAR_2[VAR_5].aszSuccessors[VAR_6])) {
                    int VAR_9;

                    for(VAR_9=0 ; VAR_9 < VAR_4[VAR_7].nPredecessors ; ++VAR_9)
                        if(VAR_4[VAR_7].ppPredecessors[VAR_9] == &VAR_4[VAR_5])
                            goto got_it2;
                    VAR_4[VAR_7].ppPredecessors[VAR_4[VAR_7].nPredecessors]=&VAR_4[VAR_5];
                    ++VAR_4[VAR_7].nPredecessors;
                got_it2:
                    break;
                }
    }

    return VAR_4;
}
