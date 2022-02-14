
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int rm_firstdatacol; int rm_cols; TYPE_1__* rm_col; } ;
typedef TYPE_2__ raidz_map_t ;
struct TYPE_5__ {scalar_t__ rc_error; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int*,int) ;

__attribute__((used)) static int
FUNC_2(raidz_map_t *VAR_1, int *VAR_2, int VAR_3)
{
 int VAR_4[VAR_0];
 int VAR_5;
 int VAR_6, VAR_7;
 int VAR_8;
 int VAR_9, VAR_10;




 for (VAR_6 = 1; VAR_6 < VAR_3; VAR_6++) {
  FUNC_0(VAR_2[VAR_6] > VAR_2[VAR_6 - 1]);
 }

 VAR_9 = VAR_1->rm_firstdatacol;
 VAR_10 = VAR_1->rm_cols - VAR_9;
 VAR_5 = 0;
 for (VAR_6 = 0, VAR_7 = 0; VAR_7 < VAR_1->rm_cols; VAR_7++) {
  if (VAR_6 < VAR_3 && VAR_7 == VAR_2[VAR_6]) {
   VAR_4[VAR_5++] = VAR_7;
   VAR_6++;
  } else if (VAR_1->rm_col[VAR_7].rc_error != 0) {
   VAR_4[VAR_5++] = VAR_7;
  } else if (VAR_7 >= VAR_1->rm_firstdatacol) {
   VAR_10--;
  } else {
   VAR_9--;
  }
 }

 FUNC_0(VAR_5 >= VAR_3);
 FUNC_0(VAR_10 >= 0);
 FUNC_0(VAR_10 + VAR_9 == VAR_5);

 VAR_8 = FUNC_1(VAR_1, VAR_4, VAR_5);
 FUNC_0(VAR_8 < (1 << VAR_0));
 FUNC_0(VAR_8 > 0);
 return (VAR_8);
}
