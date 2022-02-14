
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_device {scalar_t__ app_mode; int status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct octeon_device*,char*,...) ;
 scalar_t__ FUNC_2 (struct octeon_device*) ;
 scalar_t__ FUNC_3 (struct octeon_device*) ;

__attribute__((used)) static int
FUNC_4(struct octeon_device *VAR_2)
{
 int VAR_3 = 0;

 FUNC_0(&VAR_2->status, VAR_0);

 if (VAR_2->app_mode && VAR_2->app_mode == VAR_1) {
  if (FUNC_2(VAR_2)) {
   FUNC_1(VAR_2, "NIC initialization failed\n");
   VAR_3 = -1;





  }
 } else {
  FUNC_1(VAR_2,
       "Unexpected application running on NIC (%d). Check firmware.\n",
       VAR_2->app_mode);
  VAR_3 = -1;
 }

 return (VAR_3);
}
