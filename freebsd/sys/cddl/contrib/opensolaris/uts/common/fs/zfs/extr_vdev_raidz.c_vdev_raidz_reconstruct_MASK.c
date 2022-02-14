
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int rm_firstdatacol; int rm_cols; TYPE_1__* rm_col; } ;
typedef TYPE_2__ raidz_map_t ;
struct TYPE_8__ {scalar_t__ rc_error; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,int*,int) ;
 int FUNC_2 (TYPE_2__*,int*,int) ;
 int FUNC_3 (TYPE_2__*,int*,int) ;
 int FUNC_4 (TYPE_2__*,int*,int) ;

__attribute__((used)) static int
FUNC_5(raidz_map_t *VAR_6, int *VAR_7, int VAR_8)
{
 int VAR_9[VAR_2], *VAR_10;
 int VAR_11;
 int VAR_12, VAR_13;
 int VAR_14;
 int VAR_15, VAR_16;
 int VAR_17[VAR_2];




 for (VAR_12 = 1; VAR_12 < VAR_8; VAR_12++) {
  FUNC_0(VAR_7[VAR_12] > VAR_7[VAR_12 - 1]);
 }

 VAR_15 = VAR_6->rm_firstdatacol;
 VAR_16 = VAR_6->rm_cols - VAR_15;
 VAR_11 = 0;
 for (VAR_12 = 0, VAR_13 = 0; VAR_13 < VAR_6->rm_cols; VAR_13++) {
  if (VAR_13 < VAR_6->rm_firstdatacol)
   VAR_17[VAR_13] = VAR_0;

  if (VAR_12 < VAR_8 && VAR_13 == VAR_7[VAR_12]) {
   VAR_9[VAR_11++] = VAR_13;
   VAR_12++;
  } else if (VAR_6->rm_col[VAR_13].rc_error != 0) {
   VAR_9[VAR_11++] = VAR_13;
  } else if (VAR_13 >= VAR_6->rm_firstdatacol) {
   VAR_16--;
  } else {
   VAR_17[VAR_13] = VAR_1;
   VAR_15--;
  }
 }

 FUNC_0(VAR_11 >= VAR_8);
 FUNC_0(VAR_16 >= 0);
 FUNC_0(VAR_16 + VAR_15 == VAR_11);

 VAR_10 = &VAR_9[VAR_15];




 if (!VAR_5) {
  switch (VAR_16) {
  case 1:
   if (VAR_17[VAR_3])
    return (FUNC_2(VAR_6, VAR_10, 1));

   FUNC_0(VAR_6->rm_firstdatacol > 1);

   if (VAR_17[VAR_4])
    return (FUNC_4(VAR_6, VAR_10, 1));

   FUNC_0(VAR_6->rm_firstdatacol > 2);
   break;

  case 2:
   FUNC_0(VAR_6->rm_firstdatacol > 1);

   if (VAR_17[VAR_3] &&
       VAR_17[VAR_4])
    return (FUNC_3(VAR_6, VAR_10, 2));

   FUNC_0(VAR_6->rm_firstdatacol > 2);

   break;
  }
 }

 VAR_14 = FUNC_1(VAR_6, VAR_9, VAR_11);
 FUNC_0(VAR_14 < (1 << VAR_2));
 FUNC_0(VAR_14 > 0);
 return (VAR_14);
}
