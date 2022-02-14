
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {scalar_t__ ch_subchan_cnt; int ch_subchans; int ch_stflags; int ch_subchan_lock; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct vmbus_channel*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(struct vmbus_channel *VAR_3,
    struct vmbus_channel *VAR_4)
{

 FUNC_3(&VAR_3->ch_subchan_lock, VAR_0);

 FUNC_0(VAR_3->ch_subchan_cnt > 0,
     ("invalid subchan_cnt %d", VAR_3->ch_subchan_cnt));
 VAR_3->ch_subchan_cnt--;

 if (FUNC_2(&VAR_4->ch_stflags,
     VAR_1) == 0)
  FUNC_4("channel is not on the sublist");
 FUNC_1(&VAR_3->ch_subchans, VAR_4, VAR_2);
}
