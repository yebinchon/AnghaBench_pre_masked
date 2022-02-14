
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pdacf {int card; } ;
struct snd_info_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct snd_info_entry**) ;
 int FUNC_1 (struct snd_info_entry*,struct snd_pdacf*,int ) ;

__attribute__((used)) static void FUNC_2(struct snd_pdacf *VAR_1)
{
 struct snd_info_entry *VAR_2;

 if (! FUNC_0(VAR_1->card, "pdaudiocf", &VAR_2))
  FUNC_1(VAR_2, VAR_1, VAR_0);
}
