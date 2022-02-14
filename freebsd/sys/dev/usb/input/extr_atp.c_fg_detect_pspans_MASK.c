
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_6__ {scalar_t__ width; int cum; int cog; int loc; int matched; } ;
typedef TYPE_1__ fg_pspan ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_2(int *VAR_3, u_int VAR_4,
    u_int VAR_5,
    fg_pspan *VAR_6,
    u_int *VAR_7)
{
 u_int VAR_8;
 int VAR_9;
 u_int VAR_10 = 0;

 enum fg_pspan_state {
  ATP_PSPAN_INACTIVE,
  ATP_PSPAN_INCREASING,
  ATP_PSPAN_DECREASING,
 } VAR_11;





 FUNC_1(VAR_6, 0, VAR_5 * sizeof(fg_pspan));
 VAR_9 = 0;
 VAR_11 = ATP_PSPAN_INACTIVE;
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  if (VAR_10 >= VAR_5)
   break;

  if (VAR_3[VAR_8] == 0) {
   if (VAR_11 == ATP_PSPAN_INACTIVE) {




    continue;
   } else {
    VAR_11 = ATP_PSPAN_INACTIVE;
    VAR_9 = 0;
    VAR_10++;
   }
  } else {
   switch (VAR_11) {
   case ATP_PSPAN_INACTIVE:
    VAR_11 = ATP_PSPAN_INCREASING;
    VAR_9 = VAR_3[VAR_8];
    break;

   case ATP_PSPAN_INCREASING:
    if (VAR_3[VAR_8] > VAR_9)
     VAR_9 = VAR_3[VAR_8];
    else if (VAR_3[VAR_8] <= (VAR_9 >> 1))
     VAR_11 = ATP_PSPAN_DECREASING;
    break;

   case ATP_PSPAN_DECREASING:
    if (VAR_3[VAR_8] > VAR_3[VAR_8 - 1]) {
     VAR_10++;
     VAR_11 = ATP_PSPAN_INACTIVE;
     VAR_9 = 0;
     VAR_8--;
     continue;
    }
    break;
   }


   VAR_6[VAR_10].width++;
   VAR_6[VAR_10].cum += VAR_3[VAR_8];
   VAR_6[VAR_10].cog += VAR_3[VAR_8] * (VAR_8 + 1);
  }
 }
 if (VAR_11 != ATP_PSPAN_INACTIVE)
  VAR_10++;


 for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {

  if ((VAR_6[VAR_8].cum < VAR_1) ||
      (VAR_6[VAR_8].width > VAR_0)) {
   if ((VAR_8 + 1) < VAR_10) {
    FUNC_0(&VAR_6[VAR_8], &VAR_6[VAR_8 + 1],
        (VAR_10 - VAR_8 - 1) * sizeof(fg_pspan));
    VAR_8--;
   }
   VAR_10--;
   continue;
  }


  VAR_6[VAR_8].loc = VAR_6[VAR_8].cog * VAR_2 /
   VAR_6[VAR_8].cum;

  VAR_6[VAR_8].matched = 0;
 }

 *VAR_7 = VAR_10;
}
