
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer_oss_assign_table {char* name; int index; } ;
struct snd_mixer_oss {int dummy; } ;
struct slot {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct snd_mixer_oss*,struct slot*,char*,int ,int ) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static int FUNC_2(struct snd_mixer_oss *VAR_10,
     struct snd_mixer_oss_assign_table *VAR_11,
     struct slot *VAR_12)
{
 char VAR_13[64];
 int VAR_14;

 VAR_14 = FUNC_0(VAR_10, VAR_12, VAR_11->name, VAR_11->index,
           VAR_3);
 if (VAR_14)
  return VAR_14;
 FUNC_1(VAR_13, "%s Switch", VAR_11->name);
 VAR_14 = FUNC_0(VAR_10, VAR_12, VAR_13, VAR_11->index,
           VAR_5);
 if (VAR_14)
  return VAR_14;
 FUNC_1(VAR_13, "%s Route", VAR_11->name);
 VAR_14 = FUNC_0(VAR_10, VAR_12, VAR_13, VAR_11->index,
           VAR_4);
 if (VAR_14)
  return VAR_14;
 FUNC_1(VAR_13, "%s Volume", VAR_11->name);
 VAR_14 = FUNC_0(VAR_10, VAR_12, VAR_13, VAR_11->index,
           VAR_6);
 if (VAR_14)
  return VAR_14;
 FUNC_1(VAR_13, "%s Playback Switch", VAR_11->name);
 VAR_14 = FUNC_0(VAR_10, VAR_12, VAR_13, VAR_11->index,
           VAR_8);
 if (VAR_14)
  return VAR_14;
 FUNC_1(VAR_13, "%s Playback Route", VAR_11->name);
 VAR_14 = FUNC_0(VAR_10, VAR_12, VAR_13, VAR_11->index,
           VAR_7);
 if (VAR_14)
  return VAR_14;
 FUNC_1(VAR_13, "%s Playback Volume", VAR_11->name);
 VAR_14 = FUNC_0(VAR_10, VAR_12, VAR_13, VAR_11->index,
           VAR_9);
 if (VAR_14)
  return VAR_14;
 FUNC_1(VAR_13, "%s Capture Switch", VAR_11->name);
 VAR_14 = FUNC_0(VAR_10, VAR_12, VAR_13, VAR_11->index,
           VAR_1);
 if (VAR_14)
  return VAR_14;
 FUNC_1(VAR_13, "%s Capture Route", VAR_11->name);
 VAR_14 = FUNC_0(VAR_10, VAR_12, VAR_13, VAR_11->index,
           VAR_0);
 if (VAR_14)
  return VAR_14;
 FUNC_1(VAR_13, "%s Capture Volume", VAR_11->name);
 VAR_14 = FUNC_0(VAR_10, VAR_12, VAR_13, VAR_11->index,
           VAR_2);
 if (VAR_14)
  return VAR_14;

 return 0;
}
