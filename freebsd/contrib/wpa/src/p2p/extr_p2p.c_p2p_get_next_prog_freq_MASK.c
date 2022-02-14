
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct p2p_reg_class {size_t channels; void** channel; void* reg_class; } ;
struct p2p_data {void* last_prog_scan_chan; void* last_prog_scan_class; TYPE_1__* cfg; } ;
struct p2p_channels {size_t reg_classes; struct p2p_reg_class* reg_class; } ;
struct TYPE_2__ {struct p2p_channels channels; } ;


 int FUNC_0 (void*,void*) ;
 int FUNC_1 (struct p2p_data*,char*,void*,void*,int) ;

__attribute__((used)) static int FUNC_2(struct p2p_data *VAR_0)
{
 struct p2p_channels *VAR_1;
 struct p2p_reg_class *VAR_2;
 size_t VAR_3, VAR_4;
 int VAR_5 = 0;
 u8 VAR_6;
 u8 VAR_7;
 int VAR_8;

 VAR_1 = &VAR_0->cfg->channels;
 for (VAR_3 = 0; VAR_3 < VAR_1->reg_classes; VAR_3++) {
  VAR_2 = &VAR_1->reg_class[VAR_3];
  if (VAR_2->reg_class != VAR_0->last_prog_scan_class)
   continue;
  for (VAR_4 = 0; VAR_4 < VAR_2->channels; VAR_4++) {
   if (VAR_2->channel[VAR_4] == VAR_0->last_prog_scan_chan) {
    VAR_5 = 1;
    break;
   }
  }
  if (VAR_5)
   break;
 }

 if (!VAR_5) {

  VAR_6 = VAR_1->reg_class[0].reg_class;
  VAR_7 = VAR_1->reg_class[0].channel[0];
 } else {

  VAR_4++;
  if (VAR_4 == VAR_2->channels) {
   VAR_3++;
   if (VAR_3 == VAR_1->reg_classes)
    VAR_3 = 0;
   VAR_4 = 0;
  }
  VAR_6 = VAR_1->reg_class[VAR_3].reg_class;
  VAR_7 = VAR_1->reg_class[VAR_3].channel[VAR_4];
 }

 VAR_8 = FUNC_0(VAR_6, VAR_7);
 FUNC_1(VAR_0, "Next progressive search channel: reg_class %u channel %u -> %d MHz",
  VAR_6, VAR_7, VAR_8);
 VAR_0->last_prog_scan_class = VAR_6;
 VAR_0->last_prog_scan_chan = VAR_7;

 if (VAR_8 == 2412 || VAR_8 == 2437 || VAR_8 == 2462)
  return 0;
 return VAR_8;
}
