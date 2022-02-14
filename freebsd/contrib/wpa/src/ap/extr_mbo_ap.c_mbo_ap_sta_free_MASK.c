
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {struct mbo_non_pref_chan_info* non_pref_chan; } ;
struct mbo_non_pref_chan_info {struct mbo_non_pref_chan_info* next; } ;


 int FUNC_0 (struct mbo_non_pref_chan_info*) ;

void FUNC_1(struct sta_info *VAR_0)
{
 struct mbo_non_pref_chan_info *VAR_1, *VAR_2;

 VAR_1 = VAR_0->non_pref_chan;
 VAR_0->non_pref_chan = ((void*)0);
 while (VAR_1) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_0(VAR_2);
 }
}
