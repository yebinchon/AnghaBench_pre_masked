
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {int ch_subchan_cnt; } ;


 int FUNC_0 (struct vmbus_channel*) ;
 int FUNC_1 (struct vmbus_channel*) ;
 int FUNC_2 (struct vmbus_channel*) ;
 struct vmbus_channel** FUNC_3 (struct vmbus_channel*,int) ;
 int FUNC_4 (struct vmbus_channel**,int) ;

void
FUNC_5(struct vmbus_channel *VAR_0)
{
 int VAR_1;

 if (!FUNC_0(VAR_0)) {




  return;
 }




 VAR_1 = VAR_0->ch_subchan_cnt;
 if (VAR_1 > 0) {
  struct vmbus_channel **VAR_2;
  int VAR_3;

  VAR_2 = FUNC_3(VAR_0, VAR_1);
  for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
   FUNC_1(VAR_2[VAR_3]);





   FUNC_2(VAR_2[VAR_3]);
  }
  FUNC_4(VAR_2, VAR_1);
 }


 FUNC_1(VAR_0);
}
