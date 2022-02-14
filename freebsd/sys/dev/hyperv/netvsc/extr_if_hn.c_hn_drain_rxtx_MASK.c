
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {int dummy; } ;
struct hn_softc {struct vmbus_channel* hn_prichan; } ;


 int FUNC_0 (struct hn_softc*,struct vmbus_channel*) ;
 struct vmbus_channel** FUNC_1 (struct vmbus_channel*,int) ;
 int FUNC_2 (struct vmbus_channel**,int) ;

__attribute__((used)) static void
FUNC_3(struct hn_softc *VAR_0, int VAR_1)
{
 struct vmbus_channel **VAR_2 = ((void*)0);
 int VAR_3;




 VAR_3 = VAR_1 - 1;
 if (VAR_3 > 0)
  VAR_2 = FUNC_1(VAR_0->hn_prichan, VAR_3);

 if (VAR_2 != ((void*)0)) {
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
   FUNC_0(VAR_0, VAR_2[VAR_4]);
 }
 FUNC_0(VAR_0, VAR_0->hn_prichan);

 if (VAR_2 != ((void*)0))
  FUNC_2(VAR_2, VAR_3);
}
