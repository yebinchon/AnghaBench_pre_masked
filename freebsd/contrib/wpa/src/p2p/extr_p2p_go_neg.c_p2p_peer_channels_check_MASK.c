
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct p2p_reg_class {int channels; int channel; int reg_class; } ;
struct p2p_channels {size_t reg_classes; struct p2p_reg_class* reg_class; } ;
struct p2p_device {struct p2p_channels channels; int country; } ;
struct p2p_data {TYPE_1__* cfg; } ;
struct TYPE_2__ {int * country; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int const*,int *,int) ;
 int FUNC_1 (int ,int const*,int) ;
 int FUNC_2 (struct p2p_channels*,int ,int) ;
 int FUNC_3 (struct p2p_channels*,struct p2p_channels*,struct p2p_channels*) ;
 int FUNC_4 (struct p2p_data*,char*,int,int,int) ;
 int FUNC_5 (struct p2p_data*,char*,...) ;
 int FUNC_6 (int ,char*,int const*,int) ;

int FUNC_7(struct p2p_data *VAR_3, struct p2p_channels *VAR_4,
       struct p2p_device *VAR_5,
       const u8 *VAR_6, size_t VAR_7)
{
 const u8 *VAR_8, *VAR_9;
 struct p2p_channels *VAR_10;
 u8 VAR_11;
 struct p2p_channels VAR_12;

 VAR_10 = &VAR_5->channels;
 FUNC_2(VAR_10, 0, sizeof(*VAR_10));
 VAR_8 = VAR_6;
 VAR_9 = VAR_6 + VAR_7;

 if (VAR_9 - VAR_8 < 3)
  return -1;
 FUNC_1(VAR_5->country, VAR_8, 3);
 FUNC_6(VAR_0, "P2P: Peer country", VAR_8, 3);
 if (VAR_8[2] != 0x04 && FUNC_0(VAR_8, VAR_3->cfg->country, 2) != 0) {
  FUNC_5(VAR_3, "Mismatching country (ours=%c%c peer's=%c%c)",
   VAR_3->cfg->country[0], VAR_3->cfg->country[1],
   VAR_8[0], VAR_8[1]);
  return -1;
 }
 VAR_8 += 3;

 while (VAR_9 - VAR_8 > 2) {
  struct p2p_reg_class *VAR_13 = &VAR_10->reg_class[VAR_10->reg_classes];
  VAR_13->reg_class = *VAR_8++;
  VAR_11 = *VAR_8++;
  if (VAR_11 > VAR_9 - VAR_8) {
   FUNC_5(VAR_3, "Invalid peer Channel List");
   return -1;
  }
  VAR_13->channels = VAR_11 > VAR_2 ?
   VAR_2 : VAR_11;
  FUNC_1(VAR_13->channel, VAR_8, VAR_13->channels);
  VAR_8 += VAR_11;
  VAR_10->reg_classes++;
  if (VAR_10->reg_classes == VAR_1)
   break;
 }

 FUNC_3(VAR_4, &VAR_5->channels, &VAR_12);
 FUNC_4(VAR_3, "Own reg_classes %d peer reg_classes %d intersection reg_classes %d",
  (int) VAR_4->reg_classes,
  (int) VAR_5->channels.reg_classes,
  (int) VAR_12.reg_classes);
 if (VAR_12.reg_classes == 0) {
  FUNC_5(VAR_3, "No common channels found");
  return -1;
 }
 return 0;
}
