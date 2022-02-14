
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211req {int i_type; int i_len; int i_val; int i_name; } ;
typedef int ireq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ,struct ieee80211req*) ;
 int FUNC_1 (struct ieee80211req*,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (char*,int,int,char*) ;

__attribute__((used)) static int
FUNC_4(int VAR_4, int VAR_5, int VAR_6, int *VAR_7)
{
 struct ieee80211req VAR_8;

 (void) FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 (void) FUNC_2(VAR_8.i_name, VAR_3, sizeof(VAR_8.i_name));
 VAR_8.i_type = VAR_5;
 VAR_8.i_len = VAR_6;
 if (FUNC_0(VAR_4, VAR_2, &VAR_8) < 0) {
  FUNC_3("cannot get WME parameter %d, ac %d%s",
      VAR_5, VAR_6 & VAR_1,
      VAR_6 & VAR_0 ? " (BSS)" : "");
  return -1;
 }
 *VAR_7 = VAR_8.i_val;
 return 0;
}
