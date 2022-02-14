
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {int ch_flags; int ch_id; } ;
struct task {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct task*,int ,int ,struct vmbus_channel*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct vmbus_channel*,struct task*) ;

void
FUNC_3(struct vmbus_channel *VAR_2)
{
 struct task VAR_3;

 FUNC_0(VAR_2->ch_flags & VAR_0,
     ("disable polling on non-batch chan%u", VAR_2->ch_id));

 FUNC_1(&VAR_3, 0, VAR_1, VAR_2);
 FUNC_2(VAR_2, &VAR_3);
}
