
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct sta_info {struct mbo_non_pref_chan_info* non_pref_chan; int cell_capa; } ;
struct mbo_non_pref_chan_info {size_t num_channels; int * channels; int reason_code; int pref; int op_class; struct mbo_non_pref_chan_info* next; } ;


 int FUNC_0 (char*,int,char*,...) ;
 scalar_t__ FUNC_1 (int,int) ;

int FUNC_2(struct sta_info *VAR_0, char *VAR_1, size_t VAR_2)
{
 char *VAR_3 = VAR_1, *VAR_4 = VAR_1 + VAR_2;
 int VAR_5;
 struct mbo_non_pref_chan_info *VAR_6;
 u8 VAR_7;
 unsigned int VAR_8 = 0;

 if (!VAR_0->cell_capa)
  return 0;

 VAR_5 = FUNC_0(VAR_3, VAR_4 - VAR_3, "mbo_cell_capa=%u\n", VAR_0->cell_capa);
 if (FUNC_1(VAR_4 - VAR_3, VAR_5))
  return VAR_3 - VAR_1;
 VAR_3 += VAR_5;

 for (VAR_6 = VAR_0->non_pref_chan; VAR_6; VAR_6 = VAR_6->next) {
  char *VAR_9 = VAR_3;

  VAR_5 = FUNC_0(VAR_9, VAR_4 - VAR_9,
      "non_pref_chan[%u]=%u:%u:%u:",
      VAR_8, VAR_6->op_class, VAR_6->pref,
      VAR_6->reason_code);
  VAR_8++;
  if (FUNC_1(VAR_4 - VAR_9, VAR_5))
   break;
  VAR_9 += VAR_5;

  for (VAR_7 = 0; VAR_7 < VAR_6->num_channels; VAR_7++) {
   VAR_5 = FUNC_0(VAR_9, VAR_4 - VAR_9, "%u%s",
       VAR_6->channels[VAR_7],
       VAR_7 + 1 < VAR_6->num_channels ?
       "," : "");
   if (FUNC_1(VAR_4 - VAR_9, VAR_5)) {
    VAR_9 = ((void*)0);
    break;
   }
   VAR_9 += VAR_5;
  }

  if (!VAR_9)
   break;
  VAR_5 = FUNC_0(VAR_9, VAR_4 - VAR_9, "\n");
  if (FUNC_1(VAR_4 - VAR_9, VAR_5))
   break;
  VAR_9 += VAR_5;
  VAR_3 = VAR_9;
 }

 return VAR_3 - VAR_1;
}
