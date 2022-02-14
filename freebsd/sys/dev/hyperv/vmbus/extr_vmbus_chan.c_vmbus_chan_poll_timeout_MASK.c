
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {scalar_t__ ch_poll_intvl; int ch_poll_task; int ch_tq; int ch_id; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 struct vmbus_channel *VAR_1 = VAR_0;

 FUNC_0(VAR_1->ch_poll_intvl != 0,
     ("chan%u: polling timeout in interrupt mode", VAR_1->ch_id));
 FUNC_1(VAR_1->ch_tq, &VAR_1->ch_poll_task);
}
