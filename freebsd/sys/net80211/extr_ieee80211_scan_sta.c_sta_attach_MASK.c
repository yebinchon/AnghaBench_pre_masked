
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_table {int st_entry; } ;
struct ieee80211_scan_state {struct sta_table* ss_priv; } ;


 scalar_t__ FUNC_0 (int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sta_table*,char*) ;
 int FUNC_2 (struct sta_table*,char*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(struct ieee80211_scan_state *VAR_4)
{
 struct sta_table *VAR_5;

 VAR_5 = (struct sta_table *) FUNC_0(sizeof(struct sta_table),
  VAR_2,
  VAR_0 | VAR_1);
 if (VAR_5 == ((void*)0))
  return 0;
 FUNC_2(VAR_5, "scantable");
 FUNC_1(VAR_5, "scangen");
 FUNC_3(&VAR_5->st_entry);
 VAR_4->ss_priv = VAR_5;
 VAR_3++;
 return 1;
}
