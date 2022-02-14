
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sb_csp {TYPE_1__* chip; } ;
struct snd_info_entry {int dummy; } ;
struct TYPE_2__ {int card; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct snd_info_entry**) ;
 int FUNC_1 (struct snd_info_entry*,struct snd_sb_csp*,int ) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct snd_sb_csp * VAR_1, int VAR_2)
{
 char VAR_3[16];
 struct snd_info_entry *VAR_4;
 FUNC_2(VAR_3, "cspD%d", VAR_2);
 if (! FUNC_0(VAR_1->chip->card, VAR_3, &VAR_4))
  FUNC_1(VAR_4, VAR_1, VAR_0);
 return 0;
}
