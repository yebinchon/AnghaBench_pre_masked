
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211req {int i_type; int i_val; int i_len; void* i_data; int i_name; } ;
typedef int ireq ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ,struct ieee80211req*) ;
 int FUNC_2 (struct ieee80211req*,int ,int) ;
 int FUNC_3 (int ,char const*,int) ;

int
FUNC_4(int VAR_1, const char *VAR_2, int VAR_3, int VAR_4, int VAR_5, void *VAR_6)
{
 struct ieee80211req VAR_7;

 (void) FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 (void) FUNC_3(VAR_7.i_name, VAR_2, sizeof(VAR_7.i_name));
 VAR_7.i_type = VAR_3;
 VAR_7.i_val = VAR_4;
 VAR_7.i_len = VAR_5;
 FUNC_0(VAR_7.i_len == VAR_5);
 VAR_7.i_data = VAR_6;
 if (FUNC_1(VAR_1, VAR_0, &VAR_7) < 0)
  return (-1);
 return (0);
}
