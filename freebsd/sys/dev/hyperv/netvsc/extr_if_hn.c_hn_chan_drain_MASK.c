
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {int dummy; } ;
struct hn_softc {int hn_prichan; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct vmbus_channel*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vmbus_channel*) ;
 int FUNC_4 (struct vmbus_channel*) ;

__attribute__((used)) static void
FUNC_5(struct hn_softc *VAR_0, struct vmbus_channel *VAR_1)
{






 while (!FUNC_3(VAR_1) ||
     (!FUNC_2(VAR_0->hn_prichan) &&
      !FUNC_4(VAR_1)))
  FUNC_0("waitch", 1);
 FUNC_1(VAR_1);
}
