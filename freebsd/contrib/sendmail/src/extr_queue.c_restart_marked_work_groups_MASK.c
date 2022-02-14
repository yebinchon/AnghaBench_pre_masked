
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ wg_restart; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,char*,int,scalar_t__) ;

void
FUNC_4()
{
 int VAR_8;
 int VAR_9;

 if (VAR_3)
  return;


 VAR_9 = FUNC_1(VAR_6);

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
 {
  if (VAR_7[VAR_8].wg_restart >= 0)
  {
   if (VAR_1 > 8)
    FUNC_3(VAR_0, VAR_2,
       "restart queue runner=%d due to signal 0x%x",
       VAR_8, VAR_7[VAR_8].wg_restart);
   FUNC_0(VAR_8);
  }
 }
 VAR_5 = 0;

 if (VAR_9 == 0)
  (void) FUNC_2(VAR_6);
}
