
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct witness {int w_index; int w_num_ancestors; int w_num_descendants; } ;
struct TYPE_2__ {int w_num_ancestors; int w_num_descendants; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct witness*,struct witness*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*,...) ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int** VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_6 () ;
 int VAR_12 ;

__attribute__((used)) static void
FUNC_7(struct witness *VAR_13, struct witness *VAR_14)
{
 int VAR_15, VAR_16, VAR_17, VAR_18;

 if (VAR_11 == 0)
  FUNC_4(&VAR_9, VAR_0);


 if (FUNC_2(VAR_13, VAR_14))
  return;


 FUNC_6();





 VAR_15 = VAR_13->w_index;
 VAR_16 = VAR_14->w_index;
 FUNC_1(VAR_15);
 FUNC_1(VAR_16);
 FUNC_0(VAR_15 != VAR_16);
 VAR_10[VAR_15][VAR_16] |= VAR_6;
 VAR_10[VAR_16][VAR_15] |= VAR_3;





 if ((VAR_10[VAR_15][VAR_16] & VAR_1) == 0) {
  VAR_13->w_num_descendants++;
  VAR_14->w_num_ancestors++;
 }





 for (VAR_17 = 1; VAR_17 <= VAR_8; VAR_17++) {
  if ((VAR_10[VAR_17][VAR_15] & VAR_2) == 0 &&
      (VAR_17 != VAR_15))
   continue;


  for (VAR_18 = 1; VAR_18 <= VAR_8; VAR_18++) {





   if (VAR_10[VAR_17][VAR_18] & VAR_2)
    continue;





   if ((VAR_10[VAR_16][VAR_18] & VAR_2) == 0 &&
       (VAR_18 != VAR_16))
    continue;
   VAR_10[VAR_17][VAR_18] |= VAR_1;
   VAR_10[VAR_18][VAR_17] |= VAR_4;
   VAR_7[VAR_17].w_num_descendants++;
   VAR_7[VAR_18].w_num_ancestors++;






   if ((VAR_10[VAR_17][VAR_18] & VAR_2) &&
       (VAR_10[VAR_17][VAR_18] & VAR_5)) {
    FUNC_5("witness rmatrix paradox! [%d][%d]=%d "
        "both ancestor and descendant\n",
        VAR_17, VAR_18, VAR_10[VAR_17][VAR_18]);
    FUNC_3();
    FUNC_5("Witness disabled.\n");
    VAR_12 = -1;
   }
   if ((VAR_10[VAR_18][VAR_17] & VAR_2) &&
       (VAR_10[VAR_18][VAR_17] & VAR_5)) {
    FUNC_5("witness rmatrix paradox! [%d][%d]=%d "
        "both ancestor and descendant\n",
        VAR_18, VAR_17, VAR_10[VAR_18][VAR_17]);
    FUNC_3();
    FUNC_5("Witness disabled.\n");
    VAR_12 = -1;
   }
  }
 }
}
