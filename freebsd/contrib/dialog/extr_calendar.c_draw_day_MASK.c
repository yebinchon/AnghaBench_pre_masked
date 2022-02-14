
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tm {int tm_mday; int tm_wday; int tm_yday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
struct TYPE_5__ {scalar_t__ iso_week; } ;
struct TYPE_4__ {int y; int x; int week_start; scalar_t__ height; int parent; int window; scalar_t__ width; } ;
typedef TYPE_1__ BOX ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct tm*,int) ;
 TYPE_3__ VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,scalar_t__,int,scalar_t__) ;
 int FUNC_3 (int ,int,int,scalar_t__,scalar_t__,int ,int ,int ) ;
 int* FUNC_4 (scalar_t__,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ,int,int,char*,int,int,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int,int) ;
 int FUNC_9 (int ,char*,int,int) ;

__attribute__((used)) static int
FUNC_10(BOX * VAR_12, struct tm *VAR_13)
{
    int VAR_14 = VAR_4;
    int VAR_15, VAR_16, VAR_17 = 0;
    int VAR_18 = 0, VAR_19 = 0;
    int VAR_20 = VAR_13->tm_mday;
    int VAR_21;
    int VAR_22 = 0;
    int VAR_23 = 0;
    int *VAR_24 = 0;
    int VAR_25 = FUNC_0(VAR_13, 0);
    int VAR_26 = FUNC_0(VAR_13, -1);

    FUNC_7(VAR_12->window);
    FUNC_3(VAR_12->parent,
    VAR_12->y - VAR_2, VAR_12->x - VAR_2,
    VAR_12->height + (2 * VAR_2), VAR_12->width + (2 * VAR_2),
    VAR_9,
    VAR_11,
    VAR_10);

    FUNC_1(VAR_12->window, VAR_9);
    for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++) {
 FUNC_5(VAR_12->window,
    0, (VAR_16 + 1) * VAR_14, "%*.*s ",
    VAR_14 - 1,
    VAR_14 - 1,
    FUNC_6(VAR_16 + VAR_12->week_start));
    }

    VAR_21 = ((6 + VAR_13->tm_mday -
      VAR_13->tm_wday +
      VAR_12->week_start) % VAR_3) - VAR_3;
    if (VAR_21 <= -VAR_3)
 VAR_21 += VAR_3;

    if (VAR_6.iso_week) {
 VAR_24 = FUNC_4(VAR_13->tm_year + 1900, VAR_13->tm_mon + 1);
    } else {

 VAR_22 = (VAR_13->tm_yday + 6 + VAR_21 - VAR_13->tm_mday) / VAR_3;
    }

    for (VAR_15 = 1; VAR_21 < VAR_25; VAR_15++) {
 FUNC_1(VAR_12->window, VAR_9);
 FUNC_5(VAR_12->window,
    VAR_15, 0,
    "%*d ",
    VAR_14 - 1,
    VAR_24 ? VAR_24[VAR_23++] : ++VAR_22);
 for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++) {
     VAR_17 = 1 + (VAR_16 + 1) * VAR_14;
     ++VAR_21;
     if (FUNC_8(VAR_12->window, VAR_15, VAR_17) == VAR_1)
  continue;
     FUNC_1(VAR_12->window, VAR_7);
     if (VAR_21 == VAR_20) {
  FUNC_1(VAR_12->window, VAR_8);
  VAR_18 = VAR_15;
  VAR_19 = VAR_17;
     }
     if (VAR_21 > 0) {
  if (VAR_21 <= VAR_25) {
      FUNC_9(VAR_12->window, "%*d", VAR_14 - 2, VAR_21);
  } else if (VAR_21 == VAR_20) {
      FUNC_9(VAR_12->window, "%*d", VAR_14 - 2, VAR_21 - VAR_25);
  }
     } else if (VAR_21 == VAR_20) {
  FUNC_9(VAR_12->window, "%*d", VAR_14 - 2, VAR_21 + VAR_26);
     }
 }
 FUNC_8(VAR_12->window, VAR_18, VAR_19);
    }

    FUNC_2(VAR_12->parent, VAR_5, VAR_5,
      VAR_12->x + VAR_0,
      VAR_12->y - 1,
      VAR_12->y + VAR_12->height);

    return 0;
}
