
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {scalar_t__ ch_poll_intvl; int ch_poll_task; int ch_tq; int ch_poll_timeo; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int *) ;

__attribute__((used)) static bool
FUNC_2(struct vmbus_channel *VAR_0)
{

 if (VAR_0->ch_poll_intvl == 0) {

  return (0);
 }





 FUNC_0(&VAR_0->ch_poll_timeo);
 VAR_0->ch_poll_intvl = 0;







 FUNC_1(VAR_0->ch_tq, &VAR_0->ch_poll_task, ((void*)0));


 return (1);
}
