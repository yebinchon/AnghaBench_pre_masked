
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer_oss_slot {scalar_t__ private_data; } ;
struct snd_mixer_oss_file {int dummy; } ;
struct slot {int present; int * numid; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct snd_mixer_oss_file*,struct snd_mixer_oss_slot*,int ,int*,int*,int) ;
 int FUNC_1 (struct snd_mixer_oss_file*,struct snd_mixer_oss_slot*,int ,int*,int*) ;

__attribute__((used)) static int FUNC_2(struct snd_mixer_oss_file *VAR_14,
         struct snd_mixer_oss_slot *VAR_15,
         int *VAR_16, int *VAR_17)
{
 struct slot *VAR_18 = (struct slot *)VAR_15->private_data;

 *VAR_16 = *VAR_17 = 100;
 if (VAR_18->present & VAR_13) {
  FUNC_1(VAR_14, VAR_15, VAR_18->numid[VAR_6], VAR_16, VAR_17);
 } else if (VAR_18->present & VAR_10) {
  FUNC_1(VAR_14, VAR_15, VAR_18->numid[VAR_3], VAR_16, VAR_17);
 } else if (VAR_18->present & VAR_7) {
  FUNC_1(VAR_14, VAR_15, VAR_18->numid[VAR_0], VAR_16, VAR_17);
 }
 if (VAR_18->present & VAR_12) {
  FUNC_0(VAR_14, VAR_15, VAR_18->numid[VAR_5], VAR_16, VAR_17, 0);
 } else if (VAR_18->present & VAR_9) {
  FUNC_0(VAR_14, VAR_15, VAR_18->numid[VAR_2], VAR_16, VAR_17, 0);
 } else if (VAR_18->present & VAR_11) {
  FUNC_0(VAR_14, VAR_15, VAR_18->numid[VAR_4], VAR_16, VAR_17, 1);
 } else if (VAR_18->present & VAR_8) {
  FUNC_0(VAR_14, VAR_15, VAR_18->numid[VAR_1], VAR_16, VAR_17, 1);
 }
 return 0;
}
