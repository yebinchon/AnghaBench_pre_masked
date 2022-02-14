
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int txt ;
struct p2p_message {scalar_t__ pref_freq_list_len; } ;
struct p2p_device {int flags; scalar_t__ oper_freq; } ;
struct p2p_data {TYPE_1__* cfg; int channels; void* op_channel; void* op_reg_class; } ;
struct p2p_channels {int dummy; } ;
struct TYPE_2__ {int channels; int cli_channels; int cb_ctx; scalar_t__ (* get_pref_freq_list ) (int ,int,unsigned int*,unsigned int*) ;scalar_t__ cfg_op_channel; scalar_t__ num_pref_chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (unsigned int*,unsigned int*,unsigned int) ;
 int FUNC_2 (char*,int,char*,unsigned int) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int *,void*,void*) ;
 int FUNC_5 (struct p2p_data*,int,struct p2p_device*,struct p2p_message*,unsigned int*,unsigned int) ;
 int FUNC_6 (struct p2p_data*,int,struct p2p_device*,struct p2p_message*,unsigned int*,unsigned int) ;
 int FUNC_7 (struct p2p_data*,char*,unsigned int,...) ;
 scalar_t__ FUNC_8 (unsigned int,void**,void**) ;
 scalar_t__ FUNC_9 (int ,int,unsigned int*,unsigned int*) ;

void FUNC_10(struct p2p_data *VAR_2, int VAR_3,
    struct p2p_device *VAR_4, struct p2p_message *VAR_5)
{
 unsigned int VAR_6[VAR_1], VAR_7;
 unsigned int VAR_8;
 u8 VAR_9, VAR_10;
 char VAR_11[100], *VAR_12, *VAR_13;
 int VAR_14;






 if (!VAR_2->cfg->get_pref_freq_list || VAR_2->cfg->num_pref_chan ||
     (VAR_4->flags & VAR_0) || VAR_2->cfg->cfg_op_channel)
  return;


 VAR_7 = VAR_1;
 if (VAR_2->cfg->get_pref_freq_list(VAR_2->cfg->cb_ctx, VAR_3, &VAR_7,
      VAR_6))
  return;

 VAR_8 = 0;
 while (VAR_8 < VAR_7) {
  if (FUNC_8(VAR_6[VAR_8], &VAR_9,
     &VAR_10) < 0 ||
      (!FUNC_4(&VAR_2->cfg->channels,
         VAR_9, VAR_10) &&
       (VAR_3 || !FUNC_4(&VAR_2->cfg->cli_channels,
         VAR_9, VAR_10)))) {
   FUNC_7(VAR_2,
    "Ignore local driver frequency preference %u MHz since it is not acceptable for P2P use (go=%d)",
    VAR_6[VAR_8], VAR_3);
   if (VAR_7 - VAR_8 - 1 > 0)
    FUNC_1(&VAR_6[VAR_8], &VAR_6[VAR_8 + 1],
        (VAR_7 - VAR_8 - 1) *
        sizeof(unsigned int));
   VAR_7--;
   continue;
  }


  VAR_8++;
 }

 VAR_12 = VAR_11;
 VAR_13 = VAR_12 + sizeof(VAR_11);
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  VAR_14 = FUNC_2(VAR_12, VAR_13 - VAR_12, " %u", VAR_6[VAR_8]);
  if (FUNC_3(VAR_13 - VAR_12, VAR_14))
   break;
  VAR_12 += VAR_14;
 }
 *VAR_12 = '\0';
 FUNC_7(VAR_2, "Local driver frequency preference (size=%u):%s",
  VAR_7, VAR_11);





 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  if (VAR_6[VAR_8] == (unsigned int) VAR_4->oper_freq)
   break;
 }
 if (VAR_8 != VAR_7 &&
     FUNC_8(VAR_6[VAR_8], &VAR_9, &VAR_10) == 0) {

  VAR_2->op_reg_class = VAR_9;
  VAR_2->op_channel = VAR_10;
  FUNC_0(&VAR_2->channels, &VAR_2->cfg->channels,
     sizeof(struct p2p_channels));
  return;
 }

 FUNC_7(VAR_2,
  "Peer operating channel preference: %d MHz is not in our preferred channel list",
  VAR_4->oper_freq);





 if (VAR_5->pref_freq_list_len == 0)
  FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 else
  FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}
