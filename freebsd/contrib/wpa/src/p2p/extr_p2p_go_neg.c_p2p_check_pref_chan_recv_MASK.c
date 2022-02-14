
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct p2p_message {int pref_freq_list_len; int * pref_freq_list; } ;
struct p2p_device {int dummy; } ;
struct p2p_data {TYPE_1__* cfg; int channels; void* op_channel; void* op_reg_class; } ;
struct p2p_channels {int dummy; } ;
struct TYPE_2__ {int channels; } ;


 int FUNC_0 (int *,int *,int) ;
 unsigned int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct p2p_data*,char*,...) ;
 scalar_t__ FUNC_3 (unsigned int,void**,void**) ;

__attribute__((used)) static void FUNC_4(struct p2p_data *VAR_0, int VAR_1,
         struct p2p_device *VAR_2,
         struct p2p_message *VAR_3,
         unsigned VAR_4[], unsigned int VAR_5)
{
 u8 VAR_6, VAR_7;
 unsigned int VAR_8 = 0, VAR_9, VAR_10;
 int VAR_11 = 0;






 for (VAR_9 = 0; VAR_9 < VAR_5 && !VAR_11; VAR_9++) {
  for (VAR_10 = 2; VAR_10 < (VAR_3->pref_freq_list_len / 2); VAR_10++) {
   VAR_8 = FUNC_1(
    VAR_3->pref_freq_list[2 * VAR_10],
    VAR_3->pref_freq_list[2 * VAR_10 + 1]);
   if (VAR_4[VAR_9] != VAR_8)
    continue;
   if (FUNC_3(VAR_8, &VAR_6,
      &VAR_7) < 0)
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
  FUNC_2(VAR_0,
   "Freq %d MHz is a common preferred channel for both peer and local, use it as operating channel",
   VAR_8);
 } else {
  FUNC_2(VAR_0, "No common preferred channels found!");
 }
}
