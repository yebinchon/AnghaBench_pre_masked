
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cSize; scalar_t__ dSpeed; scalar_t__ cSpeed; } ;
struct TYPE_8__ {int * vals; } ;
struct TYPE_7__ {TYPE_1__ result; TYPE_3__ params; } ;
typedef TYPE_2__ winnerInfo_t ;
typedef size_t varInds_t ;
typedef int FILE ;


 double VAR_0 ;
 size_t VAR_1 ;
 TYPE_3__ FUNC_0 (TYPE_3__) ;
 int FUNC_1 (int *,size_t,int ,int) ;
 int FUNC_2 (int *,char*,...) ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static void
FUNC_3(FILE* VAR_3, winnerInfo_t VAR_4, const size_t VAR_5)
{
    varInds_t VAR_6;
    int VAR_7 = 1;
    VAR_4.params = FUNC_0(VAR_4.params);
    FUNC_2(VAR_3, "    {");
    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
        if (VAR_2[VAR_6]) { continue; }
        if (!VAR_7) { FUNC_2(VAR_3, ","); }
        FUNC_1(VAR_3, VAR_6, VAR_4.params.vals[VAR_6], 3);
        VAR_7 = 0;
    }

    { double const VAR_8 = VAR_4.result.cSize ?
                            (double)VAR_5 / VAR_4.result.cSize : 0;
        double const VAR_9 = (double)VAR_4.result.cSpeed / VAR_0;
        double const VAR_10 = (double)VAR_4.result.dSpeed / VAR_0;

        FUNC_2(VAR_3, " },     /* R:%5.3f at %5.1f MB/s - %5.1f MB/s */\n",
                            VAR_8, VAR_9, VAR_10);
    }
}
