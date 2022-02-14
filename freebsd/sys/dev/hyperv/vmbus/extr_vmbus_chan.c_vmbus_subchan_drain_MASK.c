
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {scalar_t__ ch_subchan_cnt; int ch_subchan_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct vmbus_channel*,int *,int ,char*,int ) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct vmbus_channel *VAR_0)
{
 FUNC_0(&VAR_0->ch_subchan_lock);
 while (VAR_0->ch_subchan_cnt > 0)
  FUNC_1(VAR_0, &VAR_0->ch_subchan_lock, 0, "dsubch", 0);
 FUNC_2(&VAR_0->ch_subchan_lock);
}
