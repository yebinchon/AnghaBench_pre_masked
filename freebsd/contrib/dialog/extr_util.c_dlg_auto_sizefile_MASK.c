
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {long tab_len; } ;
struct TYPE_3__ {int begin_y; int begin_x; scalar_t__ tab_correct; scalar_t__ begin_set; } ;
typedef int FILE ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (char const*,char*) ;
 int FUNC_8 (int *) ;

void
FUNC_9(const char *VAR_5,
    const char *VAR_6,
    int *VAR_7,
    int *VAR_8,
    int VAR_9,
    int VAR_10)
{
    int VAR_11 = 0;
    int VAR_12 = VAR_5 ? FUNC_2(VAR_5) : 0;
    int VAR_13 = 4;
    int VAR_14 = 2;
    long VAR_15;
    int VAR_16;
    FILE *VAR_17;


    if ((VAR_17 = FUNC_7(VAR_6, "rb")) == ((void*)0))
 FUNC_3("dlg_auto_sizefile: Cannot open input file %s", VAR_6);

    if ((*VAR_7 == -1) || (*VAR_8 == -1)) {
 *VAR_7 = VAR_1 - (VAR_4.begin_set ? VAR_4.begin_y : 0);
 *VAR_8 = VAR_0 - (VAR_4.begin_set ? VAR_4.begin_x : 0);
    }
    if ((*VAR_7 != 0) && (*VAR_8 != 0)) {
 (void) FUNC_4(VAR_17);
 if (*VAR_8 > VAR_0)
     *VAR_8 = VAR_0;
 if (*VAR_7 > VAR_1)
     *VAR_7 = VAR_1;
 return;
    }

    while (!FUNC_5(VAR_17)) {
 if (FUNC_6(VAR_17))
     break;
 VAR_15 = 0;
 while (((VAR_16 = FUNC_8(VAR_17)) != '\n') && !FUNC_5(VAR_17)) {
     if ((VAR_16 == VAR_2) && (VAR_4.tab_correct)) {
  VAR_15 += VAR_3.tab_len - (VAR_15 % VAR_3.tab_len);
     } else {
  VAR_15++;
     }
 }

 if (VAR_15 > VAR_12)
     VAR_12 = (int) VAR_15;

 VAR_11++;
    }



    *VAR_7 = FUNC_1(VAR_1, VAR_11 + VAR_14 + VAR_9);
    *VAR_8 = FUNC_1(VAR_0, FUNC_0((VAR_12 + VAR_13), VAR_10));




    (void) FUNC_4(VAR_17);
}
