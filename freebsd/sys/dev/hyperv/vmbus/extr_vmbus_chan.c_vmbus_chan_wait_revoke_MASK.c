
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (struct vmbus_channel const*) ;

__attribute__((used)) static bool
FUNC_3(const struct vmbus_channel *VAR_1, bool VAR_2)
{


 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 200; ++VAR_3) {
  if (FUNC_2(VAR_1))
   return (1);
  if (VAR_2)
   FUNC_1("wchrev", 1);
  else
   FUNC_0(1000);
 }
 return (0);


}
