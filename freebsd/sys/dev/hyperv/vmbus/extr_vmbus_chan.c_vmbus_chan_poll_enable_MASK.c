
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct vmbus_channel {int ch_flags; int ch_id; } ;
struct vmbus_chan_pollarg {scalar_t__ poll_hz; struct vmbus_channel* poll_chan; } ;
struct task {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct task*,int ,int ,struct vmbus_chan_pollarg*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct vmbus_channel*,struct task*) ;

void
FUNC_3(struct vmbus_channel *VAR_4, u_int VAR_5)
{
 struct vmbus_chan_pollarg VAR_6;
 struct task VAR_7;

 FUNC_0(VAR_4->ch_flags & VAR_0,
     ("enable polling on non-batch chan%u", VAR_4->ch_id));
 FUNC_0(VAR_5 >= VAR_2 &&
     VAR_5 <= VAR_1, ("invalid pollhz %u", VAR_5));

 VAR_6.poll_chan = VAR_4;
 VAR_6.poll_hz = VAR_5;
 FUNC_1(&VAR_7, 0, VAR_3, &VAR_6);
 FUNC_2(VAR_4, &VAR_7);
}
