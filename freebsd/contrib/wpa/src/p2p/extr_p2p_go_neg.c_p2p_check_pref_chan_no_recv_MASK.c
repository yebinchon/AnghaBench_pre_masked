
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct p2p_message {unsigned int channel_list_len; scalar_t__* channel_list; } ;
struct p2p_device {int dummy; } ;
struct p2p_data {TYPE_1__* cfg; int channels; scalar_t__ op_channel; scalar_t__ op_reg_class; } ;
struct p2p_channels {int dummy; } ;
struct TYPE_2__ {int channels; } ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct p2p_data*,char*,...) ;
 scalar_t__ FUNC_2 (unsigned int,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static void FUNC_3(struct p2p_data *VAR_0, int VAR_1,
     struct p2p_device *VAR_2,
     struct p2p_message *VAR_3,
     unsigned VAR_4[], unsigned int VAR_5)
{
 u8 VAR_6, VAR_7;
 unsigned int VAR_8 = 0, VAR_9, VAR_10;
 int VAR_11 = 0;

 FUNC_1(VAR_0,
  "Peer didn't provide a preferred frequency list, see if any of our preferred channels are supported by peer device");





 for (VAR_9 = 0; VAR_9 < VAR_5 && !VAR_11; VAR_9++) {

  VAR_8 = VAR_4[VAR_9];
  if (FUNC_2(VAR_8, &VAR_6,
     &VAR_7) < 0)
   continue;
  for (VAR_10 = 0; VAR_10 < VAR_3->channel_list_len; VAR_10++) {

   if (VAR_7 != VAR_3->channel_list[VAR_10])
    continue;

   VAR_0->op_reg_class = VAR_6;
   VAR_0->op_channel = VAR_7;
   FUNC_0(&VAR_0->channels, &VAR_0->cfg->channels,
      sizeof(struct p2p_channels));
   VAR_11 = 1;
   break;
  }
 }

 if (VAR_11) {
  FUNC_1(VAR_0,
   "Freq %d MHz is a preferred channel and is also supported by peer, use it as the operating channel",
   VAR_8);
 } else {
  FUNC_1(VAR_0,
   "None of our preferred channels are supported by peer!");
 }
}
