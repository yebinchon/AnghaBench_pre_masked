
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int paramValues_t ;
typedef int memoTable_t ;
typedef int contexts_t ;
typedef int constraint_t ;
struct TYPE_4__ {int srcSize; int maxBlockSize; } ;
typedef TYPE_1__ buffers_t ;
typedef int BMK_benchResult_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int const,int const,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,TYPE_1__ const,int const,int const,int const,int *,int const) ;
 scalar_t__ FUNC_3 (int * const,int const) ;
 int FUNC_4 (int * const,int const,int) ;
 scalar_t__ FUNC_5 (int const,int const,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(BMK_benchResult_t* VAR_6,
                const buffers_t VAR_7, const contexts_t VAR_8,
                const paramValues_t VAR_9,
                const constraint_t VAR_10,
                BMK_benchResult_t* VAR_11, memoTable_t* const VAR_12,
                const int VAR_13) {
    static int VAR_14 = 0;
    int VAR_15;

    if ( FUNC_3(VAR_12, VAR_9) >= VAR_3
      || FUNC_5(VAR_9, VAR_10, VAR_7.maxBlockSize) ) {
        return VAR_4;
    }

    VAR_15 = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_13);

    if(VAR_2 && !(VAR_14 % 250)) {
        FUNC_1("Count: %d\n", VAR_14);
        VAR_14++;
    }
    FUNC_0(VAR_5, VAR_1, *VAR_6, VAR_9, VAR_10, VAR_7.srcSize);

    if(VAR_15 == VAR_0 || VAR_13) {
        FUNC_4(VAR_12, VAR_9, 255);
    }
    return VAR_15;
}
