
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {int ch_subchan_cnt; int ch_subchans; int ch_stflags; int ch_subchan_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct vmbus_channel*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(struct vmbus_channel *VAR_3,
    struct vmbus_channel *VAR_4)
{

 FUNC_2(&VAR_3->ch_subchan_lock, VAR_0);

 if (FUNC_1(&VAR_4->ch_stflags,
     VAR_1))
  FUNC_3("channel is already on the sublist");
 FUNC_0(&VAR_3->ch_subchans, VAR_4, VAR_2);


 VAR_3->ch_subchan_cnt++;
}
