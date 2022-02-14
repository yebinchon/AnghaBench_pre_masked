
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvs_channel {int resetting; int reset_timer; int sim; } ;
typedef void* device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int) ;
 struct mvs_channel* FUNC_1 (void*) ;
 int FUNC_2 (void*,char*,...) ;
 int VAR_4 ;
 int FUNC_3 (void*,int ,int,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_5)
{
 device_t VAR_6 = VAR_5;
 struct mvs_channel *VAR_7 = FUNC_1(VAR_6);
 int VAR_8;

 if (VAR_7->resetting == 0)
  return;
 VAR_7->resetting--;
 if ((VAR_8 = FUNC_3(VAR_6, 0, VAR_0 | VAR_1, 0)) >= 0) {
  if (VAR_3) {
   FUNC_2(VAR_6,
       "MVS reset: device ready after %dms\n",
       (310 - VAR_7->resetting) * 100);
  }
  VAR_7->resetting = 0;
  FUNC_4(VAR_7->sim, VAR_2);
  return;
 }
 if (VAR_7->resetting == 0) {
  FUNC_2(VAR_6,
      "MVS reset: device not ready after 31000ms\n");
  FUNC_4(VAR_7->sim, VAR_2);
  return;
 }
 FUNC_0(&VAR_7->reset_timer, VAR_4 / 10);
}
