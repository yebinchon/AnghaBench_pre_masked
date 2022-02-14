
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211req {int i_type; int i_len; void* i_data; int i_name; } ;
typedef int ireq ;


 int VAR_0 ;
 int FUNC_0 (int,int ,struct ieee80211req*) ;
 int FUNC_1 (struct ieee80211req*,int ,int) ;
 int FUNC_2 (int ,char const*,int) ;

int
FUNC_3(int VAR_1, const char *VAR_2, int VAR_3, void *VAR_4, int VAR_5)
{
 struct ieee80211req VAR_6;

 (void) FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 (void) FUNC_2(VAR_6.i_name, VAR_2, sizeof(VAR_6.i_name));
 VAR_6.i_type = VAR_3;
 VAR_6.i_data = VAR_4;
 VAR_6.i_len = VAR_5;
 return FUNC_0(VAR_1, VAR_0, &VAR_6);
}
