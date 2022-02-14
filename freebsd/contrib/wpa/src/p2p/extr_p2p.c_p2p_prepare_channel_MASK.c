
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p2p_device {int flags; } ;
struct p2p_data {int op_channel; int op_reg_class; int channels; TYPE_1__* cfg; int no_go_freq; } ;
struct TYPE_2__ {int cli_channels; } ;


 int VAR_0 ;
 int FUNC_0 (struct p2p_data*,char*,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct p2p_data*,char*,unsigned int,unsigned int,...) ;
 int FUNC_4 (struct p2p_data*) ;
 scalar_t__ FUNC_5 (struct p2p_data*,unsigned int,unsigned int,int) ;

int FUNC_6(struct p2p_data *VAR_1, struct p2p_device *VAR_2,
   unsigned int VAR_3, unsigned int VAR_4, int VAR_5)
{
 FUNC_3(VAR_1, "Prepare channel - force_freq=%u pref_freq=%u go=%d",
  VAR_3, VAR_4, VAR_5);
 if (VAR_3 || VAR_4) {
  if (FUNC_5(VAR_1, VAR_3, VAR_4, VAR_5) <
      0)
   return -1;
 } else {
  FUNC_4(VAR_1);
 }
 FUNC_0(VAR_1, "prepared channels", &VAR_1->channels);
 if (VAR_5)
  FUNC_1(&VAR_1->channels, &VAR_1->no_go_freq);
 else if (!VAR_3)
  FUNC_2(&VAR_1->channels,
        &VAR_1->cfg->cli_channels);
 FUNC_0(VAR_1, "after go/cli filter/add", &VAR_1->channels);

 FUNC_3(VAR_1, "Own preference for operation channel: Operating Class %u Channel %u%s",
  VAR_1->op_reg_class, VAR_1->op_channel,
  VAR_3 ? " (forced)" : "");

 if (VAR_3)
  VAR_2->flags |= VAR_0;
 else
  VAR_2->flags &= ~VAR_0;

 return 0;
}
