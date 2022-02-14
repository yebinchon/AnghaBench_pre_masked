
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int apr_pool_t ;
struct TYPE_14__ {int nelts; scalar_t__ elts; } ;
typedef TYPE_1__ apr_array_header_t ;
struct TYPE_16__ {int pData; struct TYPE_16__* pNext; } ;
struct TYPE_15__ {char const* szName; } ;
typedef TYPE_2__ TSortData ;
typedef TYPE_3__ TSort ;


 TYPE_1__* FUNC_0 (int ,int,int) ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int **,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 TYPE_3__* FUNC_7 (int *,TYPE_2__*,int) ;
 int FUNC_8 (char*,char const*) ;
 int VAR_2 ;
 TYPE_3__* FUNC_9 (TYPE_3__*,int) ;

__attribute__((used)) static apr_array_header_t *FUNC_10(apr_array_header_t *VAR_3,
                                     const char *VAR_4)
{
    apr_pool_t *VAR_5;
    TSort *VAR_6;
    apr_array_header_t *VAR_7;
    int VAR_8;

    FUNC_2(&VAR_5, VAR_1);
    VAR_6=FUNC_7(VAR_5,(TSortData *)VAR_3->elts,VAR_3->nelts);
    VAR_6=FUNC_9(VAR_6,VAR_3->nelts);
    VAR_7=FUNC_0(VAR_1,VAR_3->nelts,sizeof(TSortData));
    if(VAR_0)
        FUNC_8("Sorting %s:",VAR_4);
    for(VAR_8=0 ; VAR_6 ; VAR_6=VAR_6->pNext,++VAR_8) {
        TSortData *VAR_9;
        FUNC_4(VAR_8 < VAR_3->nelts);
        VAR_9=FUNC_1(VAR_7);
        FUNC_6(VAR_9,VAR_6->pData,sizeof *VAR_9);
        if(VAR_0)
            FUNC_8(" %s",VAR_9->szName);
    }
    if(VAR_0)
        FUNC_5('\n',VAR_2);


    FUNC_3(VAR_5);

    return VAR_7;
}
