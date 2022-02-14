
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int iv_max_keyix; void* iv_key_update_end; void* iv_key_update_begin; int iv_key_delete; int iv_key_set; int iv_key_alloc; int * iv_nw_keys; int iv_def_txkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211vap*,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;

void
FUNC_1(struct ieee80211vap *VAR_6)
{
 int VAR_7;


 VAR_6->iv_max_keyix = VAR_1;
 VAR_6->iv_def_txkey = VAR_0;
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  FUNC_0(VAR_6, &VAR_6->iv_nw_keys[VAR_7],
   VAR_0);




 VAR_6->iv_key_alloc = VAR_2;
 VAR_6->iv_key_set = VAR_4;
 VAR_6->iv_key_delete = VAR_3;
 VAR_6->iv_key_update_begin = VAR_5;
 VAR_6->iv_key_update_end = VAR_5;
}
