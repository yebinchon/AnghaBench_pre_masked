
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_xact {int dummy; } ;
struct vmbus_channel {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (struct vmbus_channel const*) ;
 int FUNC_3 (struct vmbus_channel const*) ;
 void* FUNC_4 (struct vmbus_xact*,size_t*) ;
 void* FUNC_5 (struct vmbus_xact*,size_t*) ;

const void *
FUNC_6(const struct vmbus_channel *VAR_0,
    struct vmbus_xact *VAR_1, size_t *VAR_2, bool VAR_3)
{
 const void *VAR_4;

 if (VAR_3)
  VAR_4 = FUNC_5(VAR_1, VAR_2);
 else
  VAR_4 = FUNC_4(VAR_1, VAR_2);
 if (FUNC_2(VAR_0)) {
  while (!FUNC_3(VAR_0)) {
   if (VAR_3)
    FUNC_1("chxact", 1);
   else
    FUNC_0(1000);
  }
 }
 return (VAR_4);
}
