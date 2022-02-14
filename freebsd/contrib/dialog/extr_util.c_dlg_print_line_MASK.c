
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int chtype ;
typedef int WINDOW ;
struct TYPE_4__ {scalar_t__ text_only; } ;
struct TYPE_3__ {scalar_t__ colors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const) ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int* FUNC_3 (char const*) ;
 int* FUNC_4 (char const*) ;
 int FUNC_5 (int *,char const*,int const,int *) ;
 scalar_t__ FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*,int*) ;
 scalar_t__ FUNC_8 (int) ;

const char *
FUNC_9(WINDOW *VAR_4,
        chtype *VAR_5,
        const char *VAR_6,
        int VAR_7, int VAR_8, int *VAR_9)
{
    const char *VAR_10;
    const char *VAR_11;
    const char *VAR_12 = 0;
    const int *VAR_13 = FUNC_3(VAR_6);
    const int *VAR_14 = FUNC_4(VAR_6);
    int VAR_15 = 0;
    int VAR_16 = 0;
    int VAR_17 = VAR_7;
    int VAR_18 = 0;
    int VAR_19 = FUNC_1(VAR_6);
    int VAR_20;
    int VAR_21 = 0;

    *VAR_9 = 1;





    for (VAR_20 = 0; VAR_20 < VAR_19; ++VAR_20) {
 int VAR_22 = *(VAR_11 = VAR_6 + VAR_14[VAR_16]);
 if (VAR_22 == '\n' || VAR_22 == '\0' || VAR_17 >= (VAR_8 + VAR_18))
     break;
 if (VAR_22 == VAR_1 && VAR_20 == 0) {
     VAR_21 = 8;
 } else if (FUNC_8(FUNC_0(VAR_22))
     && VAR_20 != 0
     && !FUNC_8(FUNC_0(VAR_6[VAR_14[VAR_20 - 1]]))) {
     VAR_15 = VAR_20;
     *VAR_9 = VAR_17;
 } else if (VAR_3.colors && FUNC_6(VAR_11)) {
     VAR_12 = VAR_11;
     VAR_18 += VAR_0;
     VAR_20 += (VAR_0 - 1);
 }
 VAR_17 = VAR_7 + VAR_21 + VAR_13[VAR_20 + 1];
 if (VAR_17 > (VAR_8 + VAR_18))
     break;
 VAR_16 = VAR_20 + 1;
    }





    VAR_11 = VAR_6 + VAR_14[VAR_16];
    if (*VAR_11 == '\n' || FUNC_8(FUNC_0(*VAR_11)) || *VAR_11 == '\0') {
 VAR_15 = VAR_16;
 while (VAR_15 > 0 && FUNC_8(FUNC_0(VAR_6[VAR_14[VAR_15 - 1]]))) {
     VAR_15--;
 }
 *VAR_9 = VAR_7 + VAR_14[VAR_15];
    } else if (*VAR_9 == 1 && VAR_17 >= VAR_8) {



 *VAR_9 = VAR_8;
 VAR_15 = VAR_16;
    }
    VAR_10 = VAR_6 + VAR_14[VAR_15];
    if ((VAR_12 != 0) && (VAR_12 >= VAR_10)) {
 VAR_18 -= VAR_0;
 VAR_11 = VAR_10;
 while (VAR_11 < VAR_10) {
     if (VAR_3.colors && FUNC_6(VAR_11)) {
  VAR_18 -= VAR_0;
  VAR_11 += VAR_0;
     } else {
  ++VAR_11;
     }
 }
    }





    if (VAR_2.text_only || VAR_4) {
 FUNC_5(VAR_4, VAR_6, (VAR_13[VAR_15] - VAR_18), VAR_5);
    }


    if (*VAR_9 == 1) {
 *VAR_9 = VAR_8;
    }

    *VAR_9 -= VAR_18;


    VAR_11 = VAR_10;
    while (FUNC_8(FUNC_0(*VAR_11)))
 VAR_11++;
    if (*VAR_11 == '\n')
 VAR_11++;
    FUNC_2(VAR_6);
    return (VAR_11);
}
