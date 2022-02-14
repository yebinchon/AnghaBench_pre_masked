
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u8 ;
struct TYPE_6__ {int reg_classes; TYPE_1__* reg_class; } ;
struct p2p_data {unsigned int op_reg_class; unsigned int op_channel; TYPE_2__* cfg; TYPE_3__ channels; } ;
struct p2p_channels {int dummy; } ;
struct TYPE_5__ {int channels; int cli_channels; } ;
struct TYPE_4__ {int channels; unsigned int reg_class; unsigned int* channel; } ;


 int FUNC_0 (TYPE_3__*,int *,int) ;
 int FUNC_1 (int *,unsigned int,unsigned int) ;
 int FUNC_2 (struct p2p_data*,char*,unsigned int,...) ;
 scalar_t__ FUNC_3 (unsigned int,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct p2p_data *VAR_0,
        unsigned int VAR_1,
        unsigned int VAR_2, int VAR_3)
{
 u8 VAR_4, VAR_5;
 unsigned int VAR_6 = VAR_1 ? VAR_1 : VAR_2;

 FUNC_2(VAR_0, "Prepare channel pref - force_freq=%u pref_freq=%u go=%d",
  VAR_1, VAR_2, VAR_3);
 if (FUNC_3(VAR_6, &VAR_4, &VAR_5) < 0) {
  FUNC_2(VAR_0, "Unsupported frequency %u MHz", VAR_6);
  return -1;
 }

 if (!FUNC_1(&VAR_0->cfg->channels, VAR_4, VAR_5) &&
     (VAR_3 || !FUNC_1(&VAR_0->cfg->cli_channels, VAR_4,
       VAR_5))) {
  FUNC_2(VAR_0, "Frequency %u MHz (oper_class %u channel %u) not allowed for P2P",
   VAR_6, VAR_4, VAR_5);
  return -1;
 }

 VAR_0->op_reg_class = VAR_4;
 VAR_0->op_channel = VAR_5;

 if (VAR_1) {
  VAR_0->channels.reg_classes = 1;
  VAR_0->channels.reg_class[0].channels = 1;
  VAR_0->channels.reg_class[0].reg_class = VAR_0->op_reg_class;
  VAR_0->channels.reg_class[0].channel[0] = VAR_0->op_channel;
 } else {
  FUNC_0(&VAR_0->channels, &VAR_0->cfg->channels,
     sizeof(struct p2p_channels));
 }

 return 0;
}
