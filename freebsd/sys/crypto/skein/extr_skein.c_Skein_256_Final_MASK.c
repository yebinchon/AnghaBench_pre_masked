
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64b_t ;
typedef int u08b_t ;
typedef int X ;
struct TYPE_7__ {size_t bCnt; int hashBitLen; int * T; } ;
struct TYPE_6__ {int * X; TYPE_3__ h; int * b; } ;
typedef TYPE_1__ Skein_256_Ctxt_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int *,int,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *,size_t) ;
 int FUNC_3 (int,TYPE_3__*,size_t,int *) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int ,int) ;

int FUNC_8(Skein_256_Ctxt_t *VAR_6, u08b_t *VAR_7)
    {
    size_t VAR_8,VAR_9,VAR_10;
    u64b_t VAR_11[VAR_2];
    FUNC_1(VAR_6->h.bCnt <= VAR_1,VAR_3);

    VAR_6->h.T[1] |= VAR_5;
    if (VAR_6->h.bCnt < VAR_1)
        FUNC_7(&VAR_6->b[VAR_6->h.bCnt],0,VAR_1 - VAR_6->h.bCnt);

    FUNC_0(VAR_6,VAR_6->b,1,VAR_6->h.bCnt);


    VAR_10 = (VAR_6->h.hashBitLen + 7) >> 3;


    FUNC_7(VAR_6->b,0,sizeof(VAR_6->b));
    FUNC_6(VAR_11,VAR_6->X,sizeof(VAR_11));
    for (VAR_8=0;VAR_8*VAR_1 < VAR_10;VAR_8++)
        {
        ((u64b_t *)VAR_6->b)[0]= FUNC_5((u64b_t) VAR_8);
        FUNC_4(VAR_6,VAR_0);
        FUNC_0(VAR_6,VAR_6->b,1,sizeof(u64b_t));
        VAR_9 = VAR_10 - VAR_8*VAR_1;
        if (VAR_9 >= VAR_1)
            VAR_9 = VAR_1;
        FUNC_2(VAR_7+VAR_8*VAR_1,VAR_6->X,VAR_9);
        FUNC_3(256,&VAR_6->h,VAR_9,VAR_7+VAR_8*VAR_1);
        FUNC_6(VAR_6->X,VAR_11,sizeof(VAR_11));
        }
    return VAR_4;
    }
