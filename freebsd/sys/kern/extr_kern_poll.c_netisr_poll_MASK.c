
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum poll_cmd { ____Placeholder_poll_cmd } poll_cmd ;
struct TYPE_2__ {int ifp; int (* handler ) (int ,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ,int,int) ;

void
FUNC_4(void)
{
 int VAR_13, VAR_14;
 enum poll_cmd VAR_15 = VAR_1;

 if (VAR_6 == 0)
  return;

 FUNC_1(&VAR_7);
 if (!VAR_2) {
  FUNC_2(&VAR_7);
  return;
 }
 VAR_2 = 0;
 VAR_3 = 3;
 if (VAR_12 == 0) {
  FUNC_0(&VAR_8);
  if (++VAR_11 == VAR_10) {
   VAR_15 = VAR_0;
   VAR_11 = 0;
  }

  VAR_12 = VAR_4;
 }
 VAR_14 = (VAR_12 < VAR_5) ?
  VAR_12 : VAR_5;
 VAR_12 -= VAR_14;

 for (VAR_13 = 0 ; VAR_13 < VAR_6 ; VAR_13++)
  VAR_9[VAR_13].handler(VAR_9[VAR_13].ifp, VAR_15, VAR_14);

 VAR_3 = 4;
 FUNC_2(&VAR_7);
}
