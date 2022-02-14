
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t varInds_t ;
struct TYPE_7__ {int * vals; } ;
typedef TYPE_1__ paramValues_t ;
struct TYPE_8__ {int cSize; scalar_t__ dSpeed; scalar_t__ cSpeed; } ;
typedef int FILE ;
typedef TYPE_2__ BMK_benchResult_t ;


 double VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__ FUNC_1 (TYPE_1__) ;
 int FUNC_2 (int *,size_t,int ,int) ;
 int FUNC_3 (int *,char*,...) ;
 size_t VAR_2 ;

__attribute__((used)) static void
FUNC_4(FILE* VAR_3, const int VAR_4,
                      paramValues_t VAR_5,
                      const BMK_benchResult_t VAR_6, const size_t VAR_7)
{
    varInds_t VAR_8;
    int VAR_9 = 1;

    FUNC_0(VAR_4 >= 0);
    FUNC_0(VAR_4 <= VAR_1);
    VAR_5 = FUNC_1(VAR_5);

    FUNC_3(VAR_3, "   {");


    for (VAR_8 = 0; VAR_8 <= VAR_2; VAR_8++) {
        if (!VAR_9) { FUNC_3(VAR_3, ","); }
        FUNC_2(VAR_3, VAR_8, VAR_5.vals[VAR_8], 3);
        VAR_9 = 0;
    }

    { double const VAR_10 = VAR_6.cSize ?
                            (double)VAR_7 / VAR_6.cSize : 0;
        double const VAR_11 = (double)VAR_6.cSpeed / VAR_0;
        double const VAR_12 = (double)VAR_6.dSpeed / VAR_0;

        FUNC_3(VAR_3, " },   /* level %2i:  R=%5.3f at %5.1f MB/s - %5.1f MB/s */\n",
                             VAR_4, VAR_10, VAR_11, VAR_12);
    }
}
