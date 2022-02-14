
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int params; int result; } ;
typedef TYPE_1__ winnerInfo_t ;
struct TYPE_17__ {int * vals; } ;
typedef TYPE_2__ paramValues_t ;
typedef int memoTable_t ;
typedef int contexts_t ;
typedef int constraint_t ;
struct TYPE_18__ {int srcSize; int maxBlockSize; } ;
typedef TYPE_3__ buffers_t ;
typedef int ZSTD_strategy ;


 int FUNC_0 (int ,int ,int ,int ,int const,int ) ;
 int FUNC_1 (TYPE_1__) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 TYPE_2__ FUNC_3 (TYPE_2__) ;
 TYPE_1__ FUNC_4 (int const,int *,TYPE_3__ const,int const,TYPE_2__) ;
 scalar_t__ FUNC_5 (int ,int ,int const,int ) ;
 int FUNC_6 () ;
 TYPE_1__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,int *,int const) ;
 scalar_t__ FUNC_9 (TYPE_2__,int const,int ) ;
 int VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static winnerInfo_t
FUNC_10(const buffers_t VAR_3, const contexts_t VAR_4,
                      const constraint_t VAR_5, paramValues_t VAR_6,
                      const ZSTD_strategy VAR_7,
                      memoTable_t* VAR_8, const int VAR_9)
{
    int VAR_10 = 0;

    paramValues_t VAR_11;
    winnerInfo_t VAR_12, VAR_13;
    VAR_12 = FUNC_7(FUNC_6());

    VAR_6.vals[VAR_2] = VAR_7;

    VAR_6 = FUNC_3(VAR_6);

    VAR_11 = VAR_6;

    for(VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
        FUNC_2("Restart\n");
        do {
            FUNC_8(&VAR_11, VAR_8, VAR_7);
        } while(FUNC_9(VAR_11, VAR_5, VAR_3.maxBlockSize));
        VAR_13 = FUNC_4(VAR_5, VAR_8, VAR_3, VAR_4, VAR_11);
        if (FUNC_5(VAR_12.result, VAR_13.result, VAR_5, VAR_3.srcSize)) {
            VAR_12 = VAR_13;
            FUNC_0(VAR_1, VAR_0, VAR_12.result, VAR_12.params, VAR_5, VAR_3.srcSize);
            VAR_10 = 0;
            continue;
        }
        FUNC_1(VAR_12);
        VAR_10++;
    }
    return VAR_12;
}
