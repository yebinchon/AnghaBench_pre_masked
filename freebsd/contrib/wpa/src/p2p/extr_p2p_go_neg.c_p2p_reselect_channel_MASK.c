
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct p2p_reg_class {void* reg_class; void** channel; } ;
struct p2p_data {scalar_t__ own_freq_preference; void* op_reg_class; void* op_channel; scalar_t__ best_freq_overall; scalar_t__ best_freq_5; scalar_t__ best_freq_24; TYPE_2__* cfg; } ;
struct p2p_channels {struct p2p_reg_class* reg_class; } ;
struct TYPE_4__ {unsigned int num_pref_chan; TYPE_1__* pref_chan; } ;
struct TYPE_3__ {void* op_class; void* chan; } ;


 scalar_t__ FUNC_0 (struct p2p_channels*,int const*,void**,void**) ;
 int FUNC_1 (void*,void*) ;
 scalar_t__ FUNC_2 (struct p2p_channels*,void*,void*) ;
 int FUNC_3 (struct p2p_data*,char*,void*,void*) ;
 scalar_t__ FUNC_4 (scalar_t__,void**,void**) ;

void FUNC_5(struct p2p_data *VAR_0,
     struct p2p_channels *VAR_1)
{
 struct p2p_reg_class *VAR_2;
 int VAR_3;
 u8 VAR_4, VAR_5;
 unsigned int VAR_6;
 const int VAR_7[] = { 124, 125, 115, 0 };
 const int VAR_8[] = { 126, 127, 116, 117, 0 };
 const int VAR_9[] = { 128, 129, 130, 0 };

 if (VAR_0->own_freq_preference > 0 &&
     FUNC_4(VAR_0->own_freq_preference,
    &VAR_4, &VAR_5) == 0 &&
     FUNC_2(VAR_1, VAR_4, VAR_5)) {
  FUNC_3(VAR_0, "Pick own channel preference (reg_class %u channel %u) from intersection",
   VAR_4, VAR_5);
  VAR_0->op_reg_class = VAR_4;
  VAR_0->op_channel = VAR_5;
  return;
 }

 if (VAR_0->best_freq_overall > 0 &&
     FUNC_4(VAR_0->best_freq_overall,
    &VAR_4, &VAR_5) == 0 &&
     FUNC_2(VAR_1, VAR_4, VAR_5)) {
  FUNC_3(VAR_0, "Pick best overall channel (reg_class %u channel %u) from intersection",
   VAR_4, VAR_5);
  VAR_0->op_reg_class = VAR_4;
  VAR_0->op_channel = VAR_5;
  return;
 }


 VAR_3 = FUNC_1(VAR_0->op_reg_class, VAR_0->op_channel);
 if (VAR_3 >= 2400 && VAR_3 < 2500 && VAR_0->best_freq_5 > 0 &&
     !FUNC_2(VAR_1, VAR_0->op_reg_class,
       VAR_0->op_channel) &&
     FUNC_4(VAR_0->best_freq_5,
    &VAR_4, &VAR_5) == 0 &&
     FUNC_2(VAR_1, VAR_4, VAR_5)) {
  FUNC_3(VAR_0, "Pick best 5 GHz channel (reg_class %u channel %u) from intersection",
   VAR_4, VAR_5);
  VAR_0->op_reg_class = VAR_4;
  VAR_0->op_channel = VAR_5;
  return;
 }

 if (VAR_3 >= 4900 && VAR_3 < 6000 && VAR_0->best_freq_24 > 0 &&
     !FUNC_2(VAR_1, VAR_0->op_reg_class,
       VAR_0->op_channel) &&
     FUNC_4(VAR_0->best_freq_24,
    &VAR_4, &VAR_5) == 0 &&
     FUNC_2(VAR_1, VAR_4, VAR_5)) {
  FUNC_3(VAR_0, "Pick best 2.4 GHz channel (reg_class %u channel %u) from intersection",
   VAR_4, VAR_5);
  VAR_0->op_reg_class = VAR_4;
  VAR_0->op_channel = VAR_5;
  return;
 }


 for (VAR_6 = 0; VAR_0->cfg->pref_chan && VAR_6 < VAR_0->cfg->num_pref_chan; VAR_6++) {
  if (FUNC_2(VAR_1,
       VAR_0->cfg->pref_chan[VAR_6].op_class,
       VAR_0->cfg->pref_chan[VAR_6].chan)) {
   VAR_0->op_reg_class = VAR_0->cfg->pref_chan[VAR_6].op_class;
   VAR_0->op_channel = VAR_0->cfg->pref_chan[VAR_6].chan;
   FUNC_3(VAR_0, "Pick highest preferred channel (op_class %u channel %u) from intersection",
    VAR_0->op_reg_class, VAR_0->op_channel);
   return;
  }
 }


 if (FUNC_0(VAR_1, VAR_9,
          &VAR_0->op_reg_class, &VAR_0->op_channel) == 0) {
  FUNC_3(VAR_0, "Pick possible VHT channel (op_class %u channel %u) from intersection",
   VAR_0->op_reg_class, VAR_0->op_channel);
  return;
 }


 if (FUNC_0(VAR_1, VAR_8,
          &VAR_0->op_reg_class, &VAR_0->op_channel) == 0) {
  FUNC_3(VAR_0, "Pick possible HT40 channel (op_class %u channel %u) from intersection",
   VAR_0->op_reg_class, VAR_0->op_channel);
  return;
 }


 if (FUNC_0(VAR_1, VAR_7,
          &VAR_0->op_reg_class, &VAR_0->op_channel) == 0) {
  FUNC_3(VAR_0, "Pick possible 5 GHz channel (op_class %u channel %u) from intersection",
   VAR_0->op_reg_class, VAR_0->op_channel);
  return;
 }






 if (FUNC_2(VAR_1, VAR_0->op_reg_class,
      VAR_0->op_channel)) {
  FUNC_3(VAR_0, "Using original operating class and channel (op_class %u channel %u) from intersection",
   VAR_0->op_reg_class, VAR_0->op_channel);
  return;
 }





 VAR_2 = &VAR_1->reg_class[0];
 FUNC_3(VAR_0, "Pick another channel (reg_class %u channel %u) from intersection",
  VAR_2->reg_class, VAR_2->channel[0]);
 VAR_0->op_reg_class = VAR_2->reg_class;
 VAR_0->op_channel = VAR_2->channel[0];
}
