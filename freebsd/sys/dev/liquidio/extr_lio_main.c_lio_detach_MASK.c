
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct octeon_device {scalar_t__ app_mode; scalar_t__ watchdog_task; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct octeon_device* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct octeon_device*) ;
 int FUNC_3 (struct octeon_device*,char*) ;
 int FUNC_4 (struct octeon_device*,char*) ;
 int FUNC_5 (struct octeon_device*) ;
 unsigned long long FUNC_6 (struct octeon_device*,int ) ;
 int FUNC_7 (struct octeon_device*) ;
 int FUNC_8 (struct octeon_device*,int ,unsigned long long) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_2)
{
 struct octeon_device *VAR_3 = FUNC_0(VAR_2);

 FUNC_3(VAR_3, "Stopping device\n");
 if (VAR_3->watchdog_task) {
  uint64_t VAR_4;

  FUNC_1(VAR_3->watchdog_task, 0);

  VAR_4 = FUNC_6(VAR_3, VAR_0);
  VAR_4 &= ~4ULL;
  FUNC_8(VAR_3, VAR_0, VAR_4);
 }

 if (VAR_3->app_mode && (VAR_3->app_mode == VAR_1))
  FUNC_7(VAR_3);





 FUNC_2(VAR_3);

 FUNC_4(VAR_3, "Device removed\n");





 FUNC_5(VAR_3);
 return (0);
}
