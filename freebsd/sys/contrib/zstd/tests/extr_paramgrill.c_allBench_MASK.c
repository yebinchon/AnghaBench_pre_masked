
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int paramValues_t ;
typedef int contexts_t ;
typedef int constraint_t ;
struct TYPE_12__ {scalar_t__ srcSize; } ;
typedef TYPE_1__ buffers_t ;
typedef double U64 ;
struct TYPE_13__ {scalar_t__ cSize; int cSpeed; int dSpeed; } ;
typedef TYPE_2__ BMK_benchResult_t ;
typedef int BMK_benchOutcome_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const,int const,int ,int const*,int ,int) ;
 int VAR_2 ;
 TYPE_2__ FUNC_1 (int const) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (char*,...) ;
 int VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (TYPE_2__,TYPE_2__,int const,scalar_t__) ;
 int FUNC_5 (TYPE_2__,int const) ;
 int VAR_7 ;
 int VAR_8 ;
 double FUNC_6 (TYPE_2__,scalar_t__,int const) ;

__attribute__((used)) static int FUNC_7(BMK_benchResult_t* VAR_9,
                const buffers_t VAR_10, const contexts_t VAR_11,
                const paramValues_t VAR_12,
                const constraint_t VAR_13,
                BMK_benchResult_t* VAR_14, int VAR_15)
{
    BMK_benchResult_t VAR_16;
    double VAR_17 = 3., VAR_18 = 3.;
    double VAR_19;

    BMK_benchOutcome_t const VAR_20 = FUNC_0(VAR_10, VAR_11, VAR_0, &VAR_12, VAR_2, 2);
    if (!FUNC_2(VAR_20)) {
        FUNC_3("Benchmarking failed \n");
        return VAR_3;
    }
    VAR_16 = FUNC_1(VAR_20);

    VAR_19 = FUNC_6(*VAR_14, VAR_10.srcSize, VAR_13);
    FUNC_3("WinnerScore: %f \n ", VAR_19);

    *VAR_9 = VAR_16;


    if(VAR_15 && VAR_16.cSize < VAR_14->cSize && !VAR_8) {
        return VAR_6;
    }


    if (VAR_16.cSpeed) {
        U64 const VAR_21 = (((U64)VAR_10.srcSize * VAR_4) / VAR_16.cSpeed);
        VAR_17 = ((VAR_21 + (double)(2 * VAR_7))/VAR_21);
    }

    if (VAR_16.dSpeed) {
        U64 const VAR_22 = (((U64)VAR_10.srcSize * VAR_4) / VAR_16.dSpeed);
        VAR_18 = ((VAR_22 + (double)(2 * VAR_7))/VAR_22);
    }


    { BMK_benchResult_t VAR_23 = VAR_16;
        VAR_23.cSpeed = (unsigned long long)(VAR_23.cSpeed * VAR_17 * VAR_5);
        VAR_23.dSpeed = (unsigned long long)(VAR_23.dSpeed * VAR_18 * VAR_5);



        if((VAR_15 && !FUNC_5(VAR_23, VAR_13)) ||
          (!VAR_15 && (VAR_19 > FUNC_6(VAR_23, VAR_10.srcSize, VAR_13)))) {
            return VAR_6;
        }
    }



    if((!VAR_15 && (FUNC_6(VAR_16, VAR_10.srcSize, VAR_13) > FUNC_6(*VAR_14, VAR_10.srcSize, VAR_13))) ||
       (VAR_15 && (FUNC_4(*VAR_14, VAR_16, VAR_13, VAR_10.srcSize))) ) {
        return VAR_1;
    } else {
        return VAR_6;
    }
}
