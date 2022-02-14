
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211req {int i_type; int i_val; int i_name; } ;
typedef int ireq ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,struct ieee80211req*) ;
 int FUNC_1 (struct ieee80211req*,int ,int) ;
 int FUNC_2 (int ,char const*,int) ;

int
FUNC_3(int VAR_1, const char *VAR_2, int VAR_3, int *VAR_4)
{
 struct ieee80211req VAR_5;

 (void) FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 (void) FUNC_2(VAR_5.i_name, VAR_2, sizeof(VAR_5.i_name));
 VAR_5.i_type = VAR_3;
 if (FUNC_0(VAR_1, VAR_0, &VAR_5) < 0)
  return -1;
 *VAR_4 = VAR_5.i_val;
 return 0;
}
