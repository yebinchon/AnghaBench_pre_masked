
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_info {int next; } ;
struct hostapd_data {int dummy; } ;


 int VAR_0 ;
 struct sta_info* FUNC_0 (struct hostapd_data*,int *) ;
 int FUNC_1 (struct hostapd_data*,int ,char*,size_t) ;
 scalar_t__ FUNC_2 (char const*,int *) ;
 int FUNC_3 (char*,size_t,char*) ;
 scalar_t__ FUNC_4 (size_t,int) ;

int FUNC_5(struct hostapd_data *VAR_1, const char *VAR_2,
    char *VAR_3, size_t VAR_4)
{
 u8 VAR_5[VAR_0];
 struct sta_info *VAR_6;
 int VAR_7;

 if (FUNC_2(VAR_2, VAR_5) ||
     (VAR_6 = FUNC_0(VAR_1, VAR_5)) == ((void*)0)) {
  VAR_7 = FUNC_3(VAR_3, VAR_4, "FAIL\n");
  if (FUNC_4(VAR_4, VAR_7))
   return 0;
  return VAR_7;
 }

 if (!VAR_6->next)
  return 0;

 return FUNC_1(VAR_1, VAR_6->next, VAR_3, VAR_4);
}
