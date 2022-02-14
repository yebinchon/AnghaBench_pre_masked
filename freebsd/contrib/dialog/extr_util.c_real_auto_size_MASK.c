
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_4__ {double aspect_ratio; int text_height; int text_width; } ;
struct TYPE_3__ {int begin_x; int begin_y; scalar_t__ begin_set; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char const*,int*,int*) ;
 TYPE_2__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 (char const*) ;
 double FUNC_3 (char const*) ;
 int FUNC_4 (int *,char const*,int,int,int*,int*) ;
 int FUNC_5 (char const*) ;
 double FUNC_6 (double) ;
 scalar_t__ FUNC_7 (char const*,char) ;

__attribute__((used)) static void
FUNC_8(const char *VAR_6,
        const char *VAR_7,
        int *VAR_8, int *VAR_9,
        int VAR_10, int VAR_11)
{
    int VAR_12 = (VAR_5.begin_set ? VAR_5.begin_x : 2);
    int VAR_13 = (VAR_5.begin_set ? VAR_5.begin_y : 1);
    int VAR_14 = VAR_6 ? FUNC_2(VAR_6) : 0;
    int VAR_15;
    int VAR_16;
    int VAR_17 = *VAR_8;
    int VAR_18 = *VAR_9;
    int VAR_19;
    int VAR_20;

    if (VAR_7 == 0) {
 if (*VAR_8 == 0)
     *VAR_8 = -1;
 if (*VAR_9 == 0)
     *VAR_9 = -1;
    }

    VAR_19 = (*VAR_8 < 0);
    VAR_20 = (*VAR_9 < 0);

    if (*VAR_8 > 0) {
 VAR_15 = *VAR_8;
    } else {
 VAR_15 = VAR_3 - VAR_13;
    }

    if (*VAR_9 <= 0) {
 if (VAR_7 != 0) {
     VAR_16 = FUNC_0(VAR_14, VAR_11);
     if (FUNC_7(VAR_7, '\n') == 0) {
  double VAR_21 = (VAR_4.aspect_ratio *
         FUNC_3(VAR_7));
  double VAR_22 = FUNC_6(VAR_21);
  int VAR_23 = (int) VAR_22;
  VAR_16 = FUNC_0(VAR_16, VAR_23);
  VAR_16 = FUNC_0(VAR_16, FUNC_5(VAR_7));
  FUNC_4((WINDOW *) 0, VAR_7, VAR_15, VAR_16, VAR_8, VAR_9);
     } else {
  FUNC_1(VAR_7, VAR_8, VAR_9);
     }
 } else {
     VAR_16 = VAR_1 - VAR_12;
     FUNC_4((WINDOW *) 0, VAR_7, VAR_15, VAR_16, VAR_8, VAR_9);
 }
    }

    if (*VAR_9 < VAR_14) {
 FUNC_4((WINDOW *) 0, VAR_7, VAR_15, VAR_14, VAR_8, VAR_9);
 *VAR_9 = VAR_14;
    }

    VAR_4.text_height = *VAR_8;
    VAR_4.text_width = *VAR_9;

    if (*VAR_9 < VAR_11 && VAR_18 == 0)
 *VAR_9 = VAR_11;
    if (VAR_7 != 0) {
 *VAR_9 += ((2 * VAR_0) + VAR_2);
 *VAR_8 += VAR_10 + (2 * VAR_0);
    }

    if (VAR_17 > 0)
 *VAR_8 = VAR_17;
    if (VAR_18 > 0)
 *VAR_9 = VAR_18;

    if (VAR_19)
 *VAR_8 = VAR_3 - (VAR_5.begin_set ? VAR_5.begin_y : 0);
    if (VAR_20)
 *VAR_9 = VAR_1 - (VAR_5.begin_set ? VAR_5.begin_x : 0);
}
